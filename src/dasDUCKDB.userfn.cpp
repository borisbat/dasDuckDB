#include "daScript/misc/platform.h"

#include "daScript/ast/ast.h"
#include "daScript/ast/ast_interop.h"
#include "daScript/ast/ast_typefactory_bind.h"
#include "daScript/ast/ast_handle.h"
#include "daScript/simulate/bind_enum.h"
#include "daScript/simulate/aot.h"

#include "dasDUCKDB.h"
#include "aot_duckdb.h"

#include <string>

namespace das {

// ============================================================================
// User-defined SQL scalar functions: the DuckDB flavor of dasSQLITE's
// register_function trampoline (see modules/dasSQLITE/src/dasSQLITE.userfn.cpp
// in the daslang repo — same RegisteredScalarFn/tag design, chunk-vectorized
// callback instead of SQLite's per-row one).
//
// NULL handling (v1): any NULL input cell short-circuits that row to NULL
// without invoking the daslang function. Panic in the daslang function is
// caught via Context::runWithCatch and surfaced via
// duckdb_scalar_function_set_error (fails the whole chunk — DuckDB has no
// per-row error channel).
// ============================================================================

enum class SqlFnTag : uint8_t {
    Int    = 0,  // 32-bit signed
    Int64  = 1,  // 64-bit signed
    Float  = 2,  // 32-bit IEEE 754
    Double = 3,  // 64-bit IEEE 754
    Bool   = 4,
    String = 5,
};

static constexpr int MAX_SQL_FN_ARGS = 4;

struct RegisteredScalarFn {
    Context * context = nullptr;
    Func      fn;
    SqlFnTag  retTag = SqlFnTag::Int64;
    uint8_t   nArgs  = 0;
    SqlFnTag  argTags[MAX_SQL_FN_ARGS] = { SqlFnTag::Int64, SqlFnTag::Int64, SqlFnTag::Int64, SqlFnTag::Int64 };
    LineInfo  at;
};

static void register_fn_destroy ( void * p ) {
    delete static_cast<RegisteredScalarFn *>(p);
}

// Params and return are declared with the WIDE storage-class types (BIGINT / DOUBLE /
// VARCHAR) — the [sql_table] rail stores every int/bool flavor as BIGINT and every
// float flavor as DOUBLE, and DuckDB's binder refuses narrowing implicit casts
// (BIGINT arg -> INTEGER param errors). The trampoline narrows to the das types,
// mirroring how the SQLite flavor marshals through sqlite3_value_int64/_double.
static duckdb_type tag_to_duckdb_type ( SqlFnTag tag ) {
    switch ( tag ) {
        case SqlFnTag::Int:    return DUCKDB_TYPE_BIGINT;
        case SqlFnTag::Int64:  return DUCKDB_TYPE_BIGINT;
        case SqlFnTag::Float:  return DUCKDB_TYPE_DOUBLE;
        case SqlFnTag::Double: return DUCKDB_TYPE_DOUBLE;
        case SqlFnTag::Bool:   return DUCKDB_TYPE_BIGINT;
        case SqlFnTag::String: return DUCKDB_TYPE_VARCHAR;
    }
    return DUCKDB_TYPE_BIGINT;
}

static void scalar_trampoline ( duckdb_function_info info, duckdb_data_chunk input, duckdb_vector output ) {
    auto R = (RegisteredScalarFn *) duckdb_scalar_function_get_extra_info(info);
    if ( !R || !R->context || !R->fn.PTR ) {
        duckdb_scalar_function_set_error(info, "[sql_function]: invalid registration");
        return;
    }
    idx_t nRows = duckdb_data_chunk_get_size(input);
    idx_t nCols = duckdb_data_chunk_get_column_count(input);
    if ( (int) nCols != R->nArgs ) {
        duckdb_scalar_function_set_error(info, "[sql_function]: argument count mismatch");
        return;
    }
    void *     colData[MAX_SQL_FN_ARGS] = {};
    uint64_t * colMask[MAX_SQL_FN_ARGS] = {};
    for ( idx_t c = 0; c < nCols; ++c ) {
        duckdb_vector v = duckdb_data_chunk_get_vector(input, c);
        colData[c] = duckdb_vector_get_data(v);
        colMask[c] = duckdb_vector_get_validity(v);   // may be null (= all valid)
    }
    void * outData = duckdb_vector_get_data(output);
    duckdb_vector_ensure_validity_writable(output);
    uint64_t * outMask = duckdb_vector_get_validity(output);
    // per-row string temp — inputs are not null-terminated duckdb_string_t cells
    std::string strTemp[MAX_SQL_FN_ARGS];
    for ( idx_t row = 0; row < nRows; ++row ) {
        bool anyNull = false;
        for ( idx_t c = 0; c < nCols; ++c ) {
            if ( colMask[c] && !duckdb_validity_row_is_valid(colMask[c], row) ) {
                anyNull = true;
                break;
            }
        }
        if ( anyNull ) {
            duckdb_validity_set_row_invalid(outMask, row);
            continue;
        }
        vec4f args[MAX_SQL_FN_ARGS] = { v_zero(), v_zero(), v_zero(), v_zero() };
        for ( idx_t c = 0; c < nCols; ++c ) {
            switch ( R->argTags[c] ) {
                case SqlFnTag::Int:
                    args[c] = cast<int32_t>::from((int32_t) ((int64_t *) colData[c])[row]);
                    break;
                case SqlFnTag::Int64:
                    args[c] = cast<int64_t>::from(((int64_t *) colData[c])[row]);
                    break;
                case SqlFnTag::Float:
                    args[c] = cast<float>::from((float) ((double *) colData[c])[row]);
                    break;
                case SqlFnTag::Double:
                    args[c] = cast<double>::from(((double *) colData[c])[row]);
                    break;
                case SqlFnTag::Bool:
                    args[c] = cast<bool>::from(((int64_t *) colData[c])[row] != 0);
                    break;
                case SqlFnTag::String: {
                    duckdb_string_t * cell = &((duckdb_string_t *) colData[c])[row];
                    strTemp[c].assign(duckdb_string_t_data(cell), duckdb_string_t_length(*cell));
                    args[c] = cast<const char *>::from(strTemp[c].c_str());
                    break;
                }
            }
        }
        vec4f result = v_zero();
        bool ok = R->context->runWithCatch([&]() {
            result = R->context->callOrFastcall(R->fn.PTR, args, &R->at);
        });
        if ( !ok ) {
            const char * msg = R->context->getException();
            std::string copy = msg ? msg : "[sql_function]: panic in daslang function";
            R->context->last_exception = R->context->exception;
            R->context->exception = nullptr;
            R->context->stopFlags = 0;
            duckdb_scalar_function_set_error(info, copy.c_str());
            return;
        }
        switch ( R->retTag ) {
            case SqlFnTag::Int:
                ((int64_t *) outData)[row] = (int64_t) cast<int32_t>::to(result);
                break;
            case SqlFnTag::Int64:
                ((int64_t *) outData)[row] = cast<int64_t>::to(result);
                break;
            case SqlFnTag::Float:
                ((double *) outData)[row] = (double) cast<float>::to(result);
                break;
            case SqlFnTag::Double:
                ((double *) outData)[row] = cast<double>::to(result);
                break;
            case SqlFnTag::Bool:
                ((int64_t *) outData)[row] = cast<bool>::to(result) ? 1 : 0;
                break;
            case SqlFnTag::String: {
                const char * s = cast<const char *>::to(result);
                if ( !s ) {
                    duckdb_validity_set_row_invalid(outMask, row);
                } else {
                    duckdb_vector_assign_string_element(output, row, s);
                }
                break;
            }
        }
    }
}

// Daslang-facing entry. Owns the RegisteredScalarFn allocation; on success,
// DuckDB takes ownership via the extra-info delete callback.
int duckdb_register_das_function (
        duckdb_connection conn, const char * name, Func fn, int nArgs,
        uint8_t tag0, uint8_t tag1, uint8_t tag2, uint8_t tag3,
        uint8_t retTag, bool deterministic,
        Context * context, LineInfoArg * at ) {
    if ( !conn ) return int(DuckDBError);
    if ( !name || !*name ) return int(DuckDBError);
    if ( !fn.PTR ) return int(DuckDBError);
    if ( nArgs < 0 || nArgs > MAX_SQL_FN_ARGS ) return int(DuckDBError);
    auto R = new RegisteredScalarFn();
    R->context = context;
    R->fn      = fn;
    R->retTag  = SqlFnTag(retTag);
    R->nArgs   = uint8_t(nArgs);
    R->at      = at ? *at : LineInfo();
    const uint8_t tagSlots[MAX_SQL_FN_ARGS] = { tag0, tag1, tag2, tag3 };
    for ( int i = 0; i < nArgs; ++i ) {
        R->argTags[i] = SqlFnTag(tagSlots[i]);
    }
    duckdb_scalar_function f = duckdb_create_scalar_function();
    duckdb_scalar_function_set_name(f, name);
    for ( int i = 0; i < nArgs; ++i ) {
        duckdb_logical_type t = duckdb_create_logical_type(tag_to_duckdb_type(R->argTags[i]));
        duckdb_scalar_function_add_parameter(f, t);
        duckdb_destroy_logical_type(&t);
    }
    duckdb_logical_type rt = duckdb_create_logical_type(tag_to_duckdb_type(R->retTag));
    duckdb_scalar_function_set_return_type(f, rt);
    duckdb_destroy_logical_type(&rt);
    if ( !deterministic ) {
        duckdb_scalar_function_set_volatile(f);
    }
    duckdb_scalar_function_set_extra_info(f, R, register_fn_destroy);
    duckdb_scalar_function_set_function(f, scalar_trampoline);
    duckdb_state rc = duckdb_register_scalar_function(conn, f);
    duckdb_destroy_scalar_function(&f);
    // extra-info ownership passed to the function object; destroying the handle after a
    // failed registration also fires the delete callback, so R is freed either way.
    return int(rc);
}

}

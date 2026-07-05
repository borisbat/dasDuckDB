options gen2
options indenting = 4
options no_unused_function_arguments = false
options strict_smart_pointers

module duckdb_provider shared public

require duckdb
require duckdb/duckdb_stmt public
require strings
require daslib/sql public
require daslib/sql_provider public
require daslib/ast_boost
require daslib/templates
require daslib/templates_boost

//! DuckDB's `SqlProviderInfo` registration shim — the lean bridge between the raw
//! `duckdb` C binding and the neutral registry in `daslib/sql_provider`. Deliberately
//! does NOT require `duckdb/duckdb_boost`: `daslib/sql_boost` pulls this file into
//! every consulting macro context via `require ?duckdb`, and requiring the boost
//! here would cycle. Runtime surface (SqlRunner, exec/query, runner helpers) lives
//! in `duckdb/duckdb_boost`.

def duckdb_sql_type(t : SqlType) : string {
    //! Render an abstract ``SqlType`` to its DuckDB-dialect spelling. `Integer` is
    //! ``BIGINT`` — DuckDB types are strict (no SQLite affinity), and das `int64`
    //! must fit the column.
    if (t == SqlType.Integer) return "BIGINT"
    if (t == SqlType.Real) return "DOUBLE"
    if (t == SqlType.Text) return "VARCHAR"
    if (t == SqlType.Blob) return "BLOB"
    return "NULL"
}

def duckdb_decl_to_sql_type(decl_type : string) : SqlType {
    //! Normalize a DuckDB declared column type to the abstract storage class.
    //! Strict-typed: exact families, no affinity rules.
    let upper = decl_type |> to_upper
    if (find(upper, "INT") >= 0 || upper == "BOOLEAN" || upper == "BOOL") return SqlType.Integer
    if (find(upper, "DOUBLE") >= 0 || find(upper, "FLOAT") >= 0 || find(upper, "REAL") >= 0 || find(upper, "DECIMAL") >= 0) return SqlType.Real
    if (find(upper, "CHAR") >= 0 || find(upper, "TEXT") >= 0 || find(upper, "STRING") >= 0) return SqlType.Text
    if (find(upper, "BLOB") >= 0 || find(upper, "BYTEA") >= 0 || find(upper, "BINARY") >= 0) return SqlType.Blob
    return SqlType.Text
}

def private _duck_text_cell(res : duckdb_result?; col, row : uint64) : string {
    // context-heap copy of a malloc'd varchar cell
    let p = unsafe(duckdb_value_varchar(res, col, row))
    if (p == "") {
        return ""
    }
    let s = clone_string(p)
    unsafe {
        duckdb_free(reinterpret<void?>(p))
    }
    return s
}

def duckdb_read_table_info(conn : duckdb_connection; schema_name : string; tbl_name : string) : Result<array<SchemaFromCol>, string> {
    //! `PRAGMA table_info` → normalized column metadata (DuckDB implements the
    //! SQLite-compatible pragma). `schema_name` qualifies for attached catalogs;
    //! empty for the main DB.
    var rows : array<SchemaFromCol>
    let sql = empty(schema_name) ? "PRAGMA table_info({sql_quote_id(tbl_name)})" : "PRAGMA {sql_quote_id(schema_name)}.table_info({sql_quote_id(tbl_name)})"
    var res : duckdb_result
    if (duckdb_query(conn, sql, unsafe(addr(res))) != duckdb_state.DuckDBSuccess) {
        let msg = "PRAGMA table_info({tbl_name}) failed: {clone_string(duckdb_result_error(unsafe(addr(res))))}"
        duckdb_destroy_result(unsafe(addr(res)))
        return err(msg, type<array<SchemaFromCol>>)
    }
    let n = duckdb_row_count(unsafe(addr(res)))
    var i = 0ul
    while (i < n) {
        // Columns: 0=cid, 1=name, 2=type, 3=notnull, 4=dflt_value, 5=pk
        let dt = _duck_text_cell(unsafe(addr(res)), 2ul, i)
        rows |> emplace(SchemaFromCol(
            name = _duck_text_cell(unsafe(addr(res)), 1ul, i),
            decl_type = dt,
            data_type = duckdb_decl_to_sql_type(dt),
            not_null = duckdb_value_boolean(unsafe(addr(res)), 3ul, i),
            pk = duckdb_value_boolean(unsafe(addr(res)), 5ul, i)
        ))
        i++
    }
    duckdb_destroy_result(unsafe(addr(res)))
    return <- move_ok(rows, type<string>)
}

def private _duckdb_read_table_schema(path : string; tbl_name : string) : Result<array<SchemaFromCol>, string> {
    // READ_ONLY open so a bad path won't create a stray database file.
    var cfg : duckdb_config
    if (duckdb_create_config(unsafe(addr(cfg))) != duckdb_state.DuckDBSuccess) {
        return err("duckdb_create_config failed: out of memory", type<array<SchemaFromCol>>)
    }
    duckdb_set_config(cfg, "access_mode", "READ_ONLY")
    var handle : duckdb_database
    var open_err : string
    let orc = unsafe(duckdb_open_ext(path, unsafe(addr(handle)), cfg, unsafe(addr(open_err))))
    duckdb_destroy_config(unsafe(addr(cfg)))
    if (orc != duckdb_state.DuckDBSuccess) {
        let msg = "duckdb_open(\"{path}\", READ_ONLY) failed: {clone_string(open_err)}"
        unsafe {
            duckdb_free(reinterpret<void?>(open_err))
        }
        return err(msg, type<array<SchemaFromCol>>)
    }
    var conn : duckdb_connection
    if (duckdb_connect(handle, unsafe(addr(conn))) != duckdb_state.DuckDBSuccess) {
        duckdb_close(unsafe(addr(handle)))
        return err("duckdb_connect(\"{path}\") failed", type<array<SchemaFromCol>>)
    }
    var r <- duckdb_read_table_info(conn, "", tbl_name)
    duckdb_disconnect(unsafe(addr(conn)))
    duckdb_close(unsafe(addr(handle)))
    return <- r
}

def private _duckdb_make_stmt_type() : TypeDeclPtr => qmacro_type(type<DuckStmt?>)

// Both flavors splice the SAME mutable type: das const-ness flows through field
// access, and DuckDB's readers must reach `res`/`row` through the handle — so the
// reader-block parameter stays mutable (the runner helpers declare it `var` to match).
def private _duckdb_make_stmt_type_const() : TypeDeclPtr => qmacro_type(type<DuckStmt?>)

[unused_argument(ordinal)]
def private _duckdb_render_placeholder(ordinal : int) : string => "?"

// json_extract_string, NOT json_extract: DuckDB's json_extract returns a typed JSON
// value, so comparing against a bound VARCHAR coerces the comparand INTO json and
// fails ("Malformed JSON"). json_extract_string returns VARCHAR — matching SQLite's
// unquoted-scalar json_extract semantics for predicate/projection descent.
def private _duckdb_render_json_extract(target : string; jsonPath : string) : string => "json_extract_string({target}, {jsonPath})"

def private _duckdb_quote_id(id : string) : string => sql_quote_id(id)

def register_duckdb_provider {
    //! Registers the duckdb `SqlProviderInfo` entry in the CURRENT macro context.
    //! Reached via `sql_register_present_providers` (daslib/sql_boost) from each
    //! consulting macro module's own `[_macro]`.
    var info = SqlProviderInfo(
        name = "duckdb",
        runnerModule = "duckdb_boost",
        runnerStruct = "SqlRunner",
        makeStmtType = @@_duckdb_make_stmt_type,
        makeStmtTypeConst = @@_duckdb_make_stmt_type_const,
        renderPlaceholder = @@_duckdb_render_placeholder,
        noLimitSpelling = "",
        renderJsonExtract = @@_duckdb_render_json_extract,
        quoteId = @@_duckdb_quote_id,
        sqlTypeFor = @@duckdb_sql_type,
        identityDdl = "PRIMARY KEY",
        readTableSchema = @@_duckdb_read_table_schema,
        caps = SqlProviderCaps.client_udfs | SqlProviderCaps.returning,
        pkReport = SqlPkReport.ReturningPk)
    register_sql_provider(info)
}

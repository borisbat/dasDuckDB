options gen2
options indenting = 4
options no_unused_function_arguments = false
options strict_smart_pointers

module duckdb_boost shared public

require duckdb
require duckdb/duckdb_stmt public
require duckdb/duckdb_provider public
require strings
require daslib/sql public
require daslib/sql_boost public
require daslib/sql_provider
require daslib/templates
require daslib/ast_boost
require daslib/templates_boost

//! DuckDB runtime surface for the `_sql` machinery (see
//! modules/dasSQLITE/PROVIDER_CONTRACT.md in the daslang repo; `sqlite/sqlite_boost`
//! is the reference implementation). Runner + RAII, exec, the `run_select` family the
//! macros emit against, the `sql_bind_to_stmt` / `sql_read_witness` storage-class
//! bridge, CRUD over `[sql_table]` structs, and transactions.
//!
//! DuckDB divergences from the SQLite reference:
//! - execute-then-read: `duckdb_execute_prepared` materializes a `duckdb_result`
//!   read by (col, row) — `DuckStmt` (duckdb/duckdb_stmt) carries the cursor.
//! - no rowid: `insert` reads the new pk back via `INSERT ... RETURNING` (the
//!   registry entry says `SqlPkReport.ReturningPk`).
//! - no auto-increment: `create_table` pairs an integer primary key with a
//!   `CREATE SEQUENCE` + `DEFAULT nextval(...)`.
//! - no savepoints: nested transactions compose by joining the outer one (the
//!   BEGIN probe below), not via SAVEPOINT/RELEASE.

// This module's helpers are emitted against by registry-consulting macros; register
// the present providers from this module's own [_macro] (linq_fold.das pattern).
[_macro]
def private _boost_register_sql_providers {
    if (!is_compiling_macros_in_module("duckdb_boost")) return
    sql_register_present_providers()
}

// ===== High-level API: runner, RAII, exec =====

struct private TxnState {
    // transaction nesting depth for this connection (DuckDB has no savepoints);
    // heap cell so every by-value copy of the runner shares it
    depth : int
}

struct SqlRunner {
    //! Owns a DuckDB database + connection pair. Closed by `finalize` on
    //! `var inscope` scope exit. `schema_name` reserved for attached catalogs.
    duck_db : duckdb_database
    conn : duckdb_connection
    schema_name : string
    txn : TxnState?
}

def finalize(var db : SqlRunner) {
    //! Closes the underlying DuckDB connection + database. Triggered automatically by `var inscope db`.
    if (db.conn != null) {
        duckdb_disconnect(unsafe(addr(db.conn)))
        db.conn = null
    }
    if (db.duck_db != null) {
        duckdb_close(unsafe(addr(db.duck_db)))
        db.duck_db = null
    }
    if (db.txn != null) {
        unsafe {
            delete db.txn
        }
        db.txn = null
    }
}

def duckdb_version() : string {
    //! Returns the linked DuckDB library version (e.g. "v1.5.4"). No DB connection needed.
    return clone_string(duckdb_library_version())
}

def try_open_duckdb(path : string) : Result<SqlRunner, string> {
    //! Opens a connection to ``path`` (``:memory:`` for an in-memory DB).
    //! Returns ``err(...)`` on failure (handles closed).
    var db = SqlRunner()
    if (duckdb_open(path, unsafe(addr(db.duck_db))) != duckdb_state.DuckDBSuccess) {
        duckdb_close(unsafe(addr(db.duck_db)))
        db.duck_db = null
        return err("duckdb_open(\"{path}\") failed", type<SqlRunner>)
    }
    if (duckdb_connect(db.duck_db, unsafe(addr(db.conn))) != duckdb_state.DuckDBSuccess) {
        db.conn = null
        duckdb_close(unsafe(addr(db.duck_db)))
        db.duck_db = null
        return err("duckdb_connect(\"{path}\") failed", type<SqlRunner>)
    }
    db.txn = new TxnState()
    let install_err = _install_sql_function_registry(db)
    if (install_err |> is_some) {
        let msg = install_err |> unwrap
        db |> finalize()
        return err(msg, type<SqlRunner>)
    }
    return move_ok(db, type<string>)
}

def open_duckdb(path : string) : SqlRunner {
    //! Strict variant of ``try_open_duckdb``. Panics on failure.
    var r = try_open_duckdb(path)
    if (r |> is_err) {
        panic(r |> unwrap_err)
    }
    return <- r._value
}

def with_duckdb(path : string; blk : block<(db : SqlRunner) : void>) : void {
    //! RAII helper. Opens the DB, invokes ``blk``, and finalizes on exit.
    var inscope db = open_duckdb(path)
    invoke(blk, db)
}

def try_exec(db : SqlRunner; sql : string) : SqlError {
    //! Executes ``sql`` (no result rows expected; rows, if any, are discarded).
    //! Returns ``none`` on success, ``some(errmsg)`` on failure.
    var res : duckdb_result
    let st = duckdb_query(db.conn, sql, unsafe(addr(res)))
    if (st != duckdb_state.DuckDBSuccess) {
        let msg = clone_string(duckdb_result_error(unsafe(addr(res))))
        duckdb_destroy_result(unsafe(addr(res)))
        return some(msg)
    }
    duckdb_destroy_result(unsafe(addr(res)))
    return none(type<string>)
}

def exec(db : SqlRunner; sql : string) : void {
    //! Strict variant of ``try_exec``. Panics with the DuckDB errmsg on failure.
    let e = db |> try_exec(sql)
    if (e |> is_some) {
        panic(e |> unwrap)
    }
}

def private try_exec_with_binds(db : SqlRunner; sql : string;
                                bind_blk : block<(var stmt : DuckStmt?) : void>) : SqlError {
    let r = db |> try_step_dml(sql, bind_blk, "exec")
    if (r |> is_err) return some(r |> unwrap_err)
    return none(type<string>)
}

def try_exec(db : SqlRunner; sql : string; arg0 : auto(A0)) : SqlError {
    //! One-positional-bind variant: ``?`` in ``sql`` binds ``arg0`` via the adapter rail.
    return db |> try_exec_with_binds(sql) $(var stmt : DuckStmt?) {
        sql_bind_to_stmt(stmt, 1, arg0)
    }
}

def try_exec(db : SqlRunner; sql : string; arg0 : auto(A0); arg1 : auto(A1)) : SqlError {
    //! Two-positional-binds variant.
    return db |> try_exec_with_binds(sql) $(var stmt : DuckStmt?) {
        sql_bind_to_stmt(stmt, 1, arg0)
        sql_bind_to_stmt(stmt, 2, arg1)
    }
}

def try_exec(db : SqlRunner; sql : string; arg0 : auto(A0); arg1 : auto(A1); arg2 : auto(A2)) : SqlError {
    //! Three-positional-binds variant.
    return db |> try_exec_with_binds(sql) $(var stmt : DuckStmt?) {
        sql_bind_to_stmt(stmt, 1, arg0)
        sql_bind_to_stmt(stmt, 2, arg1)
        sql_bind_to_stmt(stmt, 3, arg2)
    }
}

def exec(db : SqlRunner; sql : string; arg0 : auto(A0)) : void {
    //! Strict one-bind ``exec``. Panics on failure.
    let e = db |> try_exec(sql, arg0)
    if (e |> is_some) {
        panic(e |> unwrap)
    }
}

def exec(db : SqlRunner; sql : string; arg0 : auto(A0); arg1 : auto(A1)) : void {
    //! Strict two-binds ``exec``. Panics on failure.
    let e = db |> try_exec(sql, arg0, arg1)
    if (e |> is_some) {
        panic(e |> unwrap)
    }
}

def exec(db : SqlRunner; sql : string; arg0 : auto(A0); arg1 : auto(A1); arg2 : auto(A2)) : void {
    //! Strict three-binds ``exec``. Panics on failure.
    let e = db |> try_exec(sql, arg0, arg1, arg2)
    if (e |> is_some) {
        panic(e |> unwrap)
    }
}

// ===== Internal bridge: sql_bind/sql_extract ↔ DuckDB C API =====

def private duckdb_column_text_(res : duckdb_result?; col : int; row : uint64) : string {
    // context-heap copy of a (col,row) VARCHAR cell; frees DuckDB's malloc'd copy
    let p = duckdb_value_varchar(res, uint64(col), row)
    if (p == "") {
        return ""
    }
    let s = clone_string(p)
    unsafe {
        duckdb_free(reinterpret<void?>(p))
    }
    return s
}

def private duckdb_column_blob_(res : duckdb_result?; col : int; row : uint64) : array<uint8> {
    //! Reads a BLOB cell as a fresh ``array<uint8>`` — DuckDB hands out a malloc'd
    //! copy that must be duckdb_free'd.
    var b = duckdb_value_blob(res, uint64(col), row)
    let n = int(b.size)
    var r : array<uint8>
    r |> resize(n)
    if (n > 0) {
        unsafe {
            memcpy(addr(r[0]), b.data, n)
        }
    }
    duckdb_free(b.data)
    return <- r
}

// --- bind direction ---

def sql_bind_to_stmt(var stmt : DuckStmt?; idx : int; v : int64) : void {
    duckdb_bind_int64(stmt.stmt, uint64(idx), v)
}

def sql_bind_to_stmt(var stmt : DuckStmt?; idx : int; v : double) : void {
    duckdb_bind_double(stmt.stmt, uint64(idx), v)
}

def sql_bind_to_stmt(var stmt : DuckStmt?; idx : int; v : string) : void {
    duckdb_bind_varchar(stmt.stmt, uint64(idx), v)
}

def sql_bind_to_stmt(var stmt : DuckStmt?; idx : int; v : array<uint8>) : void {
    if (empty(v)) {
        duckdb_bind_blob(stmt.stmt, uint64(idx), null, 0ul)
    } else {
        unsafe {
            duckdb_bind_blob(stmt.stmt, uint64(idx), reinterpret<void?>(addr(v[0])), uint64(length(v)))
        }
    }
}

def sql_bind_to_stmt(var stmt : DuckStmt?; idx : int; v : $Option < auto(TT) >) : void {
    //! ``some(x)`` recurses on ``x`` (which routes through the user's
    //! ``_::sql_bind`` adapter for non-primitive ``T``); ``none`` binds NULL.
    if (v._has_value) {
        sql_bind_to_stmt(stmt, idx, v._value)
    } else {
        duckdb_bind_null(stmt.stmt, uint64(idx))
    }
}

def sql_bind_to_stmt(var stmt : DuckStmt?; idx : int; v : auto(TT)) : void {
    //! Catch-all: route through the user's ``_::sql_bind`` adapter, then
    //! recurse on the primitive return value.
    sql_bind_to_stmt(stmt, idx, _::sql_bind(v))
}

// --- read direction ---

[unused_argument(witness)]
def sql_read_witness(stmt : DuckStmt?; col : int; witness : int64) : int64 {
    return duckdb_value_int64(stmt.res, uint64(col), stmt.row)
}

[unused_argument(witness)]
def sql_read_witness(stmt : DuckStmt?; col : int; witness : double) : double {
    return duckdb_value_double(stmt.res, uint64(col), stmt.row)
}

[unused_argument(witness)]
def sql_read_witness(stmt : DuckStmt?; col : int; witness : string) : string {
    return duckdb_column_text_(stmt.res, col, stmt.row)
}

[unused_argument(witness)]
def sql_read_witness(stmt : DuckStmt?; col : int; witness : array<uint8>) : array<uint8> {
    return <- duckdb_column_blob_(stmt.res, col, stmt.row)
}

[unused_argument(stmt, col, witness)]
def sql_read_witness(stmt : DuckStmt?; col : int; witness : auto(SS)) : SS {
    concept_assert(false, "sql_bind must return one of int64 / double / string / array<uint8>")
    return default<SS>
}

[unused_argument(t)]
def read_via_adapter(stmt : DuckStmt?; col : int; t : type<$Option<auto(TT)>>) : Option<TT -const -#> {
    //! ``Option<T>`` overload: NULL cell → ``none``, otherwise read the inner ``T``
    //! via the generic ``read_via_adapter`` and wrap in ``some``.
    if (duckdb_value_is_null(stmt.res, uint64(col), stmt.row)) return none(type<TT -const -#>)
    return some(read_via_adapter(stmt, col, type<TT -const -#>))
}

[unused_argument(t)]
def read_via_adapter(stmt : DuckStmt?; col : int; t : type<auto(TT)>) : TT {
    //! Reads column as ``_::sql_bind(default<TT>)``'s storage primitive, then materializes ``TT``
    //! via ``_::sql_extract``. Primitive type is resolved at compile time — no runtime adapter call.
    return _::sql_extract(
        sql_read_witness(stmt, col, default<typedecl(_::sql_bind(default<TT>))>),
        type<TT>
    )
}

// ===== Statement plumbing (prepare → bind → execute → read) =====

def private try_with_stmt(db : SqlRunner; sql : string; err_prefix : string;
                          bind_blk : block<(var stmt : DuckStmt?) : void>;
                          body_blk : block<(var stmt : DuckStmt?) : $Result<auto(R); string> >) : Result<R, string> {
    var ds = DuckStmt()
    if (duckdb_prepare(db.conn, sql, unsafe(addr(ds.stmt))) != duckdb_state.DuckDBSuccess) {
        let msg = clone_string(duckdb_prepare_error(ds.stmt))
        duckdb_destroy_prepare(unsafe(addr(ds.stmt)))
        return err("{err_prefix}: prepare failed: {msg}", type<R>)
    }
    invoke(bind_blk, unsafe(addr(ds)))
    var res : duckdb_result
    if (duckdb_execute_prepared(ds.stmt, unsafe(addr(res))) != duckdb_state.DuckDBSuccess) {
        let msg = clone_string(duckdb_result_error(unsafe(addr(res))))
        duckdb_destroy_result(unsafe(addr(res)))
        duckdb_destroy_prepare(unsafe(addr(ds.stmt)))
        return err("{err_prefix}: {msg}", type<R>)
    }
    ds.res = unsafe(addr(res))
    var r <- invoke(body_blk, unsafe(addr(ds)))
    duckdb_destroy_result(unsafe(addr(res)))
    duckdb_destroy_prepare(unsafe(addr(ds.stmt)))
    return <- r
}

def private try_one_row(db : SqlRunner; sql : string;
                        bind_blk : block<(var stmt : DuckStmt?) : void>;
                        row_blk : block<(var stmt : DuckStmt?) : auto(TT)>;
                        err_prefix : string) : Result<TT -const -#, string> {
    return <- try_with_stmt(db, sql, err_prefix, bind_blk,
        $(var ds : DuckStmt?) : Result<TT -const -#, string> {
            if (duckdb_row_count(ds.res) == 0ul) return err("{err_prefix}: expected one row, got 0 rows", type<TT -const -#>)
            ds.row = 0ul
            static_if (typeinfo can_copy(default<TT -const -#>)) {
                var row : TT -const -# = invoke(row_blk, ds) // nolint:LINT003
                return move_ok(row, type<string>)
            } else {
                var row : TT -const -# <- clone_to_move(invoke(row_blk, ds))
                return move_ok(row, type<string>)
            }
        })
}

def private try_one_row_opt(db : SqlRunner; sql : string;
                            bind_blk : block<(var stmt : DuckStmt?) : void>;
                            row_blk : block<(var stmt : DuckStmt?) : auto(TT)>;
                            err_prefix : string) : Result<Option<TT -const -#>, string> {
    return <- try_with_stmt(db, sql, err_prefix, bind_blk,
        $(var ds : DuckStmt?) : Result<Option<TT -const -#>, string> {
            if (duckdb_row_count(ds.res) == 0ul) return ok(none(type<TT -const -#>), type<string>)
            ds.row = 0ul
            static_if (typeinfo can_copy(default<TT -const -#>)) {
                var row : TT -const -# = invoke(row_blk, ds) // nolint:LINT003
                return move_ok(move_some(row), type<string>)
            } else {
                var row : TT -const -# <- clone_to_move(invoke(row_blk, ds))
                return move_ok(move_some(row), type<string>)
            }
        })
}

def private try_step_dml(db : SqlRunner; sql : string;
                         bind_blk : block<(var stmt : DuckStmt?) : void>;
                         err_prefix : string) : Result<int, string> {
    return <- try_with_stmt(db, sql, err_prefix, bind_blk,
        $(var ds : DuckStmt?) : Result<int, string> {
            return ok(int(duckdb_rows_changed(ds.res)), type<string>)
        })
}

def private try_collect_rows(db : SqlRunner; sql : string;
                             bind_blk : block<(var stmt : DuckStmt?) : void>;
                             row_blk : block<(var stmt : DuckStmt?) : auto(TT)>;
                             err_prefix : string) : Result<array<TT -const -#>, string> {
    return <- try_with_stmt(db, sql, err_prefix, bind_blk,
        $(var ds : DuckStmt?) : Result<array<TT -const -#>, string> {
            var inscope result : array<TT -const -#>
            let n = duckdb_row_count(ds.res)
            result |> reserve(int(n))
            var i = 0ul
            while (i < n) {
                ds.row = i
                static_if (typeinfo can_copy(default<TT -const -#>)) {
                    result |> push(invoke(row_blk, ds))
                } else {
                    result |> emplace(invoke(row_blk, ds))
                }
                i++
            }
            return move_ok(result, type<string>)
        })
}

// ===== Runner helpers the `_sql` macros emit against =====

def try_run_select(db : SqlRunner; sql : string; bind_blk : block<(var stmt : DuckStmt?) : void>; row_blk : block<(var stmt : DuckStmt?) : auto(TT)>) : Result<array<TT -const -#>, string> {
    //! `_sql` macro runtime. Prepares + binds + executes, then materializes each row via ``row_blk``.
    return <- db |> try_collect_rows(sql, bind_blk, row_blk, "_sql")
}

def run_select(db : SqlRunner; sql : string; bind_blk : block<(var stmt : DuckStmt?) : void>; row_blk : block<(var stmt : DuckStmt?) : auto(TT)>) : array<TT -const -#> {
    //! Strict variant of ``try_run_select``. Panics on failure.
    var r <- try_run_select(db, sql, bind_blk, row_blk)
    if (r |> is_err) {
        panic(r |> unwrap_err)
    }
    return <- r._value
}

def try_run_select_one(db : SqlRunner; sql : string; bind_blk : block<(var stmt : DuckStmt?) : void>; row_blk : block<(var stmt : DuckStmt?) : auto(TT)>) : Result<TT -const -#, string> {
    //! `_sql` runtime: single-row materializer (``_first()`` / ``count()`` / aggregate chains).
    return <- try_one_row(db, sql, bind_blk, row_blk, "_sql")
}

def run_select_one(db : SqlRunner; sql : string; bind_blk : block<(var stmt : DuckStmt?) : void>; row_blk : block<(var stmt : DuckStmt?) : auto(TT)>) : TT -const -# {
    //! Strict variant of ``try_run_select_one``. Panics on failure or zero rows.
    var r <- try_run_select_one(db, sql, bind_blk, row_blk)
    if (r |> is_err) {
        panic(r |> unwrap_err)
    }
    return <- r._value
}

def try_run_select_one_opt(db : SqlRunner; sql : string; bind_blk : block<(var stmt : DuckStmt?) : void>; row_blk : block<(var stmt : DuckStmt?) : auto(TT)>) : Result<Option<TT -const -#>, string> {
    //! ``Ok(some(row))`` if a row is found, ``Ok(none)`` on zero rows, ``Err`` on failure.
    return <- try_one_row_opt(db, sql, bind_blk, row_blk, "_sql")
}

def run_select_one_opt(db : SqlRunner; sql : string; bind_blk : block<(var stmt : DuckStmt?) : void>; row_blk : block<(var stmt : DuckStmt?) : auto(TT)>) : Option<TT -const -#> {
    //! Strict variant of ``try_run_select_one_opt``. Panics on failure; ``none`` on zero rows.
    var r <- try_run_select_one_opt(db, sql, bind_blk, row_blk)
    if (r |> is_err) {
        panic(r |> unwrap_err)
    }
    return <- r._value
}

def run_each_select(db : SqlRunner; sql : string;
                    bind_blk : block<(var stmt : DuckStmt?) : void>;
                    var row_lam : lambda<(var stmt : DuckStmt?) : auto(TT)>) {
    //! `_each_sql` macro runtime — lazy ``generator<TT>`` sibling of ``run_select``.
    //! DuckDB materializes results anyway, so rows are collected eagerly and the
    //! generator yields from the array; the result/statement are destroyed before
    //! iteration starts (early ``break`` can never leak a cursor).
    var rows <- db |> try_with_stmt(sql, "_each_sql", bind_blk,
        $(var ds : DuckStmt?) : Result<array<TT -const -#>, string> {
            var inscope result : array<TT -const -#>
            let n = duckdb_row_count(ds.res)
            result |> reserve(int(n))
            var i = 0ul
            while (i < n) {
                ds.row = i
                static_if (typeinfo can_copy(default<TT -const -#>)) {
                    result |> push(invoke(row_lam, ds))
                } else {
                    result |> emplace(invoke(row_lam, ds))
                }
                i++
            }
            return move_ok(result, type<string>)
        })
    if (rows |> is_err) {
        panic(rows |> unwrap_err)
    }
    var data <- rows._value
    return <- generator<TT -const -#> capture(<- data) {
        for (i in range(length(data))) {
            static_if (typeinfo can_copy(default<TT -const -#>)) {
                yield data[i]
            } else {
                yield <- data[i]
            }
        }
        return false
    } finally {
        delete data
    }
}

// ===== Generic DML runners (used by `_sql_update` / `_sql_delete` / `_sql_upsert` macros) =====

def try_run_dml(db : SqlRunner; sql : string;
                bind_blk : block<(var stmt : DuckStmt?) : void>) : Result<int, string> {
    //! ``Ok(rows_affected)`` for a bound DML statement; ``Err(errmsg)`` on failure.
    return <- db |> try_step_dml(sql, bind_blk, "_sql_dml")
}

def run_dml(db : SqlRunner; sql : string;
            bind_blk : block<(var stmt : DuckStmt?) : void>) : int {
    //! Strict variant of ``try_run_dml``. Panics on failure.
    let r = db |> try_run_dml(sql, bind_blk)
    if (r |> is_err) {
        panic(r |> unwrap_err)
    }
    return r |> unwrap
}

def try_run_dml_returning(db : SqlRunner; sql : string;
                          bind_blk : block<(var stmt : DuckStmt?) : void>;
                          row_blk : block<(var stmt : DuckStmt?) : auto(TT)>) : Result<array<TT -const -#>, string> {
    //! RETURNING flavor — materializes the returned rows.
    return <- db |> try_collect_rows(sql, bind_blk, row_blk, "_sql_dml_returning")
}

def run_dml_returning(db : SqlRunner; sql : string;
                      bind_blk : block<(var stmt : DuckStmt?) : void>;
                      row_blk : block<(var stmt : DuckStmt?) : auto(TT)>) : array<TT -const -#> {
    //! Strict variant of ``try_run_dml_returning``. Panics on failure.
    var r <- try_run_dml_returning(db, sql, bind_blk, row_blk)
    if (r |> is_err) {
        panic(r |> unwrap_err)
    }
    return <- r._value
}

// ===== select_from as a plain function (whole-table read outside `_sql` chains) =====

[unused_argument(t)]
def try_select_from(db : SqlRunner; t : type<auto(TT)>) : Result<array<TT -const -#>, string> {
    //! Materializes the whole table for ``T``. Inside `_sql(...)` chains,
    //! ``select_from`` is consumed by the macro instead.
    return <- db |> try_collect_rows(_::_sql_select_all_sql(default<TT>),
        $(var stmt : DuckStmt?) {},
        $(var stmt : DuckStmt?) : TT -const -# {
            static_if (typeinfo can_copy(default<TT -const -#>)) {
                return _::_sql_read_row(stmt, type<TT -const -#>)
            } else {
                return <- _::_sql_read_row(stmt, type<TT -const -#>)
            }
        }, "select_from")
}

[unused_argument(t)]
def select_from(db : SqlRunner; t : type<auto(TT)>) : array<TT -const -#> {
    //! Strict variant of ``try_select_from``. Panics on failure.
    var r <- try_select_from(db, type<TT>)
    if (r |> is_err) {
        panic(r |> unwrap_err)
    }
    return <- r._value
}

// ===== User-facing CRUD over [sql_table] structs =====

def private duckdb_pk_seq_name(table_name : string) : string => "{table_name}_pk_seq"

def private build_duckdb_create_table_sql(table_name : string; cols : array<ColumnInfo>) : tuple<seq_sql : string; table_sql : string> {
    // single integer pk → sequence-backed auto-assign (DuckDB has no rowid/autoincrement)
    var pk_count = 0
    var auto_pk = -1
    for (i in range(length(cols))) {
        if (cols[i].is_pk) {
            pk_count++
            auto_pk = i
        }
    }
    let has_auto_pk = pk_count == 1 && cols[auto_pk].data_type == SqlType.Integer
    let seq = sql_quote_lit(duckdb_pk_seq_name(table_name))
    var seq_ddl = ""
    if (has_auto_pk) {
        seq_ddl = "CREATE SEQUENCE IF NOT EXISTS {sql_quote_id(duckdb_pk_seq_name(table_name))}"
    }
    let table_ddl = build_string() $(var w) {
        w |> write("CREATE TABLE IF NOT EXISTS {sql_quote_id(table_name)} (")
        for (i in range(length(cols))) {
            if (i > 0) {
                w |> write(", ")
            }
            let c & = unsafe(cols[i])
            w |> write("{sql_quote_id(c.name)} {duckdb_sql_type(c.data_type)}")
            if (c.is_pk && has_auto_pk) {
                w |> write(" PRIMARY KEY DEFAULT nextval({seq})")
            } elif (c.is_pk && pk_count == 1) {
                w |> write(" PRIMARY KEY")
            } elif (!c.is_nullable && !c.is_pk) {
                w |> write(" NOT NULL")
            }
            if (!empty(c.default_expr)) {
                w |> write(" DEFAULT ({c.default_expr})")
            }
        }
        if (pk_count > 1) {
            w |> write(", PRIMARY KEY (")
            var first = true
            for (c in cols) {
                if (c.is_pk) {
                    if (!first) {
                        w |> write(", ")
                    }
                    w |> write(sql_quote_id(c.name))
                    first = false
                }
            }
            w |> write(")")
        }
        w |> write(")")
    }
    return (seq_sql = seq_ddl, table_sql = table_ddl)
}

[unused_argument(t), template(t)]
def try_create_table(db : SqlRunner; t : type<auto(TT)>; name : string) : SqlError {
    //! Emits CREATE TABLE for ``T`` with table identifier ``name``, building
    //! DuckDB-dialect DDL from the generated column info (BIGINT columns,
    //! sequence-backed integer pk). Runs `[sql_index(...)]` statements after.
    let cols = _::_sql_column_info(default<TT>)
    let ddl = build_duckdb_create_table_sql(name, cols)
    if (!empty(ddl.seq_sql)) {
        let se = db |> try_exec(ddl.seq_sql)
        if (se |> is_some) return se
    }
    let err = db |> try_exec(ddl.table_sql)
    if (err |> is_some) return err
    let idx = _::_sql_create_indexes_sql(default<TT>, name)
    if (empty(idx)) return none(type<string>)
    return db |> try_exec(idx)
}

[unused_argument(t), template(t)]
def create_table(db : SqlRunner; t : type<auto(TT)>; name : string) : void {
    //! Strict variant of ``try_create_table(type<T>, name)``. Panics on failure.
    let err = db |> try_create_table(type<TT>, name)
    if (err |> is_some) {
        panic(err |> unwrap)
    }
}

[template(t)]
def try_create_table(db : SqlRunner; t : auto(TT)) : SqlError {
    //! Emits CREATE TABLE (and any ``[sql_index(...)]`` statements) for ``T``
    //! under its own ``[sql_table(name=...)]`` identifier.
    return db |> try_create_table(type<TT>, _::_sql_table_name(default<TT>))
}

[template(t)]
def create_table(db : SqlRunner; t : auto(TT)) : void {
    //! Strict variant of ``try_create_table``. Panics on failure.
    let err = db |> try_create_table(type<TT>)
    if (err |> is_some) {
        panic(err |> unwrap)
    }
}

[template(t)]
def try_drop_table_if_exists(db : SqlRunner; t : auto(TT)) : SqlError {
    //! Emits DROP TABLE IF EXISTS for the type ``T``.
    return db |> try_exec(_::_sql_drop_table_if_exists_sql(type<TT>))
}

[template(t)]
def drop_table_if_exists(db : SqlRunner; t : auto(TT)) : void {
    //! Strict variant of ``try_drop_table_if_exists``. Panics on failure.
    let err = db |> try_drop_table_if_exists(type<TT>)
    if (err |> is_some) {
        panic(err |> unwrap)
    }
}

[template(t)]
def try_drop_view_if_exists(db : SqlRunner; t : auto(TT)) : SqlError {
    //! Emits DROP VIEW IF EXISTS for a `[sql_view]`-tagged type ``T``.
    return db |> try_exec(_::_sql_drop_view_if_exists_sql(type<TT>))
}

[template(t)]
def drop_view_if_exists(db : SqlRunner; t : auto(TT)) : void {
    //! Strict variant of ``try_drop_view_if_exists``. Panics on failure.
    let err = db |> try_drop_view_if_exists(type<TT>)
    if (err |> is_some) {
        panic(err |> unwrap)
    }
}

[unused_argument(t), template(t)]
def try_check_schema(db : SqlRunner; t : type<auto(TT)>) : SqlError {
    //! Verifies the open ``db`` matches struct ``T`` on (name, SqlType, NOT NULL, PRIMARY KEY).
    //! Returns ``some(errmsg)`` on first mismatch.
    let want = _::_sql_column_info(default<TT>)
    let table_name = _::_sql_table_name(default<TT>)
    var got_result <- duckdb_read_table_info(db.conn, db.schema_name, table_name)
    if (got_result |> is_err) return some(got_result |> unwrap_err)
    let got <- got_result._value
    if (empty(got)) return some("check_schema: table \"{table_name}\" not found in DB.")
    if (length(want) != length(got)) return some("check_schema: \"{table_name}\" column count mismatch — struct has {length(want)} field(s), DB has {length(got)} column(s).")
    var by_name : table<string; int>
    for (j in range(length(got))) {
        by_name |> insert(got[j].name, j)
    }
    for (w in want) {
        let g_idx = by_name?[w.name] ?? -1
        if (g_idx < 0) return some("check_schema: \"{table_name}\" struct field \"{w.name}\" not found in DB columns.")
        let g = got[g_idx]
        if (w.data_type != g.data_type) return some("check_schema: \"{table_name}\".\"{w.name}\" SqlType mismatch — struct expects {duckdb_sql_type(w.data_type)}, DB has {duckdb_sql_type(g.data_type)} (declared \"{g.decl_type}\").")
        let g_nullable = !g.not_null && !g.pk
        if (w.is_nullable != g_nullable) {
            if (w.is_nullable) {
                return some("check_schema: \"{table_name}\".\"{w.name}\" nullability mismatch — struct allows NULL (Option<T>), DB column is NOT NULL.")
            } else {
                return some("check_schema: \"{table_name}\".\"{w.name}\" nullability mismatch — struct is non-optional, DB column allows NULL.")
            }
        }
        if (w.is_pk != g.pk) {
            if (w.is_pk) {
                return some("check_schema: \"{table_name}\".\"{w.name}\" PK mismatch — struct has @sql_primary_key, DB column is not PRIMARY KEY.")
            } else {
                return some("check_schema: \"{table_name}\".\"{w.name}\" PK mismatch — DB column is PRIMARY KEY but struct field is missing @sql_primary_key.")
            }
        }
    }
    return none(type<string>)
}

[unused_argument(t), template(t)]
def check_schema(db : SqlRunner; t : type<auto(TT)>) {
    //! Strict variant of ``try_check_schema``. Panics with the diagnostic on mismatch.
    let r = db |> try_check_schema(type<TT>)
    if (r |> is_some) {
        panic(r |> unwrap)
    }
}

// ===== INSERT (single, bulk) — pk reported via RETURNING (no rowid in DuckDB) =====

def private _single_int_pk_name(cols : array<ColumnInfo>) : string {
    var pk_count = 0
    var name = ""
    for (c in cols) {
        if (c.is_pk) {
            pk_count++
            name = c.name
        }
    }
    if (pk_count == 1) return name
    return ""
}

def try_insert(db : SqlRunner; row : auto(TT)) : Result<int64, string> {
    //! Inserts a single row. Returns ``Ok(pk)`` on success — the primary key is read
    //! back via ``INSERT ... RETURNING`` (auto-assigned from the table's sequence
    //! when the row's integer pk is zero). Tables without a single pk return ``Ok(0)``.
    let pk_unset = _::_sql_pk_is_unset(row)
    let base_sql = pk_unset ? _::_sql_insert_no_pk_sql(row) : _::_sql_insert_with_pk_sql(row)
    let pk_name = _single_int_pk_name(_::_sql_column_info(default<TT>))
    if (empty(pk_name)) {
        let r = db |> try_step_dml(base_sql, $(var stmt : DuckStmt?) {
            _::_sql_bind_row(stmt, row, !pk_unset)
        }, "insert")
        if (r |> is_err) return err(r |> unwrap_err, type<int64>)
        return ok(int64(0), type<string>)
    }
    let sql = "{base_sql} RETURNING {sql_quote_id(pk_name)}"
    return <- db |> try_one_row(sql, $(var stmt : DuckStmt?) {
        _::_sql_bind_row(stmt, row, !pk_unset)
    }, $(var ds : DuckStmt?) : int64 {
        return duckdb_value_int64(ds.res, 0ul, ds.row)
    }, "insert")
}

def insert(db : SqlRunner; row : auto(TT)) : int64 {
    //! Strict variant of ``try_insert(row)``. Panics with the DuckDB errmsg on failure.
    let r = db |> try_insert(row)
    if (r |> is_err) {
        panic(r |> unwrap_err)
    }
    return r |> unwrap
}

def try_insert(db : SqlRunner; row : auto(TT); name : string) : Result<int64, string> {
    //! Inserts a single row into table identifier ``name`` instead of T's own ``[sql_table(name=...)]``.
    //! Used during a struct_convert rebuild to write into the staging table before the rename swap.
    //! Same PK semantics as ``try_insert(row)`` — but note a staging table made from the generated
    //! DDL has no backing sequence, so pk-unset rows only work against T's own table.
    let pk_unset = _::_sql_pk_is_unset(row)
    let base_sql = (pk_unset
        ? _::_sql_insert_no_pk_sql(default<TT>, name)
        : _::_sql_insert_with_pk_sql(default<TT>, name))
    let pk_name = _single_int_pk_name(_::_sql_column_info(default<TT>))
    if (empty(pk_name)) {
        let r = db |> try_step_dml(base_sql, $(var stmt : DuckStmt?) {
            _::_sql_bind_row(stmt, row, !pk_unset)
        }, "insert")
        if (r |> is_err) return err(r |> unwrap_err, type<int64>)
        return ok(int64(0), type<string>)
    }
    let sql = "{base_sql} RETURNING {sql_quote_id(pk_name)}"
    return <- db |> try_one_row(sql, $(var stmt : DuckStmt?) {
        _::_sql_bind_row(stmt, row, !pk_unset)
    }, $(var ds : DuckStmt?) : int64 {
        return duckdb_value_int64(ds.res, 0ul, ds.row)
    }, "insert")
}

def insert(db : SqlRunner; row : auto(TT); name : string) : int64 {
    //! Strict variant of ``try_insert(row, name)``. Panics with the DuckDB errmsg on failure.
    let r = db |> try_insert(row, name)
    if (r |> is_err) {
        panic(r |> unwrap_err)
    }
    return r |> unwrap
}

def try_insert(db : SqlRunner; rows : array<auto(TT)>) : Result<int64, string> {
    //! Batched INSERT inside a single transaction (joins an ambient one — DuckDB has
    //! no savepoints). All rows must agree on PK presence. ``Ok(last pk)`` on success.
    if (empty(rows)) return ok(int64(0), type<string>)
    let pk_unset = _::_sql_pk_is_unset(rows[0])
    for (i in 1..length(rows)) {
        if (_::_sql_pk_is_unset(rows[i]) != pk_unset) return err("insert: rows mix PK-set and PK-unset (row 0 vs row {i}); partition the array before calling insert", type<int64>)
    }
    let began = !(db |> in_transaction())
    if (began) {
        let be = db |> try_exec("BEGIN TRANSACTION")
        if (be |> is_some) return err(be |> unwrap, type<int64>)
    }
    var last_id = int64(0)
    for (row in rows) {
        let r = db |> try_insert(row)
        if (r |> is_err) {
            if (began) {
                db |> try_exec("ROLLBACK") |> ignore_sql_error_
            }
            return err(r |> unwrap_err, type<int64>)
        }
        last_id = r |> unwrap
    }
    if (began) {
        let commit_err = db |> try_exec("COMMIT")
        if (commit_err |> is_some) {
            db |> try_exec("ROLLBACK") |> ignore_sql_error_
            return err(commit_err |> unwrap, type<int64>)
        }
    }
    return ok(last_id, type<string>)
}

def insert(db : SqlRunner; rows : array<auto(TT)>) : int64 {
    //! Strict variant of ``try_insert(array<T>)``. Panics on failure (after ROLLBACK).
    let r = db |> try_insert(rows)
    if (r |> is_err) {
        panic(r |> unwrap_err)
    }
    return r |> unwrap
}

[unused_argument(e)]
def private ignore_sql_error_(e : SqlError) : void {
}

// ===== by-PK UPDATE / DELETE =====

def try_update(db : SqlRunner; row : auto(TT)) : Result<int, string> {
    //! Updates a single row identified by its @sql_primary_key field.
    //! ``Ok(rows_affected)``, ``Err(errmsg)`` on SQL failure.
    return <- db |> try_step_dml(_::_sql_update_by_pk_sql(row), $(var stmt : DuckStmt?) {
        _::_sql_bind_row_for_update(stmt, row)
    }, "update")
}

def update(db : SqlRunner; row : auto(TT)) : int {
    //! Strict variant of ``try_update(row)``. Panics on failure.
    let r = db |> try_update(row)
    if (r |> is_err) {
        panic(r |> unwrap_err)
    }
    return r |> unwrap
}

def try_delete_(db : SqlRunner; row : auto(TT)) : Result<int, string> {
    //! Deletes the row identified by ``row``'s @sql_primary_key field.
    //! Trailing underscore: ``delete`` is a daslang keyword.
    return <- db |> try_step_dml(_::_sql_delete_by_pk_sql(row), $(var stmt : DuckStmt?) {
        _::_sql_bind_row_pk_only(stmt, row)
    }, "delete")
}

def delete_(db : SqlRunner; row : auto(TT)) : int {
    //! Strict variant of ``try_delete_(row)``. Panics on failure.
    let r = db |> try_delete_(row)
    if (r |> is_err) {
        panic(r |> unwrap_err)
    }
    return r |> unwrap
}

[unused_argument(t)]
def try_delete_by_id(db : SqlRunner; t : type<auto(TT)>; id : auto(K)) : Result<int, string> {
    //! Deletes the row of type ``T`` whose primary key equals ``id``.
    return <- db |> try_step_dml(_::_sql_delete_by_pk_sql(default<TT>), $(var stmt : DuckStmt?) {
        sql_bind_to_stmt(stmt, 1, id)
    }, "delete_by_id")
}

[unused_argument(t)]
def delete_by_id(db : SqlRunner; t : type<auto(TT)>; id : auto(K)) : int {
    //! Strict variant of ``try_delete_by_id``. Panics on failure.
    let r = db |> try_delete_by_id(type<TT>, id)
    if (r |> is_err) {
        panic(r |> unwrap_err)
    }
    return r |> unwrap
}

// ===== Transactions =====
// DuckDB has no savepoints, and a failed nested BEGIN ABORTS the ambient transaction —
// so nesting is tracked on the runner (TxnState heap cell shared by runner copies):
// only depth 0 emits BEGIN/COMMIT/ROLLBACK, inner scopes join the outer one.

def in_transaction(db : SqlRunner) : bool {
    //! True inside a `with_transaction` / `try_transaction` scope on this connection.
    //! (Raw ``exec("BEGIN ...")`` bypasses the tracker — don't mix the two styles.)
    return db.txn != null && db.txn.depth > 0
}

def private txn_state(db : SqlRunner) : TxnState? {
    // interior mutability: the field's declared type is mutable; only the runner
    // handle's const flows onto it, so the strip is not an optimizer lie
    return unsafe(reinterpret<TxnState? -const>(db.txn))
}

def private txn_best_effort_rollback(db : SqlRunner) : void {
    // Swallow rollback errors so the original failure reaches the caller intact.
    db |> try_exec("ROLLBACK") |> ignore_sql_error_
}

def with_transaction(db : SqlRunner; blk : block<() : void>) : void {
    //! Wraps ``blk`` in a transaction; nested calls join the outer one (DuckDB has no
    //! savepoints). ROLLBACK fires on early return (block ``return`` unwinds through
    //! ``finally``); a panic skips ``finally`` by design — the open txn discards when
    //! the connection closes.
    var ts = txn_state(db)
    let depth = ts.depth
    if (depth == 0) {
        db |> exec("BEGIN TRANSACTION")
    }
    ts.depth = depth + 1
    var success : bool
    {
        invoke(blk)
        success = true
    } finally {
        ts.depth = depth
        if (depth == 0) {
            if (success) {
                let commit_err = db |> try_exec("COMMIT")
                if (commit_err |> is_some) {
                    txn_best_effort_rollback(db)
                    panic(commit_err |> unwrap)
                }
            } else {
                txn_best_effort_rollback(db)
            }
        }
    }
}

def try_transaction(db : SqlRunner; blk : block<() : void>) : SqlError {
    //! Non-panic variant. ``none`` on commit success, ``some(errmsg)`` on BEGIN/COMMIT
    //! failure. Block panics still skip ``finally`` (panic is fatal by design).
    var ts = txn_state(db)
    let depth = ts.depth
    if (depth == 0) {
        let begin_err = db |> try_exec("BEGIN TRANSACTION")
        if (begin_err |> is_some) return begin_err
    }
    ts.depth = depth + 1
    var success : bool
    {
        invoke(blk)
        success = true
    } finally {
        ts.depth = depth
        if (depth == 0 && !success) {
            txn_best_effort_rollback(db)
        }
    }
    if (depth != 0) return none(type<string>)
    let commit_err = db |> try_exec("COMMIT")
    if (commit_err |> is_some) {
        txn_best_effort_rollback(db)
    }
    return commit_err
}

// ===== [sql_function] install loop — replay the neutral daslib/sql_boost queue =====
// The annotation lives in daslib/sql_boost (provider-neutral, type-erased queue); the
// SqlFnTag marshaling contract is shared with src/dasDUCKDB.userfn.cpp. `directonly`
// has no DuckDB equivalent — ignored at install.

def private _install_sql_function_registry(db : SqlRunner) : SqlError {
    let dup = sql_function_duplicate_error()
    if (dup |> is_some) {
        return dup
    }
    var install_err : SqlError = none(type<string>)
    for_each_sql_function() $(e) {
        if (install_err |> is_some) {
            return
        }
        let rc = duckdb_register_das_function(db.conn, e.name, e.fn, e.nArgs,
            e.tag0, e.tag1, e.tag2, e.tag3,
            e.retTag, e.deterministic)
        if (rc != 0) {
            install_err = some("[sql_function]('{e.name}') registration failed")
        }
    }
    return install_err
}

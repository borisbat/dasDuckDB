options gen2
options indenting = 4
options no_unused_function_arguments = false
options strict_smart_pointers

module duckdb_stmt shared public

require duckdb

//! The provider statement handle spliced into `_sql`-emitted bind/reader blocks —
//! a cursor over a prepared statement and its materialized result. Lives in its own
//! leaf module (below both `duckdb/duckdb_boost` and `duckdb/duckdb_provider`) because
//! the registration shim needs `type<DuckStmt?>` but must not require the boost
//! (that cycles through `daslib/sql_boost`).
//!
//! Unlike SQLite's step-cursor `sqlite3_stmt?`, DuckDB's C API executes to a
//! materialized `duckdb_result` read by (col, row) — so the handle carries the
//! result pointer and the current row. Both bind and reader blocks take a mutable
//! `DuckStmt?` (a single spliced flavor): das const-ness flows through field access,
//! and readers must reach `res` through the handle.

struct public DuckStmt {
    stmt : duckdb_prepared_statement    //!< prepared statement (bind target)
    res : duckdb_result?                //!< points at the runner helper's result while rows are read
    row : uint64                        //!< current row for the (col, row) value readers
}

options gen2
options indenting = 4
options no_unused_block_arguments = false
options no_unused_function_arguments = false
options strict_smart_pointers

module duckdb_migrate shared public

// Intentionally opt in for user-facing docs: keep comments concise and actionable.
options _comment_hygiene = true

require duckdb_boost public
require daslib/sql_migrate public

require strings public
require daslib/option public

//! DuckDB glue for the provider-neutral migrations engine (``daslib/sql_migrate``,
//! re-exported here — ``[sql_migration]``, ``migrate_to_latest``, ``baseline``,
//! ``[struct_convert]``, ``convert`` / ``convert_and_rename`` all work via this module).
//! DuckDB's single-writer engine locks concurrent migrators for us, so the begin hook is
//! a plain ``BEGIN`` — guarded against ambient transactions, which a nested BEGIN would
//! abort. Contract: PROVIDER_CONTRACT.md §Migrations (daslang repo, modules/dasSQLITE).

// ===== Migration glue hooks (see PROVIDER_CONTRACT.md §Migrations) =====

[unused_argument(db)]
def _migration_stream_key(db : SqlRunner) : string {
    //! Stream identity for DuckDB migrations — must spell ``<runnerModule>::<RunnerStruct>``
    //! exactly as the provider registry keys the runner.
    return "duckdb_boost::SqlRunner"
}

[unused_argument(blocking)]
def _migration_begin(db : SqlRunner; blocking : bool) : SqlError {
    //! Plain ``BEGIN`` — DuckDB is single-writer, so the engine's own lock covers
    //! concurrent migrators (``blocking`` has no separate meaning). Refuses inside an
    //! ambient ``with_transaction`` scope: a nested BEGIN would ABORT the outer txn.
    if (db |> in_transaction) {
        return some("migrate_to_latest/baseline cannot run inside an open transaction — DuckDB has no savepoints and a nested BEGIN aborts the ambient transaction")
    }
    return db |> try_exec("BEGIN TRANSACTION")
}

[unused_argument(db)]
def _migration_end(db : SqlRunner) : void {
    //! No-op: the write lock is released with COMMIT/ROLLBACK.
}

def _migration_query_int(db : SqlRunner; sql : string) : Result<int, string> {
    //! One-int-result query rail for the engine's COUNT/MAX probes.
    return <- try_run_select_one(db, sql,
        $(var _stmt : DuckStmt?) {},
        $(var stmt : DuckStmt?) {
            return read_via_adapter(stmt, 0, type<int>)
        })
}

def _migration_audit_exists(db : SqlRunner) : Result<bool, string> {
    //! Catalog probe for ``__schema_version`` via information_schema.
    let r <- db |> _migration_query_int(
        "SELECT COUNT(*) FROM information_schema.tables WHERE table_schema = 'main' AND table_name = '__schema_version'")
    if (r |> is_err) return err(r |> unwrap_err, type<bool>)
    return ok((r |> unwrap) > 0, type<string>)
}

def _migration_has_user_objects(db : SqlRunner) : bool {
    //! True when the DB already has user tables/views — drives the engine's adoption
    //! hint. Query failure counts as "no objects".
    let r <- db |> _migration_query_int(
        "SELECT COUNT(*) FROM information_schema.tables WHERE table_schema = 'main' AND table_name != '__schema_version'")
    return (r |> is_ok) && (r |> unwrap) > 0
}

def _migration_history_rows(db : SqlRunner) : Result<array<MigrationRecord>, string> {
    //! Reads every ``__schema_version`` row via the native statement rail.
    return <- try_run_select(db,
        "SELECT version, description, applied_at FROM __schema_version ORDER BY version",
        $(var _stmt : DuckStmt?) {},
        $(var stmt : DuckStmt?) {
            return MigrationRecord(
                version = read_via_adapter(stmt, 0, type<int>),
                description = read_via_adapter(stmt, 1, type<string>),
                applied_at = read_via_adapter(stmt, 2, type<int64>))
        })
}

def _migration_invoke_body(db : SqlRunner; body : MigrationBodyCarrier) : void {
    //! Re-types the erased registry entry back to this provider's body signature and runs it.
    let typed = unsafe(reinterpret<function<(db : SqlRunner) : void>>(body))
    invoke(typed, db)
}

// ===== with_latest_duckdb — convenience wrapper =====

def with_latest_duckdb(path : string; blk : block<(db : SqlRunner) : void>) : void {
    //! Combines ``with_duckdb(path)`` + ``migrate_to_latest`` — the preferred
    //! app-startup form when migrations are in play.
    with_duckdb(path) $(db) {
        db |> migrate_to_latest()
        invoke(blk, db)
    }
}

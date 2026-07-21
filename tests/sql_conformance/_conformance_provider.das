options gen2
options _comment_hygiene = true
options indenting = 4

module _conformance_provider shared public

//! SQL-provider conformance shim — the ONE file a provider swaps to run the shared
//! suite (see README.md). DuckDB edition: scoped open over `duckdb/duckdb_boost`'s
//! runner plus capability constants for self-skip of unsupported groups.
//! `test_conf_fts5.das` is dropped from this copy (caps.fts5 off — DuckDB's FTS
//! extension is a different surface; see the README's capability-skip policy).

// The migration glue is required before the boost — mirrors the main-repo shim, where
// requiring the boost first can resurrect a stale shared-module generation after
// intentionally-failing compile tests in the same dastest process (daslang
// shared-module promotion bug; see the main repo's shim for the minimal repro).
require duckdb/duckdb_migrate public
require duckdb/duckdb_boost public
require daslib/sql_linq public

// Capability constants — mirror the provider's SqlProviderCaps registry entry.
let public CONF_PROVIDER_NAME = "duckdb"
let public CONF_HAS_FTS5 = false
let public CONF_HAS_CLIENT_UDFS = true
let public CONF_HAS_RETURNING = true

def public with_conf_db(blk : block<(db : SqlRunner) : void>) : void {
    //! Scoped fresh empty database — every conformance test runs against one of these.
    with_duckdb(":memory:", blk)
}

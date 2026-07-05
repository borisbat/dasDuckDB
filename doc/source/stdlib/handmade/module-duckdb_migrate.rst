DuckDB glue for the provider-neutral migrations engine (``daslib/sql_migrate``
in the daslang repo, re-exported here, so one ``require duckdb/duckdb_migrate``
covers the whole surface): ``[sql_migration]`` declares a versioned migration
whose runner parameter type routes it into DuckDB's stream (versions are unique
per provider stream), ``migrate_to_latest`` / ``try_migrate_to_latest`` apply
whatever is pending inside one transaction, ``baseline`` adopts pre-existing
databases, and ``[struct_convert]`` + ``convert_and_rename`` rebuild tables
across shape changes.

The glue supplies the engine's per-provider hooks (see PROVIDER_CONTRACT.md
§Migrations in the daslang repo): DuckDB's single-writer engine already
serializes concurrent migrators, so the transaction hook is a plain ``BEGIN`` —
guarded against ambient ``with_transaction`` scopes, because DuckDB has no
savepoints and a nested ``BEGIN`` aborts the outer transaction. Catalog probes
go through ``information_schema``; the audit table's ``applied_at`` is stamped
client-side (epoch seconds), keeping the engine's SQL portable.

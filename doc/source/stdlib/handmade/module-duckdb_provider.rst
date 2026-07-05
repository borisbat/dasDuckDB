DuckDB's entry in the neutral SQL provider registry (``daslib/sql_provider``) —
the compile-time half of the provider. ``register_duckdb_provider`` is called by
``sql_register_present_providers`` (from ``daslib/sql_boost``) in every macro
context that analyzes ``_sql`` chains; the entry carries the ``DuckStmt?``
statement-type factories the macros splice into emitted bind/reader blocks, the
dialect hooks (``?`` placeholders, ``json_extract_string`` for ``@sql_json``
descent — DuckDB's plain ``json_extract`` returns a typed JSON value that breaks
VARCHAR comparisons — and the ``BIGINT`` / ``DOUBLE`` / ``VARCHAR`` type
spellings), and the capability flags (client UDFs and RETURNING on; FTS5 off —
DuckDB's full-text extension is a different surface).

The runtime helpers here (``duckdb_read_table_info``, the read-only
``schema_from`` reader, ``duckdb_sql_type`` / ``duckdb_decl_to_sql_type``) back
``check_schema`` and ``[sql_table(schema_from=...)]``. This module deliberately
does not require ``duckdb/duckdb_boost`` — that would cycle through
``daslib/sql_boost``.

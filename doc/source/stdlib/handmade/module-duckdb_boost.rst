The DuckDB runtime layer for daslang's SQL machinery. A connection is a
``SqlRunner`` — open one with ``with_duckdb(path) $(db) { ... }`` (RAII; use
``":memory:"`` for an in-memory database) — and everything else takes it as the
first argument: raw ``exec`` / ``try_exec``, typed CRUD over ``[sql_table]``
structs (``create_table`` / ``insert`` / ``update`` / ``delete_`` /
``check_schema``), ``with_transaction`` / ``try_transaction``, and the
``run_select`` family that ``_sql(...)`` chains compile into.

DuckDB-specific behavior worth knowing (versus the SQLite reference provider):
``create_table`` renders strict DuckDB types (``BIGINT`` / ``DOUBLE`` /
``VARCHAR`` / ``BLOB``) and pairs a single integer primary key with a
``CREATE SEQUENCE`` + ``DEFAULT nextval(...)`` since DuckDB has no rowid;
``insert`` reports the new primary key via ``INSERT ... RETURNING``; nested
``with_transaction`` scopes JOIN the outer transaction (DuckDB has no
savepoints — depth is tracked on the runner, and mixing raw ``exec("BEGIN")``
with the tracked helpers desyncs it); ``_each_sql`` iterates a materialized
result (DuckDB materializes query results anyway). ``[sql_function]`` registers
a daslang function as a scalar UDF on every subsequently opened connection and
makes it usable inside ``_sql`` chains.

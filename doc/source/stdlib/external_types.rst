.. _stdlib_duckdb_external_types_section:

**************
External types
**************

Types referenced by the generated module pages but owned elsewhere — the
``duckdb_stmt`` cursor module, the raw ``duckdb`` C binding, and daslang's
``daslib/sql`` core. This page anchors their labels so the generated pages link
without dangling references; follow the upstream links for the authoritative
definitions. (Daslang-core types such as ``Result`` / ``Option`` resolve against
the `daslang documentation <https://daslang.io/doc/>`_ via intersphinx.)

.. _struct-duckdb_stmt-duckstmt:

``duckdb_stmt::DuckStmt``
=========================

The provider statement handle spliced into ``_sql``-emitted bind/reader blocks —
a cursor over a prepared statement and its materialized result. Unlike SQLite's
step-cursor ``sqlite3_stmt?``, DuckDB's C API executes to a materialized
``duckdb_result`` read by (column, row), so the handle carries the prepared
statement, the result pointer, and the current row. User code never constructs
one; the ``run_select`` family owns its lifecycle.

.. _alias-duckdb_connection:

``duckdb::duckdb_connection``
=============================

The raw C-API connection handle (`DuckDB C API
<https://duckdb.org/docs/api/c/overview>`_), owned by ``SqlRunner`` and passed
to ``duckdb_*`` functions when dropping below the boost layer.

.. _enum-sql-sqltype:

``sql::SqlType``
================

Daslang's abstract SQL storage class (``Integer`` / ``Real`` / ``Text`` /
``Blob`` / ``Null``, from ``daslib/sql``). The provider renders it to DuckDB
spellings via ``duckdb_sql_type`` — ``BIGINT`` / ``DOUBLE`` / ``VARCHAR`` /
``BLOB``.

.. _alias-sqlerror:

``sql::SqlError``
=================

``Option<string>`` from ``daslib/sql`` — ``none`` on success, ``some(errmsg)``
on failure. The return type of every ``try_*`` helper that has no payload.

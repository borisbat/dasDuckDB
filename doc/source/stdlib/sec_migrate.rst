.. _stdlib_duckdb_migrate_section:

**********************************************
duckdb_migrate — versioned schema migrations
**********************************************

DuckDB glue for the provider-neutral migrations engine (``daslib/sql_migrate``
in the daslang repo, re-exported here): ``[sql_migration]``,
``migrate_to_latest`` / ``try_migrate_to_latest``, ``baseline``,
``[struct_convert]`` and ``convert_and_rename`` all work through this module.
DuckDB's single-writer engine coordinates concurrent migrators by itself, so
the glue's transaction hook is a plain ``BEGIN`` — guarded against ambient
transactions, which a nested ``BEGIN`` would abort.

.. toctree::

   generated/duckdb_migrate.rst

.. _stdlib_duckdb_boost_section:

*********************************
duckdb_boost — the runtime layer
*********************************

The runtime surface user code touches: the ``SqlRunner`` connection owner and its
RAII helpers, raw ``exec`` / ``try_exec``, typed CRUD over ``[sql_table]`` structs,
transactions, the ``[sql_function]`` UDF rail, and the ``run_select`` family the
``_sql(...)`` macros emit against.

.. toctree::

   generated/duckdb_boost.rst

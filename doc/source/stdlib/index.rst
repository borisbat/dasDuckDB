.. _stdlib:

##################
  dasDuckDB v1.5
##################

The dasDuckDB surface, organised by area: the runtime boost (runner, raw SQL,
typed CRUD, the ``_sql`` runtime helpers) and the provider registration shim.
The underlying ``duckdb_*`` C API bindings are not duplicated here — they mirror
`DuckDB's C API <https://duckdb.org/docs/api/c/overview>`_ one-to-one.

.. toctree::
   :maxdepth: 3
   :numbered:

   sec_boost.rst
   sec_provider.rst
   external_types.rst

.. _stdlib_duckdb_provider_section:

****************************************
duckdb_provider — the registration shim
****************************************

The lean bridge between the raw ``duckdb`` C binding and the neutral provider
registry in ``daslib/sql_provider``: statement-type factories, dialect hooks
(placeholders, ``json_extract_string`` descent, type spellings), capability
flags, and the schema readers behind ``check_schema`` and
``[sql_table(schema_from=...)]``.

.. toctree::

   generated/duckdb_provider.rst

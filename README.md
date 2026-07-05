# dasDuckDB

[DuckDB](https://duckdb.org/) bindings for the [daslang](https://daslang.io/)
programming language — an in-process analytical SQL database, usable from
daslang scripts, including as a provider for the `_sql(...)` LINQ-to-SQL
machinery in `daslib/sql_linq`.

Sibling project to the in-tree `dasSQLITE` module (the reference SQL provider);
the provider contract both implement is documented in
[PROVIDER_CONTRACT.md](https://github.com/GaijinEntertainment/daScript/blob/master/modules/dasSQLITE/PROVIDER_CONTRACT.md).

## Status

Early development. The native C-API binding, the `duckdb_boost` runtime layer
(runner + `_sql` helpers), the `duckdb_provider` registry shim, and the shared
SQL conformance suite are being brought up.

## Versions

- **DuckDB v1.5.4** — the release amalgamation (`duckdb.cpp` + the stable C API
  `duckdb.h`) is downloaded at CMake configure time (pinned URL + SHA256) and
  compiled directly into the module; nothing to install, no runtime DLL.

## Requirements

- daslang SDK (with dynamic-module support)
- CMake 3.18+, a C++17 compiler (MSVC / GCC / Clang)

## Build

Via daspkg:

```
daspkg install github.com/borisbat/dasDuckDB
```

Or configure the native module directly:

```
cmake -B build -DDASLANG_DIR=/path/to/daslang
cmake --build build --config Release
```

This produces `dasModuleDuckDB.shared_module` in the repo root, which
`.das_module` registers for the dynamic daslang binary.

## Modules

| Module | Require | Role |
|---|---|---|
| `duckdb` | `require duckdb` | raw C API binding (generated from `duckdb.h`) |
| `duckdb_boost` | `require duckdb/duckdb_boost` | runner (`SqlRunner`), `with_duckdb`, exec/query surface, `_sql` runtime helpers |
| `duckdb_provider` | `require duckdb/duckdb_provider` | lean registration shim for the `daslib/sql_provider` registry |

## Local development

Run/lint/test against a daslang checkout without installing:

```
daslang -load_module /path/to/dasDuckDB your_script.das
```

## Regenerating the binding

`bind/bind_duckdb.das` parses `duckdb/duckdb.h` via libclang and regenerates
`src/dasDUCKDB.*`. Needs a daslang build with `dasClangBind` enabled. Run from
the repo root:

```
daslang bind/bind_duckdb.das
```

## License

MIT — see [LICENSE](LICENSE). DuckDB itself is MIT-licensed.

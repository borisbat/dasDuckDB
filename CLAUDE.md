# dasDuckDB project instructions

dasDuckDB is the daslang binding + SQL-LINQ provider for
[DuckDB](https://duckdb.org/) (v1.5.4, in-process analytical SQL). It is the first
**external** consumer of the provider contract defined in the daslang repo:
[modules/dasSQLITE/PROVIDER_CONTRACT.md](https://github.com/GaijinEntertainment/daScript/blob/master/modules/dasSQLITE/PROVIDER_CONTRACT.md)
— dasSQLITE (in-tree) is the reference implementation; when something here is
underspecified, dasSQLITE's `sqlite_boost.das` / `sqlite_provider.das` are the
closest precedent. Repo scaffolding mirrors
[dasImguiImplot](https://github.com/borisbat/dasImguiImplot) (CI, Pages docs,
CMake dual-mode).

All `.das` code uses **gen2 syntax**. Read the daslang repo's `CLAUDE.md` and
`skills/sql.md` for the `_sql` machinery; `skills/external_module_debugging.md`
for the `-load_module` dev loop.

## Modules

Registered in `.das_module`. A NEW daslib module MUST get its own line there, or
`require duckdb/<name>` fails with `error[20605]`.

| Module | Require | Role |
|---|---|---|
| `duckdb` | `require duckdb` | raw C API binding, generated from `duckdb/duckdb.h` (never edit `src/dasDUCKDB.*` by hand except `main.cpp`) |
| `duckdb_boost` | `require duckdb/duckdb_boost` | runner (`SqlRunner`), `with_duckdb`/`open_duckdb`, exec/query surface, `_sql` runtime helpers (`run_select` family, `sql_bind_to_stmt`/`sql_read_witness`), CRUD over `[sql_table]` structs, transactions |
| `duckdb_provider` | `require duckdb/duckdb_provider` | lean registration shim for `daslib/sql_provider` — stmt-type factories, dialect hooks, capability flags. Must NOT require `duckdb_boost` (cycles through `daslib/sql_boost`) |

The native module is `duckdb` — `Module_dasDUCKDB`, `dasModuleDuckDB.shared_module`,
`src/dasDUCKDB.*`.

## DuckDB vs SQLite divergences (the reason this repo exists)

- **Strict typing, no affinity**: `SqlType.Integer` renders `BIGINT` (not `INTEGER` —
  das `int64` wouldn't fit DuckDB's 32-bit `INTEGER`), `Text` → `VARCHAR`.
- **No rowid / no auto-increment PK**: `create_table` emits a
  `CREATE SEQUENCE` + `DEFAULT nextval(...)` for the auto-assigned integer pk;
  `insert(row) : int64` reads the pk back via `INSERT ... RETURNING` (`pkReport =
  ReturningPk`, vs SQLite's `LastInsertRowid`).
- **No savepoints**: nested `with_transaction` composes by depth-tracking on the
  runner (inner scopes join the outer transaction) instead of `SAVEPOINT`.
- **No FTS5** (`caps.fts5` off — DuckDB's FTS extension is a different surface);
  **client UDFs on** via the C-API scalar-function rail.
- **Materialized results**: the C API's random-access readers back `_each_sql`
  iteration; DuckDB materializes query results anyway.

## Dev workflow

- **Edit source at `D:\DASPKG\dasDuckDB`.** Run/lint/test with the module on the
  load path: `daslang -load_module D:/DASPKG/dasDuckDB <script>` (MCP tools:
  `load_modules: ["D:/DASPKG/dasDuckDB"]`). No junction or daspkg install needed.
- **C++ build:** `cmake -B build -DDASLANG_DIR=<daslang-root>` once, then
  `cmake --build build --config Release` (timeout 0 — the DuckDB amalgamation is a
  25 MB TU, the first compile is minutes). Kill `daslang`/`daslang-live` before
  relinking — they hold `dasModuleDuckDB.shared_module` open.
- **Pure-daslib edits** (`daslib/*.das`, tests) need NO C++ rebuild — just rerun.
- The `duckdb/` directory (amalgamation) is downloaded by CMake configure, pinned
  by URL + SHA256 in `CMakeLists.txt` — gitignored, never committed.

## Regenerating the binding (only when bumping the DuckDB version)

`bind/bind_duckdb.das` parses `duckdb/duckdb.h` via libclang. Needs a daslang
build with `dasClangBind` enabled (see the daslang repo's
`skills/clang_bind_build.md`; the official LLVM SDK's `LLVMConfig.cmake` stomps
`CMAKE_MSVC_RUNTIME_LIBRARY` — daslang's dasClangBind CMakeLists carries the
save/restore). From the repo root:

```
rm src/dasDUCKDB.func_*.cpp   # stale higher-numbered chunks otherwise linger
daslang bind/bind_duckdb.das
```

Then re-run CMake configure (the func_*.cpp glob re-evaluates) and rebuild.
Bumping DuckDB = update `DUCKDB_VERSION` + `DUCKDB_SRC_SHA256` in CMakeLists.txt,
re-download, regen, rebuild, rerun the conformance suite.

## Tests

`tests/sql_conformance/` is a copy of the daslang repo's shared provider
conformance suite with `_conformance_provider.das` rewritten for DuckDB
(`with_conf_db` over `with_duckdb(":memory:")`; `CONF_HAS_FTS5 = false` and the
fts5 file dropped — see the suite README's capability-skip policy). Run:

```
daslang dastest/dastest.das -- --test <this-repo>/tests/sql_conformance
```

(from the daslang repo root, with `-load_module` pointing here — see the CI
workflow for the exact wiring).

options gen2
options rtti = true

require daslib/fio
require daslib/rtti
require daslib/ast
require daslib/rst_comment
require daslib/rst
require daslib/regex
require daslib/regex_boost
require daslib/profiler_boost

// Pull in every documented module so RTTI can see them. The raw `duckdb` C
// binding is intentionally excluded — it mirrors DuckDB's C API one-to-one and
// is documented upstream; `duckdb_stmt` (the DuckStmt cursor struct) is covered
// prose-side in the boost intro.
require duckdb/duckdb_boost
require duckdb/duckdb_provider

def document_module_duckdb_boost() {
    var mod = find_module("duckdb_boost")
    var groups <- array<DocGroup>(
        group_by_regex("Runner & lifecycle", mod, %regex~^(try_open_duckdb|open_duckdb|with_duckdb|finalize|duckdb_version|in_transaction)$%%),
        group_by_regex("Raw SQL", mod, %regex~^(exec|try_exec)$%%),
        group_by_regex("CRUD over [sql_table] structs", mod, %regex~^(try_)?(create_table|drop_table_if_exists|drop_view_if_exists|check_schema|insert|update|delete_|delete_by_id|select_from)$%%),
        group_by_regex("Transactions", mod, %regex~^(with_transaction|try_transaction)$%%),
        group_by_regex("_sql runtime helpers", mod, %regex~^(try_)?run_(select|select_one|select_one_opt|each_select|dml|dml_returning)$%%),
        group_by_regex("Storage-class bridge", mod, %regex~^(sql_bind_to_stmt|sql_read_witness|read_via_adapter)$%%),
        group_by_regex("[sql_function] plumbing", mod, %regex~^(_add_sql_function_thunk|_try_register_function_check_rc)$%%),
        hide_group(group_by_regex("Internal", mod, %regex~^(_|priv_|duckdb_column_|duckdb_pk_seq_|build_duckdb_|ignore_sql_|txn_).*%%))
    )
    document("duckdb_boost — runner, CRUD, transactions, _sql runtime", mod, "duckdb_boost.rst", groups)
}

def document_module_duckdb_provider() {
    var mod = find_module("duckdb_provider")
    var groups <- array<DocGroup>(
        group_by_regex("Registration", mod, %regex~^register_duckdb_provider$%%),
        group_by_regex("Dialect helpers", mod, %regex~^(duckdb_sql_type|duckdb_decl_to_sql_type)$%%),
        group_by_regex("Schema introspection", mod, %regex~^duckdb_read_table_info$%%),
        hide_group(group_by_regex("Internal", mod, %regex~^(_|priv_).*%%))
    )
    document("duckdb_provider — SqlProviderInfo registration shim", mod, "duckdb_provider.rst", groups)
}

// dasDuckDB repo root, derived from a loaded module's own source path so docs
// generate correctly under both -load_module (dev) and daspkg-install (CI),
// without assuming the package lives under <das_root>/modules/.
def dasduckdb_root() : string {
    let m = find_module("duckdb_boost")
    assert(m != null, "duckdb_boost not loaded — cannot locate dasDuckDB root")
    return dir_name(dir_name(string(m.fileName)))
}

[export]
def main {
    disable_profiler(this_context())
    disable_profiler_log(this_context())
    ast_gc_guard() {
        let doc_root = dasduckdb_root() + "/doc/source/stdlib"
        topic_root = "{doc_root}/generated"
        handmade_root = doc_root

        document_module_duckdb_boost()
        document_module_duckdb_provider()
    }
}

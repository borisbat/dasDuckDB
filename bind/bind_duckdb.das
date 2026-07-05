options gen2
require cbind/cbind_boost
require daslib/fio
require daslib/defer
require daslib/strings_boost
require daslib/functional

// Binding generator for the DuckDB C API — mirrors daslang's bind_sqlite.das.
// Parses duckdb/duckdb.h (the release amalgamation header, downloaded by CMake
// configure) via libclang and emits the committed C++ binding (src/dasDUCKDB.*).
// Run FROM THE REPO ROOT: daslang bind/bind_duckdb.das
// (needs a daslang build with dasClangBind enabled; see the daslang repo's
// skills/clang_bind_build.md)

class DuckDbGen : CppGenBind {
    override func_to_stdout = false
    override include_local_parse_file = true
    override generate_constant_decl = true

    duckdb_c_headers <- array<string>(
        "duckdb.h"
    )

    def DuckDbGen {
        bind_root = get_full_file_name("src")
        bind_module = "dasDUCKDB"
        bind_das_module = "duckdb"
        let pfn = "cb_dasDUCKDB.h"
        let pfp = "{get_full_file_name("src")}/"
        let duckdb_i = "{get_full_file_name("duckdb")}/"
        CONST_FILE_NAMES <- array<string>(
            "{duckdb_i}duckdb.h"
        )
        let args <- array<string>(
            // C++ mode, not C: the C API uses bool, which C-mode libclang spells `_Bool` —
            // that leaks into the generated typeFactory<>/makeExtern<> and breaks MSVC.
            "-xc++-header",
            "-std=c++17",
            "-I{pfp}",
            "-I{duckdb_i}",
            "-DDUCKDB_STATIC_BUILD=1"
        )
        func_per_chunk = 20
        super(pfn, pfp, args)
        // value structs the daslib layer declares as locals / receives by value
        local_type_names <- {
            "duckdb_result" => true,
            "duckdb_blob" => true
        }
        openAllFiles()
        for (h in duckdb_c_headers) {
            h = to_upper(h)
        }
    }
    def override open_file_name : string {
        return "{PARSE_FILE_PREFIX}{PARSE_FILE_NAME}"
    }
    def override isArgByValue(name : string) {
        return true
    }
    def override skip_file(fname : string) : bool {
        let ufname = to_upper(fname)
        return !any <| [iterator for(h in duckdb_c_headers); ufname |> ends_with(h)]
    }
    def override skip_alias(var c : CXCursor) {
        let tdn = string(clang_getCursorDisplayName(c))
        var tdt = clang_getCanonicalType(clang_getCursorType(c))
        let tdts = string(clang_getTypeSpelling(tdt))
        if ("struct {tdn}" == tdts) {
            return true
        }
        let aliasf = to_upper(clang_getCursorLocationFileName(c))
        return !any <| [iterator for(h in duckdb_c_headers); aliasf |> ends_with(h)]
    }
    def override skip_enum(ns_en, en : string) {
        return false
    }
    def override skip_struct(sn : string) {
        // duckdb_string_t is the inlined-string vector cell — its anonymous nested
        // union/struct can't be bound (and the value-API surface never needs it).
        return sn |> starts_with("__crt") || sn == "duckdb_string_t" || (sn |> find("(unnamed") >= 0)
    }
    def override skip_function(var c : CXCursor) : bool {
        let fname = string(clang_getCursorSpelling(c))
        // duckdb_string_t consumers — the type is skipped above.
        if (fname == "duckdb_string_is_inlined" || fname == "duckdb_string_t_length" || fname == "duckdb_string_t_data") {
            return true
        }
        let funf = to_upper(clang_getCursorLocationFileName(c))
        return !any <| [iterator for(h in duckdb_c_headers); funf |> ends_with(h)] || skip_anyFunction(c, false)
    }
}

[export]
def main {
    // generate
    var cgb = new DuckDbGen()
    defer() {
        unsafe {
            delete cgb
        }
    }
    cgb->generate()
    cgb->genCMakeDecl("DAS_DUCKDB")
}

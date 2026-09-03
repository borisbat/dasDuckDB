#include "daScript/misc/platform.h"

#include "daScript/ast/ast.h"
#include "daScript/ast/ast_interop.h"
#include "daScript/ast/ast_handle.h"
#include "daScript/simulate/bind_enum.h"

#include "dasDUCKDB.h"

#include "aot_duckdb.h"

namespace das {

void Module_dasDUCKDB::initMain() {

    addExtern<DAS_BIND_FUN(duckdb_register_das_function)>(*this,lib,"duckdb_register_das_function",
        SideEffects::worstDefault, "duckdb_register_das_function")
            ->args({"conn","name","fn","nArgs",
                    "tag0","tag1","tag2","tag3",
                    "retTag","deterministic","context","at"});

    for ( auto & pfn : this->functions.each() ) {
        // fix up everything returning uint8? into returning string# and make it an unsafe operation.
        // DuckDB C API strings come in two flavors: internal (duckdb_column_name, *_error — valid
        // until the owner is destroyed) and malloc'd (duckdb_value_varchar — caller must duckdb_free);
        // duckdb_boost owns that distinction, the raw binding just exposes string#.
        if ( pfn->result->isPointer() && pfn->result->firstType &&
                pfn->result->firstType->baseType==Type::tUInt8 ) {
            pfn->result = new TypeDecl(Type::tString, pfn->at);
            pfn->result->constant = true;
            pfn->result->temporary = true;
            pfn->unsafeOperation = true;
        }
    }
}

ModuleAotType Module_dasDUCKDB::aotRequire ( TextWriter & tw ) const {
    tw << "#include \"../modules/dasDuckDB/src/aot_duckdb.h\"\n";
    return ModuleAotType::cpp;
}

}

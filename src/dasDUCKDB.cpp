// this file is generated via Daslang automatic binder
// all user modifications will be lost after this file is re-generated

#include "daScript/misc/platform.h"
#include "daScript/ast/ast.h"
#include "daScript/ast/ast_interop.h"
#include "daScript/ast/ast_handle.h"
#include "daScript/ast/ast_typefactory_bind.h"
#include "daScript/simulate/bind_enum.h"
#include "dasDUCKDB.h"
#include "need_dasDUCKDB.h"
#include "dasDUCKDB.struct.impl.inc"
namespace das {
#include "dasDUCKDB.enum.class.inc"
#include "dasDUCKDB.struct.class.inc"
#include "dasDUCKDB.func.aot.inc"
Module_dasDUCKDB::Module_dasDUCKDB() : Module("duckdb") {
}
bool Module_dasDUCKDB::initDependencies() {
	if ( initialized ) return true;
	initialized = true;
	lib.addModule(this);
	lib.addBuiltInModule();
	#include "dasDUCKDB.const.inc"
	#include "dasDUCKDB.enum.add.inc"
	#include "dasDUCKDB.dummy.add.inc"
	#include "dasDUCKDB.struct.add.inc"
	#include "dasDUCKDB.struct.postadd.inc"
	#include "dasDUCKDB.alias.add.inc"
	#include "dasDUCKDB.func.reg.inc"
	initMain();
	return true;
}
REGISTER_DYN_MODULE(Module_dasDUCKDB,Module_dasDUCKDB);
}
REGISTER_MODULE_IN_NAMESPACE(Module_dasDUCKDB,das);


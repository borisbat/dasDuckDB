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
namespace das {
#include "dasDUCKDB.func.aot.decl.inc"
void Module_dasDUCKDB::initFunctions_8() {
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:2361:35
	makeExtern< duckdb_pending_state (*)(_duckdb_pending_result *) , duckdb_pending_execute_check_state , SimNode_ExtFuncCall >(lib,"duckdb_pending_execute_check_state","duckdb_pending_execute_check_state")
		->args({"pending_result"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:2375:27
	makeExtern< duckdb_state (*)(_duckdb_pending_result *,duckdb_result *) , duckdb_execute_pending , SimNode_ExtFuncCall >(lib,"duckdb_execute_pending","duckdb_execute_pending")
		->args({"pending_result","out_result"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:2384:19
	makeExtern< bool (*)(duckdb_pending_state) , duckdb_pending_execution_is_finished , SimNode_ExtFuncCall >(lib,"duckdb_pending_execution_is_finished","duckdb_pending_execution_is_finished")
		->args({"pending_state"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:2400:19
	makeExtern< void (*)(_duckdb_value **) , duckdb_destroy_value , SimNode_ExtFuncCall >(lib,"duckdb_destroy_value","duckdb_destroy_value")
		->args({"value"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:2410:27
	makeExtern< _duckdb_value * (*)(const char *) , duckdb_create_varchar , SimNode_ExtFuncCall >(lib,"duckdb_create_varchar","duckdb_create_varchar")
		->args({"text"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:2419:27
	makeExtern< _duckdb_value * (*)(const char *,idx_t) , duckdb_create_varchar_length , SimNode_ExtFuncCall >(lib,"duckdb_create_varchar_length","duckdb_create_varchar_length")
		->args({"text","length"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:2427:27
	makeExtern< _duckdb_value * (*)(bool) , duckdb_create_bool , SimNode_ExtFuncCall >(lib,"duckdb_create_bool","duckdb_create_bool")
		->args({"input"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:2435:27
	makeExtern< _duckdb_value * (*)(signed char) , duckdb_create_int8 , SimNode_ExtFuncCall >(lib,"duckdb_create_int8","duckdb_create_int8")
		->args({"input"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:2443:27
	makeExtern< _duckdb_value * (*)(unsigned char) , duckdb_create_uint8 , SimNode_ExtFuncCall >(lib,"duckdb_create_uint8","duckdb_create_uint8")
		->args({"input"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:2451:27
	makeExtern< _duckdb_value * (*)(short) , duckdb_create_int16 , SimNode_ExtFuncCall >(lib,"duckdb_create_int16","duckdb_create_int16")
		->args({"input"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:2459:27
	makeExtern< _duckdb_value * (*)(unsigned short) , duckdb_create_uint16 , SimNode_ExtFuncCall >(lib,"duckdb_create_uint16","duckdb_create_uint16")
		->args({"input"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:2467:27
	makeExtern< _duckdb_value * (*)(int) , duckdb_create_int32 , SimNode_ExtFuncCall >(lib,"duckdb_create_int32","duckdb_create_int32")
		->args({"input"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:2475:27
	makeExtern< _duckdb_value * (*)(unsigned int) , duckdb_create_uint32 , SimNode_ExtFuncCall >(lib,"duckdb_create_uint32","duckdb_create_uint32")
		->args({"input"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:2483:27
	makeExtern< _duckdb_value * (*)(uint64_t) , duckdb_create_uint64 , SimNode_ExtFuncCall >(lib,"duckdb_create_uint64","duckdb_create_uint64")
		->args({"input"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:2490:27
	makeExtern< _duckdb_value * (*)(int64_t) , duckdb_create_int64 , SimNode_ExtFuncCall >(lib,"duckdb_create_int64","duckdb_create_int64")
		->args({"val"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:2498:27
	makeExtern< _duckdb_value * (*)(duckdb_hugeint) , duckdb_create_hugeint , SimNode_ExtFuncCall >(lib,"duckdb_create_hugeint","duckdb_create_hugeint")
		->args({"input"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:2506:27
	makeExtern< _duckdb_value * (*)(duckdb_uhugeint) , duckdb_create_uhugeint , SimNode_ExtFuncCall >(lib,"duckdb_create_uhugeint","duckdb_create_uhugeint")
		->args({"input"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:2514:27
	makeExtern< _duckdb_value * (*)(duckdb_bignum) , duckdb_create_bignum , SimNode_ExtFuncCall >(lib,"duckdb_create_bignum","duckdb_create_bignum")
		->args({"input"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:2525:27
	makeExtern< _duckdb_value * (*)(duckdb_decimal) , duckdb_create_decimal , SimNode_ExtFuncCall >(lib,"duckdb_create_decimal","duckdb_create_decimal")
		->args({"input"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:2533:27
	makeExtern< _duckdb_value * (*)(float) , duckdb_create_float , SimNode_ExtFuncCall >(lib,"duckdb_create_float","duckdb_create_float")
		->args({"input"})
		->addToModule(*this, SideEffects::worstDefault);
}
}


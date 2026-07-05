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
void Module_dasDUCKDB::initFunctions_9() {
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:2533:27
	makeExtern< _duckdb_value * (*)(float) , duckdb_create_float , SimNode_ExtFuncCall >(lib,"duckdb_create_float","duckdb_create_float")
		->args({"input"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:2541:27
	makeExtern< _duckdb_value * (*)(double) , duckdb_create_double , SimNode_ExtFuncCall >(lib,"duckdb_create_double","duckdb_create_double")
		->args({"input"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:2549:27
	makeExtern< _duckdb_value * (*)(duckdb_date) , duckdb_create_date , SimNode_ExtFuncCall >(lib,"duckdb_create_date","duckdb_create_date")
		->args({"input"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:2557:27
	makeExtern< _duckdb_value * (*)(duckdb_time) , duckdb_create_time , SimNode_ExtFuncCall >(lib,"duckdb_create_time","duckdb_create_time")
		->args({"input"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:2565:27
	makeExtern< _duckdb_value * (*)(duckdb_time_ns) , duckdb_create_time_ns , SimNode_ExtFuncCall >(lib,"duckdb_create_time_ns","duckdb_create_time_ns")
		->args({"input"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:2574:27
	makeExtern< _duckdb_value * (*)(duckdb_time_tz) , duckdb_create_time_tz_value , SimNode_ExtFuncCall >(lib,"duckdb_create_time_tz_value","duckdb_create_time_tz_value")
		->args({"value"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:2582:27
	makeExtern< _duckdb_value * (*)(duckdb_timestamp) , duckdb_create_timestamp , SimNode_ExtFuncCall >(lib,"duckdb_create_timestamp","duckdb_create_timestamp")
		->args({"input"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:2590:27
	makeExtern< _duckdb_value * (*)(duckdb_timestamp) , duckdb_create_timestamp_tz , SimNode_ExtFuncCall >(lib,"duckdb_create_timestamp_tz","duckdb_create_timestamp_tz")
		->args({"input"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:2598:27
	makeExtern< _duckdb_value * (*)(duckdb_timestamp_s) , duckdb_create_timestamp_s , SimNode_ExtFuncCall >(lib,"duckdb_create_timestamp_s","duckdb_create_timestamp_s")
		->args({"input"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:2606:27
	makeExtern< _duckdb_value * (*)(duckdb_timestamp_ms) , duckdb_create_timestamp_ms , SimNode_ExtFuncCall >(lib,"duckdb_create_timestamp_ms","duckdb_create_timestamp_ms")
		->args({"input"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:2614:27
	makeExtern< _duckdb_value * (*)(duckdb_timestamp_ns) , duckdb_create_timestamp_ns , SimNode_ExtFuncCall >(lib,"duckdb_create_timestamp_ns","duckdb_create_timestamp_ns")
		->args({"input"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:2622:27
	makeExtern< _duckdb_value * (*)(duckdb_interval) , duckdb_create_interval , SimNode_ExtFuncCall >(lib,"duckdb_create_interval","duckdb_create_interval")
		->args({"input"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:2631:27
	makeExtern< _duckdb_value * (*)(const unsigned char *,idx_t) , duckdb_create_blob , SimNode_ExtFuncCall >(lib,"duckdb_create_blob","duckdb_create_blob")
		->args({"data","length"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:2639:27
	makeExtern< _duckdb_value * (*)(duckdb_bit) , duckdb_create_bit , SimNode_ExtFuncCall >(lib,"duckdb_create_bit","duckdb_create_bit")
		->args({"input"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:2647:27
	makeExtern< _duckdb_value * (*)(duckdb_uhugeint) , duckdb_create_uuid , SimNode_ExtFuncCall >(lib,"duckdb_create_uuid","duckdb_create_uuid")
		->args({"input"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:2655:19
	makeExtern< bool (*)(_duckdb_value *) , duckdb_get_bool , SimNode_ExtFuncCall >(lib,"duckdb_get_bool","duckdb_get_bool")
		->args({"val"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:2663:21
	makeExtern< signed char (*)(_duckdb_value *) , duckdb_get_int8 , SimNode_ExtFuncCall >(lib,"duckdb_get_int8","duckdb_get_int8")
		->args({"val"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:2671:22
	makeExtern< unsigned char (*)(_duckdb_value *) , duckdb_get_uint8 , SimNode_ExtFuncCall >(lib,"duckdb_get_uint8","duckdb_get_uint8")
		->args({"val"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:2679:22
	makeExtern< short (*)(_duckdb_value *) , duckdb_get_int16 , SimNode_ExtFuncCall >(lib,"duckdb_get_int16","duckdb_get_int16")
		->args({"val"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:2687:23
	makeExtern< unsigned short (*)(_duckdb_value *) , duckdb_get_uint16 , SimNode_ExtFuncCall >(lib,"duckdb_get_uint16","duckdb_get_uint16")
		->args({"val"})
		->addToModule(*this, SideEffects::worstDefault);
}
}


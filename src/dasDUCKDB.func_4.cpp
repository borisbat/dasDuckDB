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
void Module_dasDUCKDB::initFunctions_4() {
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:1556:26
	makeExtern< duckdb_time (*)(duckdb_result *,idx_t,idx_t) , duckdb_value_time , SimNode_ExtFuncCallAndCopyOrMove >(lib,"duckdb_value_time","duckdb_value_time")
		->args({"result","col","row"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:1563:31
	makeExtern< duckdb_timestamp (*)(duckdb_result *,idx_t,idx_t) , duckdb_value_timestamp , SimNode_ExtFuncCallAndCopyOrMove >(lib,"duckdb_value_timestamp","duckdb_value_timestamp")
		->args({"result","col","row"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:1570:30
	makeExtern< duckdb_interval (*)(duckdb_result *,idx_t,idx_t) , duckdb_value_interval , SimNode_ExtFuncCallAndCopyOrMove >(lib,"duckdb_value_interval","duckdb_value_interval")
		->args({"result","col","row"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:1578:20
	makeExtern< char * (*)(duckdb_result *,idx_t,idx_t) , duckdb_value_varchar , SimNode_ExtFuncCall >(lib,"duckdb_value_varchar","duckdb_value_varchar")
		->args({"result","col","row"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:1585:28
	makeExtern< duckdb_string (*)(duckdb_result *,idx_t,idx_t) , duckdb_value_string , SimNode_ExtFuncCallAndCopyOrMove >(lib,"duckdb_value_string","duckdb_value_string")
		->args({"result","col","row"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:1595:20
	makeExtern< char * (*)(duckdb_result *,idx_t,idx_t) , duckdb_value_varchar_internal , SimNode_ExtFuncCall >(lib,"duckdb_value_varchar_internal","duckdb_value_varchar_internal")
		->args({"result","col","row"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:1605:28
	makeExtern< duckdb_string (*)(duckdb_result *,idx_t,idx_t) , duckdb_value_string_internal , SimNode_ExtFuncCallAndCopyOrMove >(lib,"duckdb_value_string_internal","duckdb_value_string_internal")
		->args({"result","col","row"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:1613:26
	makeExtern< duckdb_blob (*)(duckdb_result *,idx_t,idx_t) , duckdb_value_blob , SimNode_ExtFuncCallAndCopyOrMove >(lib,"duckdb_value_blob","duckdb_value_blob")
		->args({"result","col","row"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:1620:19
	makeExtern< bool (*)(duckdb_result *,idx_t,idx_t) , duckdb_value_is_null , SimNode_ExtFuncCall >(lib,"duckdb_value_is_null","duckdb_value_is_null")
		->args({"result","col","row"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:1638:20
	makeExtern< void * (*)(size_t) , duckdb_malloc , SimNode_ExtFuncCall >(lib,"duckdb_malloc","duckdb_malloc")
		->args({"size"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:1646:19
	makeExtern< void (*)(void *) , duckdb_free , SimNode_ExtFuncCall >(lib,"duckdb_free","duckdb_free")
		->args({"ptr"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:1654:20
	makeExtern< idx_t (*)() , duckdb_vector_size , SimNode_ExtFuncCall >(lib,"duckdb_vector_size","duckdb_vector_size")
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:1687:32
	makeExtern< _duckdb_error_data * (*)(const char *,idx_t) , duckdb_valid_utf8_check , SimNode_ExtFuncCall >(lib,"duckdb_valid_utf8_check","duckdb_valid_utf8_check")
		->args({"str","len"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:1703:33
	makeExtern< duckdb_date_struct (*)(duckdb_date) , duckdb_from_date , SimNode_ExtFuncCallAndCopyOrMove >(lib,"duckdb_from_date","duckdb_from_date")
		->args({"date"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:1711:26
	makeExtern< duckdb_date (*)(duckdb_date_struct) , duckdb_to_date , SimNode_ExtFuncCallAndCopyOrMove >(lib,"duckdb_to_date","duckdb_to_date")
		->args({"date"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:1719:19
	makeExtern< bool (*)(duckdb_date) , duckdb_is_finite_date , SimNode_ExtFuncCall >(lib,"duckdb_is_finite_date","duckdb_is_finite_date")
		->args({"date"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:1727:33
	makeExtern< duckdb_time_struct (*)(duckdb_time) , duckdb_from_time , SimNode_ExtFuncCallAndCopyOrMove >(lib,"duckdb_from_time","duckdb_from_time")
		->args({"time"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:1736:29
	makeExtern< duckdb_time_tz (*)(int64_t,int) , duckdb_create_time_tz , SimNode_ExtFuncCallAndCopyOrMove >(lib,"duckdb_create_time_tz","duckdb_create_time_tz")
		->args({"micros","offset"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:1745:36
	makeExtern< duckdb_time_tz_struct (*)(duckdb_time_tz) , duckdb_from_time_tz , SimNode_ExtFuncCallAndCopyOrMove >(lib,"duckdb_from_time_tz","duckdb_from_time_tz")
		->args({"micros"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:1753:26
	makeExtern< duckdb_time (*)(duckdb_time_struct) , duckdb_to_time , SimNode_ExtFuncCallAndCopyOrMove >(lib,"duckdb_to_time","duckdb_to_time")
		->args({"time"})
		->addToModule(*this, SideEffects::worstDefault);
}
}


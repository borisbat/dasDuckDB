// this file is generated via Daslang automatic binder
// all user modifications will be lost after this file is re-generated

#include "daScript/misc/platform.h"
#include "daScript/ast/ast.h"
#include "daScript/ast/ast_interop.h"
#include "daScript/ast/ast_handle.h"
#include "daScript/simulate/bind_enum.h"
#include "dasDUCKDB.h"
#include "need_dasDUCKDB.h"
namespace das {
#include "dasDUCKDB.func.aot.decl.inc"
void Module_dasDUCKDB::initFunctions_18() {
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:4493:20
	makeExtern< void * (*)(_duckdb_function_info *) , duckdb_function_get_init_data , SimNode_ExtFuncCall >(lib,"duckdb_function_get_init_data","duckdb_function_get_init_data")
		->args({"info"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:4501:20
	makeExtern< void * (*)(_duckdb_function_info *) , duckdb_function_get_local_init_data , SimNode_ExtFuncCall >(lib,"duckdb_function_get_local_init_data","duckdb_function_get_local_init_data")
		->args({"info"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:4509:19
	makeExtern< void (*)(_duckdb_function_info *,const char *) , duckdb_function_set_error , SimNode_ExtFuncCall >(lib,"duckdb_function_set_error","duckdb_function_set_error")
		->args({"info","error"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:4537:19
	makeExtern< void (*)(_duckdb_replacement_scan_info *,const char *) , duckdb_replacement_scan_set_function_name , SimNode_ExtFuncCall >(lib,"duckdb_replacement_scan_set_function_name","duckdb_replacement_scan_set_function_name")
		->args({"info","function_name"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:4546:19
	makeExtern< void (*)(_duckdb_replacement_scan_info *,_duckdb_value *) , duckdb_replacement_scan_add_parameter , SimNode_ExtFuncCall >(lib,"duckdb_replacement_scan_add_parameter","duckdb_replacement_scan_add_parameter")
		->args({"info","parameter"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:4554:19
	makeExtern< void (*)(_duckdb_replacement_scan_info *,const char *) , duckdb_replacement_scan_set_error , SimNode_ExtFuncCall >(lib,"duckdb_replacement_scan_set_error","duckdb_replacement_scan_set_error")
		->args({"info","error"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:4569:36
	makeExtern< _duckdb_profiling_info * (*)(_duckdb_connection *) , duckdb_get_profiling_info , SimNode_ExtFuncCall >(lib,"duckdb_get_profiling_info","duckdb_get_profiling_info")
		->args({"connection"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:4580:27
	makeExtern< _duckdb_value * (*)(_duckdb_profiling_info *,const char *) , duckdb_profiling_info_get_value , SimNode_ExtFuncCall >(lib,"duckdb_profiling_info_get_value","duckdb_profiling_info_get_value")
		->args({"info","key"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:4589:27
	makeExtern< _duckdb_value * (*)(_duckdb_profiling_info *) , duckdb_profiling_info_get_metrics , SimNode_ExtFuncCall >(lib,"duckdb_profiling_info_get_metrics","duckdb_profiling_info_get_metrics")
		->args({"info"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:4597:20
	makeExtern< idx_t (*)(_duckdb_profiling_info *) , duckdb_profiling_info_get_child_count , SimNode_ExtFuncCall >(lib,"duckdb_profiling_info_get_child_count","duckdb_profiling_info_get_child_count")
		->args({"info"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:4606:36
	makeExtern< _duckdb_profiling_info * (*)(_duckdb_profiling_info *,idx_t) , duckdb_profiling_info_get_child , SimNode_ExtFuncCall >(lib,"duckdb_profiling_info_get_child","duckdb_profiling_info_get_child")
		->args({"info","index"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:4631:27
	makeExtern< duckdb_state (*)(_duckdb_connection *,const char *,const char *,_duckdb_appender **) , duckdb_appender_create , SimNode_ExtFuncCall >(lib,"duckdb_appender_create","duckdb_appender_create")
		->args({"connection","schema","table","out_appender"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:4646:27
	makeExtern< duckdb_state (*)(_duckdb_connection *,const char *,const char *,const char *,_duckdb_appender **) , duckdb_appender_create_ext , SimNode_ExtFuncCall >(lib,"duckdb_appender_create_ext","duckdb_appender_create_ext")
		->args({"connection","catalog","schema","table","out_appender"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:4664:27
	makeExtern< duckdb_state (*)(_duckdb_connection *,const char *,idx_t,_duckdb_logical_type **,const char *,const char **,_duckdb_appender **) , duckdb_appender_create_query , SimNode_ExtFuncCall >(lib,"duckdb_appender_create_query","duckdb_appender_create_query")
		->args({"connection","query","column_count","types","table_name","column_names","out_appender"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:4676:20
	makeExtern< idx_t (*)(_duckdb_appender *) , duckdb_appender_column_count , SimNode_ExtFuncCall >(lib,"duckdb_appender_column_count","duckdb_appender_column_count")
		->args({"appender"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:4688:34
	makeExtern< _duckdb_logical_type * (*)(_duckdb_appender *,idx_t) , duckdb_appender_column_type , SimNode_ExtFuncCall >(lib,"duckdb_appender_column_type","duckdb_appender_column_type")
		->args({"appender","col_idx"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:4703:26
	makeExtern< const char * (*)(_duckdb_appender *) , duckdb_appender_error , SimNode_ExtFuncCall >(lib,"duckdb_appender_error","duckdb_appender_error")
		->args({"appender"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:4714:32
	makeExtern< _duckdb_error_data * (*)(_duckdb_appender *) , duckdb_appender_error_data , SimNode_ExtFuncCall >(lib,"duckdb_appender_error_data","duckdb_appender_error_data")
		->args({"appender"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:4725:27
	makeExtern< duckdb_state (*)(_duckdb_appender *) , duckdb_appender_flush , SimNode_ExtFuncCall >(lib,"duckdb_appender_flush","duckdb_appender_flush")
		->args({"appender"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:4734:27
	makeExtern< duckdb_state (*)(_duckdb_appender *) , duckdb_appender_clear , SimNode_ExtFuncCall >(lib,"duckdb_appender_clear","duckdb_appender_clear")
		->args({"appender"})
		->addToModule(*this, SideEffects::worstDefault);
}
}


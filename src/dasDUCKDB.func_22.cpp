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
void Module_dasDUCKDB::initFunctions_22() {
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:5220:19
	makeExtern< void (*)(_duckdb_arrow_stream **) , duckdb_destroy_arrow_stream , SimNode_ExtFuncCall >(lib,"duckdb_destroy_arrow_stream","duckdb_destroy_arrow_stream")
		->args({"stream_p"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:5232:27
	makeExtern< duckdb_state (*)(_duckdb_prepared_statement *,_duckdb_arrow **) , duckdb_execute_prepared_arrow , SimNode_ExtFuncCall >(lib,"duckdb_execute_prepared_arrow","duckdb_execute_prepared_arrow")
		->args({"prepared_statement","out_result"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:5245:27
	makeExtern< duckdb_state (*)(_duckdb_connection *,const char *,_duckdb_arrow_stream *) , duckdb_arrow_scan , SimNode_ExtFuncCall >(lib,"duckdb_arrow_scan","duckdb_arrow_scan")
		->args({"connection","table_name","arrow"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:5261:27
	makeExtern< duckdb_state (*)(_duckdb_connection *,const char *,_duckdb_arrow_schema *,_duckdb_arrow_array *,_duckdb_arrow_stream **) , duckdb_arrow_array_scan , SimNode_ExtFuncCall >(lib,"duckdb_arrow_array_scan","duckdb_arrow_array_scan")
		->args({"connection","table_name","arrow_schema","arrow_array","out_stream"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:5282:19
	makeExtern< void (*)(_duckdb_database *,idx_t) , duckdb_execute_tasks , SimNode_ExtFuncCall >(lib,"duckdb_execute_tasks","duckdb_execute_tasks")
		->args({"database","max_tasks"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:5293:32
	makeExtern< void * (*)(_duckdb_database *) , duckdb_create_task_state , SimNode_ExtFuncCall >(lib,"duckdb_create_task_state","duckdb_create_task_state")
		->args({"database"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:5303:19
	makeExtern< void (*)(void *) , duckdb_execute_tasks_state , SimNode_ExtFuncCall >(lib,"duckdb_execute_tasks_state","duckdb_execute_tasks_state")
		->args({"state"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:5317:20
	makeExtern< idx_t (*)(void *,idx_t) , duckdb_execute_n_tasks_state , SimNode_ExtFuncCall >(lib,"duckdb_execute_n_tasks_state","duckdb_execute_n_tasks_state")
		->args({"state","max_tasks"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:5324:19
	makeExtern< void (*)(void *) , duckdb_finish_execution , SimNode_ExtFuncCall >(lib,"duckdb_finish_execution","duckdb_finish_execution")
		->args({"state"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:5332:19
	makeExtern< bool (*)(void *) , duckdb_task_state_is_finished , SimNode_ExtFuncCall >(lib,"duckdb_task_state_is_finished","duckdb_task_state_is_finished")
		->args({"state"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:5342:19
	makeExtern< void (*)(void *) , duckdb_destroy_task_state , SimNode_ExtFuncCall >(lib,"duckdb_destroy_task_state","duckdb_destroy_task_state")
		->args({"state"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:5349:19
	makeExtern< bool (*)(_duckdb_connection *) , duckdb_execution_is_finished , SimNode_ExtFuncCall >(lib,"duckdb_execution_is_finished","duckdb_execution_is_finished")
		->args({"con"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:5377:32
	makeExtern< _duckdb_data_chunk * (*)(duckdb_result) , duckdb_stream_fetch_chunk , SimNode_ExtFuncCall >(lib,"duckdb_stream_fetch_chunk","duckdb_stream_fetch_chunk")
		->args({"result"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:5391:32
	makeExtern< _duckdb_data_chunk * (*)(duckdb_result) , duckdb_fetch_chunk , SimNode_ExtFuncCall >(lib,"duckdb_fetch_chunk","duckdb_fetch_chunk")
		->args({"result"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:5405:35
	makeExtern< _duckdb_cast_function * (*)() , duckdb_create_cast_function , SimNode_ExtFuncCall >(lib,"duckdb_create_cast_function","duckdb_create_cast_function")
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:5413:19
	makeExtern< void (*)(_duckdb_cast_function *,_duckdb_logical_type *) , duckdb_cast_function_set_source_type , SimNode_ExtFuncCall >(lib,"duckdb_cast_function_set_source_type","duckdb_cast_function_set_source_type")
		->args({"cast_function","source_type"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:5422:19
	makeExtern< void (*)(_duckdb_cast_function *,_duckdb_logical_type *) , duckdb_cast_function_set_target_type , SimNode_ExtFuncCall >(lib,"duckdb_cast_function_set_target_type","duckdb_cast_function_set_target_type")
		->args({"cast_function","target_type"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:5431:19
	makeExtern< void (*)(_duckdb_cast_function *,int64_t) , duckdb_cast_function_set_implicit_cast_cost , SimNode_ExtFuncCall >(lib,"duckdb_cast_function_set_implicit_cast_cost","duckdb_cast_function_set_implicit_cast_cost")
		->args({"cast_function","cost"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:5457:20
	makeExtern< void * (*)(_duckdb_function_info *) , duckdb_cast_function_get_extra_info , SimNode_ExtFuncCall >(lib,"duckdb_cast_function_get_extra_info","duckdb_cast_function_get_extra_info")
		->args({"info"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:5465:31
	makeExtern< duckdb_cast_mode (*)(_duckdb_function_info *) , duckdb_cast_function_get_cast_mode , SimNode_ExtFuncCall >(lib,"duckdb_cast_function_get_cast_mode","duckdb_cast_function_get_cast_mode")
		->args({"info"})
		->addToModule(*this, SideEffects::worstDefault);
}
}


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
void Module_dasDUCKDB::initFunctions_21() {
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:5052:32
	makeExtern< _duckdb_error_data * (*)(_duckdb_arrow_options *,_duckdb_data_chunk *,ArrowArray *) , duckdb_data_chunk_to_arrow , SimNode_ExtFuncCall >(lib,"duckdb_data_chunk_to_arrow","duckdb_data_chunk_to_arrow")
		->args({"arrow_options","chunk","out_arrow_array"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:5064:32
	makeExtern< _duckdb_error_data * (*)(_duckdb_connection *,ArrowSchema *,_duckdb_arrow_converted_schema **) , duckdb_schema_from_arrow , SimNode_ExtFuncCall >(lib,"duckdb_schema_from_arrow","duckdb_schema_from_arrow")
		->args({"connection","schema","out_types"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:5077:32
	makeExtern< _duckdb_error_data * (*)(_duckdb_connection *,ArrowArray *,_duckdb_arrow_converted_schema *,_duckdb_data_chunk **) , duckdb_data_chunk_from_arrow , SimNode_ExtFuncCall >(lib,"duckdb_data_chunk_from_arrow","duckdb_data_chunk_from_arrow")
		->args({"connection","arrow_array","converted_schema","out_chunk"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:5087:19
	makeExtern< void (*)(_duckdb_arrow_converted_schema **) , duckdb_destroy_arrow_converted_schema , SimNode_ExtFuncCall >(lib,"duckdb_destroy_arrow_converted_schema","duckdb_destroy_arrow_converted_schema")
		->args({"arrow_converted_schema"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:5105:27
	makeExtern< duckdb_state (*)(_duckdb_connection *,const char *,_duckdb_arrow **) , duckdb_query_arrow , SimNode_ExtFuncCall >(lib,"duckdb_query_arrow","duckdb_query_arrow")
		->args({"connection","query","out_result"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:5117:27
	makeExtern< duckdb_state (*)(_duckdb_arrow *,_duckdb_arrow_schema **) , duckdb_query_arrow_schema , SimNode_ExtFuncCall >(lib,"duckdb_query_arrow_schema","duckdb_query_arrow_schema")
		->args({"result","out_schema"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:5129:27
	makeExtern< duckdb_state (*)(_duckdb_prepared_statement *,_duckdb_arrow_schema **) , duckdb_prepared_arrow_schema , SimNode_ExtFuncCall >(lib,"duckdb_prepared_arrow_schema","duckdb_prepared_arrow_schema")
		->args({"prepared","out_schema"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:5142:19
	makeExtern< void (*)(duckdb_result,_duckdb_data_chunk *,_duckdb_arrow_array **) , duckdb_result_arrow_array , SimNode_ExtFuncCall >(lib,"duckdb_result_arrow_array","duckdb_result_arrow_array")
		->args({"result","chunk","out_array"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:5158:27
	makeExtern< duckdb_state (*)(_duckdb_arrow *,_duckdb_arrow_array **) , duckdb_query_arrow_array , SimNode_ExtFuncCall >(lib,"duckdb_query_arrow_array","duckdb_query_arrow_array")
		->args({"result","out_array"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:5168:20
	makeExtern< idx_t (*)(_duckdb_arrow *) , duckdb_arrow_column_count , SimNode_ExtFuncCall >(lib,"duckdb_arrow_column_count","duckdb_arrow_column_count")
		->args({"result"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:5178:20
	makeExtern< idx_t (*)(_duckdb_arrow *) , duckdb_arrow_row_count , SimNode_ExtFuncCall >(lib,"duckdb_arrow_row_count","duckdb_arrow_row_count")
		->args({"result"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:5189:20
	makeExtern< idx_t (*)(_duckdb_arrow *) , duckdb_arrow_rows_changed , SimNode_ExtFuncCall >(lib,"duckdb_arrow_rows_changed","duckdb_arrow_rows_changed")
		->args({"result"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:5202:26
	makeExtern< const char * (*)(_duckdb_arrow *) , duckdb_query_arrow_error , SimNode_ExtFuncCall >(lib,"duckdb_query_arrow_error","duckdb_query_arrow_error")
		->args({"result"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:5211:19
	makeExtern< void (*)(_duckdb_arrow **) , duckdb_destroy_arrow , SimNode_ExtFuncCall >(lib,"duckdb_destroy_arrow","duckdb_destroy_arrow")
		->args({"result"})
		->addToModule(*this, SideEffects::worstDefault);
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
}
}


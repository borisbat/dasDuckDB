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
void Module_dasDUCKDB::initFunctions_21() {
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:4981:26
	makeExtern< const char * (*)(_duckdb_table_description *) , duckdb_table_description_error , SimNode_ExtFuncCall >(lib,"duckdb_table_description_error","duckdb_table_description_error")
		->args({"table_description"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:4991:27
	makeExtern< duckdb_state (*)(_duckdb_table_description *,idx_t,bool *) , duckdb_column_has_default , SimNode_ExtFuncCall >(lib,"duckdb_column_has_default","duckdb_column_has_default")
		->args({"table_description","index","out"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:4999:20
	makeExtern< idx_t (*)(_duckdb_table_description *) , duckdb_table_description_get_column_count , SimNode_ExtFuncCall >(lib,"duckdb_table_description_get_column_count","duckdb_table_description_get_column_count")
		->args({"table_description"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:5009:20
	makeExtern< char * (*)(_duckdb_table_description *,idx_t) , duckdb_table_description_get_column_name , SimNode_ExtFuncCall >(lib,"duckdb_table_description_get_column_name","duckdb_table_description_get_column_name")
		->args({"table_description","index"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:5019:34
	makeExtern< _duckdb_logical_type * (*)(_duckdb_table_description *,idx_t) , duckdb_table_description_get_column_type , SimNode_ExtFuncCall >(lib,"duckdb_table_description_get_column_type","duckdb_table_description_get_column_type")
		->args({"table_description","index"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:5039:32
	makeExtern< _duckdb_error_data * (*)(_duckdb_arrow_options *,_duckdb_logical_type **,const char **,idx_t,ArrowSchema *) , duckdb_to_arrow_schema , SimNode_ExtFuncCall >(lib,"duckdb_to_arrow_schema","duckdb_to_arrow_schema")
		->args({"arrow_options","types","names","column_count","out_schema"})
		->addToModule(*this, SideEffects::worstDefault);
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
}
}


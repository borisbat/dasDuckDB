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
void Module_dasDUCKDB::initFunctions_2() {
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:1143:27
	makeExtern< duckdb_state (*)(_duckdb_config *,const char *,const char *) , duckdb_set_config , SimNode_ExtFuncCall >(lib,"duckdb_set_config","duckdb_set_config")
		->args({"config","name","option"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:1150:19
	makeExtern< void (*)(_duckdb_config **) , duckdb_destroy_config , SimNode_ExtFuncCall >(lib,"duckdb_destroy_config","duckdb_destroy_config")
		->args({"config"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:1168:32
	makeExtern< _duckdb_error_data * (*)(duckdb_error_type,const char *) , duckdb_create_error_data , SimNode_ExtFuncCall >(lib,"duckdb_create_error_data","duckdb_create_error_data")
		->args({"type","message"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:1175:19
	makeExtern< void (*)(_duckdb_error_data **) , duckdb_destroy_error_data , SimNode_ExtFuncCall >(lib,"duckdb_destroy_error_data","duckdb_destroy_error_data")
		->args({"error_data"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:1183:32
	makeExtern< duckdb_error_type (*)(_duckdb_error_data *) , duckdb_error_data_error_type , SimNode_ExtFuncCall >(lib,"duckdb_error_data_error_type","duckdb_error_data_error_type")
		->args({"error_data"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:1191:26
	makeExtern< const char * (*)(_duckdb_error_data *) , duckdb_error_data_message , SimNode_ExtFuncCall >(lib,"duckdb_error_data_message","duckdb_error_data_message")
		->args({"error_data"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:1199:19
	makeExtern< bool (*)(_duckdb_error_data *) , duckdb_error_data_has_error , SimNode_ExtFuncCall >(lib,"duckdb_error_data_has_error","duckdb_error_data_has_error")
		->args({"error_data"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:1221:27
	makeExtern< duckdb_state (*)(_duckdb_connection *,const char *,duckdb_result *) , duckdb_query , SimNode_ExtFuncCall >(lib,"duckdb_query","duckdb_query")
		->args({"connection","query","out_result"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:1228:19
	makeExtern< void (*)(duckdb_result *) , duckdb_destroy_result , SimNode_ExtFuncCall >(lib,"duckdb_destroy_result","duckdb_destroy_result")
		->args({"result"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:1240:26
	makeExtern< const char * (*)(duckdb_result *,idx_t) , duckdb_column_name , SimNode_ExtFuncCall >(lib,"duckdb_column_name","duckdb_column_name")
		->args({"result","col"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:1251:26
	makeExtern< DUCKDB_TYPE (*)(duckdb_result *,idx_t) , duckdb_column_type , SimNode_ExtFuncCall >(lib,"duckdb_column_type","duckdb_column_type")
		->args({"result","col"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:1259:36
	makeExtern< duckdb_statement_type (*)(duckdb_result) , duckdb_result_statement_type , SimNode_ExtFuncCall >(lib,"duckdb_result_statement_type","duckdb_result_statement_type")
		->args({"result"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:1272:34
	makeExtern< _duckdb_logical_type * (*)(duckdb_result *,idx_t) , duckdb_column_logical_type , SimNode_ExtFuncCall >(lib,"duckdb_column_logical_type","duckdb_column_logical_type")
		->args({"result","col"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:1281:35
	makeExtern< _duckdb_arrow_options * (*)(duckdb_result *) , duckdb_result_get_arrow_options , SimNode_ExtFuncCall >(lib,"duckdb_result_get_arrow_options","duckdb_result_get_arrow_options")
		->args({"result"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:1289:20
	makeExtern< idx_t (*)(duckdb_result *) , duckdb_column_count , SimNode_ExtFuncCall >(lib,"duckdb_column_count","duckdb_column_count")
		->args({"result"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:1300:20
	makeExtern< idx_t (*)(duckdb_result *) , duckdb_row_count , SimNode_ExtFuncCall >(lib,"duckdb_row_count","duckdb_row_count")
		->args({"result"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:1311:20
	makeExtern< idx_t (*)(duckdb_result *) , duckdb_rows_changed , SimNode_ExtFuncCall >(lib,"duckdb_rows_changed","duckdb_rows_changed")
		->args({"result"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:1333:20
	makeExtern< void * (*)(duckdb_result *,idx_t) , duckdb_column_data , SimNode_ExtFuncCall >(lib,"duckdb_column_data","duckdb_column_data")
		->args({"result","col"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:1356:20
	makeExtern< bool * (*)(duckdb_result *,idx_t) , duckdb_nullmask_data , SimNode_ExtFuncCall >(lib,"duckdb_nullmask_data","duckdb_nullmask_data")
		->args({"result","col"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:1368:26
	makeExtern< const char * (*)(duckdb_result *) , duckdb_result_error , SimNode_ExtFuncCall >(lib,"duckdb_result_error","duckdb_result_error")
		->args({"result"})
		->addToModule(*this, SideEffects::worstDefault);
}
}


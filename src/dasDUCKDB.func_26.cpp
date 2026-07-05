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
void Module_dasDUCKDB::initFunctions_26() {
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:6107:26
	makeExtern< const char * (*)(_duckdb_bind_info *,idx_t) , duckdb_table_function_bind_get_result_column_name , SimNode_ExtFuncCall >(lib,"duckdb_table_function_bind_get_result_column_name","duckdb_table_function_bind_get_result_column_name")
		->args({"info","col_idx"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:6121:34
	makeExtern< _duckdb_logical_type * (*)(_duckdb_bind_info *,idx_t) , duckdb_table_function_bind_get_result_column_type , SimNode_ExtFuncCall >(lib,"duckdb_table_function_bind_get_result_column_type","duckdb_table_function_bind_get_result_column_type")
		->args({"info","col_idx"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:6143:29
	makeExtern< _duckdb_catalog * (*)(_duckdb_client_context *,const char *) , duckdb_client_context_get_catalog , SimNode_ExtFuncCall >(lib,"duckdb_client_context_get_catalog","duckdb_client_context_get_catalog")
		->args({"context","catalog_name"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:6153:26
	makeExtern< const char * (*)(_duckdb_catalog *) , duckdb_catalog_get_type_name , SimNode_ExtFuncCall >(lib,"duckdb_catalog_get_type_name","duckdb_catalog_get_type_name")
		->args({"catalog"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:6167:35
	makeExtern< _duckdb_catalog_entry * (*)(_duckdb_catalog *,_duckdb_client_context *,duckdb_catalog_entry_type,const char *,const char *) , duckdb_catalog_get_entry , SimNode_ExtFuncCall >(lib,"duckdb_catalog_get_entry","duckdb_catalog_get_entry")
		->args({"catalog","context","entry_type","schema_name","entry_name"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:6178:19
	makeExtern< void (*)(_duckdb_catalog **) , duckdb_destroy_catalog , SimNode_ExtFuncCall >(lib,"duckdb_destroy_catalog","duckdb_destroy_catalog")
		->args({"catalog"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:6186:40
	makeExtern< duckdb_catalog_entry_type (*)(_duckdb_catalog_entry *) , duckdb_catalog_entry_get_type , SimNode_ExtFuncCall >(lib,"duckdb_catalog_entry_get_type","duckdb_catalog_entry_get_type")
		->args({"entry"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:6195:26
	makeExtern< const char * (*)(_duckdb_catalog_entry *) , duckdb_catalog_entry_get_name , SimNode_ExtFuncCall >(lib,"duckdb_catalog_entry_get_name","duckdb_catalog_entry_get_name")
		->args({"entry"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:6204:19
	makeExtern< void (*)(_duckdb_catalog_entry **) , duckdb_destroy_catalog_entry , SimNode_ExtFuncCall >(lib,"duckdb_destroy_catalog_entry","duckdb_destroy_catalog_entry")
		->args({"entry"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:6219:33
	makeExtern< _duckdb_log_storage * (*)() , duckdb_create_log_storage , SimNode_ExtFuncCall >(lib,"duckdb_create_log_storage","duckdb_create_log_storage")
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:6226:19
	makeExtern< void (*)(_duckdb_log_storage **) , duckdb_destroy_log_storage , SimNode_ExtFuncCall >(lib,"duckdb_destroy_log_storage","duckdb_destroy_log_storage")
		->args({"log_storage"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:6253:19
	makeExtern< void (*)(_duckdb_log_storage *,const char *) , duckdb_log_storage_set_name , SimNode_ExtFuncCall >(lib,"duckdb_log_storage_set_name","duckdb_log_storage_set_name")
		->args({"log_storage","name"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:6262:27
	makeExtern< duckdb_state (*)(_duckdb_database *,_duckdb_log_storage *) , duckdb_register_log_storage , SimNode_ExtFuncCall >(lib,"duckdb_register_log_storage","duckdb_register_log_storage")
		->args({"database","log_storage"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:6278:20
	makeExtern< char * (*)(_duckdb_logical_type *) , duckdb_geometry_type_get_crs , SimNode_ExtFuncCall >(lib,"duckdb_geometry_type_get_crs","duckdb_geometry_type_get_crs")
		->args({"type"})
		->addToModule(*this, SideEffects::worstDefault);
}
}


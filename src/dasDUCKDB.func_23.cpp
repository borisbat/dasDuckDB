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
void Module_dasDUCKDB::initFunctions_23() {
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:5473:19
	makeExtern< void (*)(_duckdb_function_info *,const char *) , duckdb_cast_function_set_error , SimNode_ExtFuncCall >(lib,"duckdb_cast_function_set_error","duckdb_cast_function_set_error")
		->args({"info","error"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:5483:19
	makeExtern< void (*)(_duckdb_function_info *,const char *,idx_t,_duckdb_vector *) , duckdb_cast_function_set_row_error , SimNode_ExtFuncCall >(lib,"duckdb_cast_function_set_row_error","duckdb_cast_function_set_row_error")
		->args({"info","error","row","output"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:5493:27
	makeExtern< duckdb_state (*)(_duckdb_connection *,_duckdb_cast_function *) , duckdb_register_cast_function , SimNode_ExtFuncCall >(lib,"duckdb_register_cast_function","duckdb_register_cast_function")
		->args({"con","cast_function"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:5500:19
	makeExtern< void (*)(_duckdb_cast_function **) , duckdb_destroy_cast_function , SimNode_ExtFuncCall >(lib,"duckdb_destroy_cast_function","duckdb_destroy_cast_function")
		->args({"cast_function"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:5515:19
	makeExtern< void (*)(_duckdb_expression **) , duckdb_destroy_expression , SimNode_ExtFuncCall >(lib,"duckdb_destroy_expression","duckdb_destroy_expression")
		->args({"expr"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:5523:34
	makeExtern< _duckdb_logical_type * (*)(_duckdb_expression *) , duckdb_expression_return_type , SimNode_ExtFuncCall >(lib,"duckdb_expression_return_type","duckdb_expression_return_type")
		->args({"expr"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:5531:19
	makeExtern< bool (*)(_duckdb_expression *) , duckdb_expression_is_foldable , SimNode_ExtFuncCall >(lib,"duckdb_expression_is_foldable","duckdb_expression_is_foldable")
		->args({"expr"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:5541:32
	makeExtern< _duckdb_error_data * (*)(_duckdb_client_context *,_duckdb_expression *,_duckdb_value **) , duckdb_expression_fold , SimNode_ExtFuncCall >(lib,"duckdb_expression_fold","duckdb_expression_fold")
		->args({"context","expr","out_value"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:5558:33
	makeExtern< _duckdb_file_system * (*)(_duckdb_client_context *) , duckdb_client_context_get_file_system , SimNode_ExtFuncCall >(lib,"duckdb_client_context_get_file_system","duckdb_client_context_get_file_system")
		->args({"context"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:5564:19
	makeExtern< void (*)(_duckdb_file_system **) , duckdb_destroy_file_system , SimNode_ExtFuncCall >(lib,"duckdb_destroy_file_system","duckdb_destroy_file_system")
		->args({"file_system"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:5572:32
	makeExtern< _duckdb_error_data * (*)(_duckdb_file_system *) , duckdb_file_system_error_data , SimNode_ExtFuncCall >(lib,"duckdb_file_system_error_data","duckdb_file_system_error_data")
		->args({"file_system"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:5585:27
	makeExtern< duckdb_state (*)(_duckdb_file_system *,const char *,_duckdb_file_open_options *,_duckdb_file_handle **) , duckdb_file_system_open , SimNode_ExtFuncCall >(lib,"duckdb_file_system_open","duckdb_file_system_open")
		->args({"file_system","path","options","out_file"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:5593:39
	makeExtern< _duckdb_file_open_options * (*)() , duckdb_create_file_open_options , SimNode_ExtFuncCall >(lib,"duckdb_create_file_open_options","duckdb_create_file_open_options")
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:5604:27
	makeExtern< duckdb_state (*)(_duckdb_file_open_options *,duckdb_file_flag,bool) , duckdb_file_open_options_set_flag , SimNode_ExtFuncCall >(lib,"duckdb_file_open_options_set_flag","duckdb_file_open_options_set_flag")
		->args({"options","flag","value"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:5611:19
	makeExtern< void (*)(_duckdb_file_open_options **) , duckdb_destroy_file_open_options , SimNode_ExtFuncCall >(lib,"duckdb_destroy_file_open_options","duckdb_destroy_file_open_options")
		->args({"options"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:5619:19
	makeExtern< void (*)(_duckdb_file_handle **) , duckdb_destroy_file_handle , SimNode_ExtFuncCall >(lib,"duckdb_destroy_file_handle","duckdb_destroy_file_handle")
		->args({"file_handle"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:5627:32
	makeExtern< _duckdb_error_data * (*)(_duckdb_file_handle *) , duckdb_file_handle_error_data , SimNode_ExtFuncCall >(lib,"duckdb_file_handle_error_data","duckdb_file_handle_error_data")
		->args({"file_handle"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:5637:22
	makeExtern< int64_t (*)(_duckdb_file_handle *,void *,int64_t) , duckdb_file_handle_read , SimNode_ExtFuncCall >(lib,"duckdb_file_handle_read","duckdb_file_handle_read")
		->args({"file_handle","buffer","size"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:5647:22
	makeExtern< int64_t (*)(_duckdb_file_handle *,const void *,int64_t) , duckdb_file_handle_write , SimNode_ExtFuncCall >(lib,"duckdb_file_handle_write","duckdb_file_handle_write")
		->args({"file_handle","buffer","size"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:5655:22
	makeExtern< int64_t (*)(_duckdb_file_handle *) , duckdb_file_handle_tell , SimNode_ExtFuncCall >(lib,"duckdb_file_handle_tell","duckdb_file_handle_tell")
		->args({"file_handle"})
		->addToModule(*this, SideEffects::worstDefault);
}
}


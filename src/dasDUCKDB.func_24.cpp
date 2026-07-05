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
void Module_dasDUCKDB::initFunctions_24() {
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:5718:19
	makeExtern< void (*)(_duckdb_config_option *,const char *) , duckdb_config_option_set_name , SimNode_ExtFuncCall >(lib,"duckdb_config_option_set_name","duckdb_config_option_set_name")
		->args({"option","name"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:5726:19
	makeExtern< void (*)(_duckdb_config_option *,_duckdb_logical_type *) , duckdb_config_option_set_type , SimNode_ExtFuncCall >(lib,"duckdb_config_option_set_type","duckdb_config_option_set_type")
		->args({"option","type"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:5736:19
	makeExtern< void (*)(_duckdb_config_option *,_duckdb_value *) , duckdb_config_option_set_default_value , SimNode_ExtFuncCall >(lib,"duckdb_config_option_set_default_value","duckdb_config_option_set_default_value")
		->args({"option","default_value"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:5745:19
	makeExtern< void (*)(_duckdb_config_option *,duckdb_config_option_scope) , duckdb_config_option_set_default_scope , SimNode_ExtFuncCall >(lib,"duckdb_config_option_set_default_scope","duckdb_config_option_set_default_scope")
		->args({"option","default_scope"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:5754:19
	makeExtern< void (*)(_duckdb_config_option *,const char *) , duckdb_config_option_set_description , SimNode_ExtFuncCall >(lib,"duckdb_config_option_set_description","duckdb_config_option_set_description")
		->args({"option","description"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:5763:27
	makeExtern< duckdb_state (*)(_duckdb_connection *,_duckdb_config_option *) , duckdb_register_config_option , SimNode_ExtFuncCall >(lib,"duckdb_register_config_option","duckdb_register_config_option")
		->args({"connection","option"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:5775:27
	makeExtern< _duckdb_value * (*)(_duckdb_client_context *,const char *,duckdb_config_option_scope *) , duckdb_client_context_get_config_option , SimNode_ExtFuncCall >(lib,"duckdb_client_context_get_config_option","duckdb_client_context_get_config_option")
		->args({"context","name","out_scope"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:5792:35
	makeExtern< _duckdb_copy_function * (*)() , duckdb_create_copy_function , SimNode_ExtFuncCall >(lib,"duckdb_create_copy_function","duckdb_create_copy_function")
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:5800:19
	makeExtern< void (*)(_duckdb_copy_function *,const char *) , duckdb_copy_function_set_name , SimNode_ExtFuncCall >(lib,"duckdb_copy_function_set_name","duckdb_copy_function_set_name")
		->args({"copy_function","name"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:5818:27
	makeExtern< duckdb_state (*)(_duckdb_connection *,_duckdb_copy_function *) , duckdb_register_copy_function , SimNode_ExtFuncCall >(lib,"duckdb_register_copy_function","duckdb_register_copy_function")
		->args({"connection","copy_function"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:5825:19
	makeExtern< void (*)(_duckdb_copy_function **) , duckdb_destroy_copy_function , SimNode_ExtFuncCall >(lib,"duckdb_destroy_copy_function","duckdb_destroy_copy_function")
		->args({"copy_function"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:5840:19
	makeExtern< void (*)(_duckdb_copy_function_bind_info *,const char *) , duckdb_copy_function_bind_set_error , SimNode_ExtFuncCall >(lib,"duckdb_copy_function_bind_set_error","duckdb_copy_function_bind_set_error")
		->args({"info","error"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:5848:20
	makeExtern< void * (*)(_duckdb_copy_function_bind_info *) , duckdb_copy_function_bind_get_extra_info , SimNode_ExtFuncCall >(lib,"duckdb_copy_function_bind_get_extra_info","duckdb_copy_function_bind_get_extra_info")
		->args({"info"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:5858:36
	makeExtern< _duckdb_client_context * (*)(_duckdb_copy_function_bind_info *) , duckdb_copy_function_bind_get_client_context , SimNode_ExtFuncCall >(lib,"duckdb_copy_function_bind_get_client_context","duckdb_copy_function_bind_get_client_context")
		->args({"info"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:5866:20
	makeExtern< idx_t (*)(_duckdb_copy_function_bind_info *) , duckdb_copy_function_bind_get_column_count , SimNode_ExtFuncCall >(lib,"duckdb_copy_function_bind_get_column_count","duckdb_copy_function_bind_get_column_count")
		->args({"info"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:5875:34
	makeExtern< _duckdb_logical_type * (*)(_duckdb_copy_function_bind_info *,idx_t) , duckdb_copy_function_bind_get_column_type , SimNode_ExtFuncCall >(lib,"duckdb_copy_function_bind_get_column_type","duckdb_copy_function_bind_get_column_type")
		->args({"info","col_idx"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:5884:27
	makeExtern< _duckdb_value * (*)(_duckdb_copy_function_bind_info *) , duckdb_copy_function_bind_get_options , SimNode_ExtFuncCall >(lib,"duckdb_copy_function_bind_get_options","duckdb_copy_function_bind_get_options")
		->args({"info"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:5910:19
	makeExtern< void (*)(_duckdb_copy_function_global_init_info *,const char *) , duckdb_copy_function_global_init_set_error , SimNode_ExtFuncCall >(lib,"duckdb_copy_function_global_init_set_error","duckdb_copy_function_global_init_set_error")
		->args({"info","error"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:5919:20
	makeExtern< void * (*)(_duckdb_copy_function_global_init_info *) , duckdb_copy_function_global_init_get_extra_info , SimNode_ExtFuncCall >(lib,"duckdb_copy_function_global_init_get_extra_info","duckdb_copy_function_global_init_get_extra_info")
		->args({"info"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:5930:1
	makeExtern< _duckdb_client_context * (*)(_duckdb_copy_function_global_init_info *) , duckdb_copy_function_global_init_get_client_context , SimNode_ExtFuncCall >(lib,"duckdb_copy_function_global_init_get_client_context","duckdb_copy_function_global_init_get_client_context")
		->args({"info"})
		->addToModule(*this, SideEffects::worstDefault);
}
}


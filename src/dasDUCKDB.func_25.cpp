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
void Module_dasDUCKDB::initFunctions_25() {
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
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:5938:20
	makeExtern< void * (*)(_duckdb_copy_function_global_init_info *) , duckdb_copy_function_global_init_get_bind_data , SimNode_ExtFuncCall >(lib,"duckdb_copy_function_global_init_get_bind_data","duckdb_copy_function_global_init_get_bind_data")
		->args({"info"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:5948:26
	makeExtern< const char * (*)(_duckdb_copy_function_global_init_info *) , duckdb_copy_function_global_init_get_file_path , SimNode_ExtFuncCall >(lib,"duckdb_copy_function_global_init_get_file_path","duckdb_copy_function_global_init_get_file_path")
		->args({"info"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:5975:19
	makeExtern< void (*)(_duckdb_copy_function_sink_info *,const char *) , duckdb_copy_function_sink_set_error , SimNode_ExtFuncCall >(lib,"duckdb_copy_function_sink_set_error","duckdb_copy_function_sink_set_error")
		->args({"info","error"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:5983:20
	makeExtern< void * (*)(_duckdb_copy_function_sink_info *) , duckdb_copy_function_sink_get_extra_info , SimNode_ExtFuncCall >(lib,"duckdb_copy_function_sink_get_extra_info","duckdb_copy_function_sink_get_extra_info")
		->args({"info"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:5993:36
	makeExtern< _duckdb_client_context * (*)(_duckdb_copy_function_sink_info *) , duckdb_copy_function_sink_get_client_context , SimNode_ExtFuncCall >(lib,"duckdb_copy_function_sink_get_client_context","duckdb_copy_function_sink_get_client_context")
		->args({"info"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:6001:20
	makeExtern< void * (*)(_duckdb_copy_function_sink_info *) , duckdb_copy_function_sink_get_bind_data , SimNode_ExtFuncCall >(lib,"duckdb_copy_function_sink_get_bind_data","duckdb_copy_function_sink_get_bind_data")
		->args({"info"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:6009:20
	makeExtern< void * (*)(_duckdb_copy_function_sink_info *) , duckdb_copy_function_sink_get_global_state , SimNode_ExtFuncCall >(lib,"duckdb_copy_function_sink_get_global_state","duckdb_copy_function_sink_get_global_state")
		->args({"info"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:6025:19
	makeExtern< void (*)(_duckdb_copy_function_finalize_info *,const char *) , duckdb_copy_function_finalize_set_error , SimNode_ExtFuncCall >(lib,"duckdb_copy_function_finalize_set_error","duckdb_copy_function_finalize_set_error")
		->args({"info","error"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:6033:20
	makeExtern< void * (*)(_duckdb_copy_function_finalize_info *) , duckdb_copy_function_finalize_get_extra_info , SimNode_ExtFuncCall >(lib,"duckdb_copy_function_finalize_get_extra_info","duckdb_copy_function_finalize_get_extra_info")
		->args({"info"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:6044:1
	makeExtern< _duckdb_client_context * (*)(_duckdb_copy_function_finalize_info *) , duckdb_copy_function_finalize_get_client_context , SimNode_ExtFuncCall >(lib,"duckdb_copy_function_finalize_get_client_context","duckdb_copy_function_finalize_get_client_context")
		->args({"info"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:6052:20
	makeExtern< void * (*)(_duckdb_copy_function_finalize_info *) , duckdb_copy_function_finalize_get_bind_data , SimNode_ExtFuncCall >(lib,"duckdb_copy_function_finalize_get_bind_data","duckdb_copy_function_finalize_get_bind_data")
		->args({"info"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:6060:20
	makeExtern< void * (*)(_duckdb_copy_function_finalize_info *) , duckdb_copy_function_finalize_get_global_state , SimNode_ExtFuncCall >(lib,"duckdb_copy_function_finalize_get_global_state","duckdb_copy_function_finalize_get_global_state")
		->args({"info"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:6080:19
	makeExtern< void (*)(_duckdb_copy_function *,_duckdb_table_function *) , duckdb_copy_function_set_copy_from_function , SimNode_ExtFuncCall >(lib,"duckdb_copy_function_set_copy_from_function","duckdb_copy_function_set_copy_from_function")
		->args({"copy_function","table_function"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:6092:20
	makeExtern< idx_t (*)(_duckdb_bind_info *) , duckdb_table_function_bind_get_result_column_count , SimNode_ExtFuncCall >(lib,"duckdb_table_function_bind_get_result_column_count","duckdb_table_function_bind_get_result_column_count")
		->args({"info"})
		->addToModule(*this, SideEffects::worstDefault);
}
}


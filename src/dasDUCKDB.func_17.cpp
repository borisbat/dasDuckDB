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
void Module_dasDUCKDB::initFunctions_17() {
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:4149:19
	makeExtern< void (*)(_duckdb_aggregate_function_set **) , duckdb_destroy_aggregate_function_set , SimNode_ExtFuncCall >(lib,"duckdb_destroy_aggregate_function_set","duckdb_destroy_aggregate_function_set")
		->args({"aggregate_function_set"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:4159:27
	makeExtern< duckdb_state (*)(_duckdb_aggregate_function_set *,_duckdb_aggregate_function *) , duckdb_add_aggregate_function_to_set , SimNode_ExtFuncCall >(lib,"duckdb_add_aggregate_function_to_set","duckdb_add_aggregate_function_to_set")
		->args({"set","function"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:4173:27
	makeExtern< duckdb_state (*)(_duckdb_connection *,_duckdb_aggregate_function_set *) , duckdb_register_aggregate_function_set , SimNode_ExtFuncCall >(lib,"duckdb_register_aggregate_function_set","duckdb_register_aggregate_function_set")
		->args({"con","set"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:4191:36
	makeExtern< _duckdb_table_function * (*)() , duckdb_create_table_function , SimNode_ExtFuncCall >(lib,"duckdb_create_table_function","duckdb_create_table_function")
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:4198:19
	makeExtern< void (*)(_duckdb_table_function **) , duckdb_destroy_table_function , SimNode_ExtFuncCall >(lib,"duckdb_destroy_table_function","duckdb_destroy_table_function")
		->args({"table_function"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:4206:19
	makeExtern< void (*)(_duckdb_table_function *,const char *) , duckdb_table_function_set_name , SimNode_ExtFuncCall >(lib,"duckdb_table_function_set_name","duckdb_table_function_set_name")
		->args({"table_function","name"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:4214:19
	makeExtern< void (*)(_duckdb_table_function *,_duckdb_logical_type *) , duckdb_table_function_add_parameter , SimNode_ExtFuncCall >(lib,"duckdb_table_function_add_parameter","duckdb_table_function_add_parameter")
		->args({"table_function","type"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:4223:19
	makeExtern< void (*)(_duckdb_table_function *,const char *,_duckdb_logical_type *) , duckdb_table_function_add_named_parameter , SimNode_ExtFuncCall >(lib,"duckdb_table_function_add_named_parameter","duckdb_table_function_add_named_parameter")
		->args({"table_function","name","type"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:4282:19
	makeExtern< void (*)(_duckdb_table_function *,bool) , duckdb_table_function_supports_projection_pushdown , SimNode_ExtFuncCall >(lib,"duckdb_table_function_supports_projection_pushdown","duckdb_table_function_supports_projection_pushdown")
		->args({"table_function","pushdown"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:4296:27
	makeExtern< duckdb_state (*)(_duckdb_connection *,_duckdb_table_function *) , duckdb_register_table_function , SimNode_ExtFuncCall >(lib,"duckdb_register_table_function","duckdb_register_table_function")
		->args({"con","function"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:4312:20
	makeExtern< void * (*)(_duckdb_bind_info *) , duckdb_bind_get_extra_info , SimNode_ExtFuncCall >(lib,"duckdb_bind_get_extra_info","duckdb_bind_get_extra_info")
		->args({"info"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:4320:19
	makeExtern< void (*)(_duckdb_bind_info *,_duckdb_client_context **) , duckdb_table_function_get_client_context , SimNode_ExtFuncCall >(lib,"duckdb_table_function_get_client_context","duckdb_table_function_get_client_context")
		->args({"info","out_context"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:4329:19
	makeExtern< void (*)(_duckdb_bind_info *,const char *,_duckdb_logical_type *) , duckdb_bind_add_result_column , SimNode_ExtFuncCall >(lib,"duckdb_bind_add_result_column","duckdb_bind_add_result_column")
		->args({"info","name","type"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:4337:20
	makeExtern< idx_t (*)(_duckdb_bind_info *) , duckdb_bind_get_parameter_count , SimNode_ExtFuncCall >(lib,"duckdb_bind_get_parameter_count","duckdb_bind_get_parameter_count")
		->args({"info"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:4348:27
	makeExtern< _duckdb_value * (*)(_duckdb_bind_info *,idx_t) , duckdb_bind_get_parameter , SimNode_ExtFuncCall >(lib,"duckdb_bind_get_parameter","duckdb_bind_get_parameter")
		->args({"info","index"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:4359:27
	makeExtern< _duckdb_value * (*)(_duckdb_bind_info *,const char *) , duckdb_bind_get_named_parameter , SimNode_ExtFuncCall >(lib,"duckdb_bind_get_named_parameter","duckdb_bind_get_named_parameter")
		->args({"info","name"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:4377:19
	makeExtern< void (*)(_duckdb_bind_info *,idx_t,bool) , duckdb_bind_set_cardinality , SimNode_ExtFuncCall >(lib,"duckdb_bind_set_cardinality","duckdb_bind_set_cardinality")
		->args({"info","cardinality","is_exact"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:4385:19
	makeExtern< void (*)(_duckdb_bind_info *,const char *) , duckdb_bind_set_error , SimNode_ExtFuncCall >(lib,"duckdb_bind_set_error","duckdb_bind_set_error")
		->args({"info","error"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:4401:20
	makeExtern< void * (*)(_duckdb_init_info *) , duckdb_init_get_extra_info , SimNode_ExtFuncCall >(lib,"duckdb_init_get_extra_info","duckdb_init_get_extra_info")
		->args({"info"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:4412:20
	makeExtern< void * (*)(_duckdb_init_info *) , duckdb_init_get_bind_data , SimNode_ExtFuncCall >(lib,"duckdb_init_get_bind_data","duckdb_init_get_bind_data")
		->args({"info"})
		->addToModule(*this, SideEffects::worstDefault);
}
}


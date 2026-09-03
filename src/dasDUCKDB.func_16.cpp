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
void Module_dasDUCKDB::initFunctions_16() {
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:3980:20
	makeExtern< void * (*)(_duckdb_init_info *) , duckdb_scalar_function_init_get_extra_info , SimNode_ExtFuncCall >(lib,"duckdb_scalar_function_init_get_extra_info","duckdb_scalar_function_init_get_extra_info")
		->args({"info"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:3998:38
	makeExtern< _duckdb_selection_vector * (*)(idx_t) , duckdb_create_selection_vector , SimNode_ExtFuncCall >(lib,"duckdb_create_selection_vector","duckdb_create_selection_vector")
		->args({"size"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:4005:19
	makeExtern< void (*)(_duckdb_selection_vector *) , duckdb_destroy_selection_vector , SimNode_ExtFuncCall >(lib,"duckdb_destroy_selection_vector","duckdb_destroy_selection_vector")
		->args({"sel"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:4013:21
	makeExtern< unsigned int * (*)(_duckdb_selection_vector *) , duckdb_selection_vector_get_data_ptr , SimNode_ExtFuncCall >(lib,"duckdb_selection_vector_get_data_ptr","duckdb_selection_vector_get_data_ptr")
		->args({"sel"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:4030:40
	makeExtern< _duckdb_aggregate_function * (*)() , duckdb_create_aggregate_function , SimNode_ExtFuncCall >(lib,"duckdb_create_aggregate_function","duckdb_create_aggregate_function")
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:4036:19
	makeExtern< void (*)(_duckdb_aggregate_function **) , duckdb_destroy_aggregate_function , SimNode_ExtFuncCall >(lib,"duckdb_destroy_aggregate_function","duckdb_destroy_aggregate_function")
		->args({"aggregate_function"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:4044:19
	makeExtern< void (*)(_duckdb_aggregate_function *,const char *) , duckdb_aggregate_function_set_name , SimNode_ExtFuncCall >(lib,"duckdb_aggregate_function_set_name","duckdb_aggregate_function_set_name")
		->args({"aggregate_function","name"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:4052:19
	makeExtern< void (*)(_duckdb_aggregate_function *,_duckdb_logical_type *) , duckdb_aggregate_function_add_parameter , SimNode_ExtFuncCall >(lib,"duckdb_aggregate_function_add_parameter","duckdb_aggregate_function_add_parameter")
		->args({"aggregate_function","type"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:4061:19
	makeExtern< void (*)(_duckdb_aggregate_function *,_duckdb_logical_type *) , duckdb_aggregate_function_set_return_type , SimNode_ExtFuncCall >(lib,"duckdb_aggregate_function_set_return_type","duckdb_aggregate_function_set_return_type")
		->args({"aggregate_function","type"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:4100:27
	makeExtern< duckdb_state (*)(_duckdb_connection *,_duckdb_aggregate_function *) , duckdb_register_aggregate_function , SimNode_ExtFuncCall >(lib,"duckdb_register_aggregate_function","duckdb_register_aggregate_function")
		->args({"con","aggregate_function"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:4108:19
	makeExtern< void (*)(_duckdb_aggregate_function *) , duckdb_aggregate_function_set_special_handling , SimNode_ExtFuncCall >(lib,"duckdb_aggregate_function_set_special_handling","duckdb_aggregate_function_set_special_handling")
		->args({"aggregate_function"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:4126:20
	makeExtern< void * (*)(_duckdb_function_info *) , duckdb_aggregate_function_get_extra_info , SimNode_ExtFuncCall >(lib,"duckdb_aggregate_function_get_extra_info","duckdb_aggregate_function_get_extra_info")
		->args({"info"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:4134:19
	makeExtern< void (*)(_duckdb_function_info *,const char *) , duckdb_aggregate_function_set_error , SimNode_ExtFuncCall >(lib,"duckdb_aggregate_function_set_error","duckdb_aggregate_function_set_error")
		->args({"info","error"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:4143:44
	makeExtern< _duckdb_aggregate_function_set * (*)(const char *) , duckdb_create_aggregate_function_set , SimNode_ExtFuncCall >(lib,"duckdb_create_aggregate_function_set","duckdb_create_aggregate_function_set")
		->args({"name"})
		->addToModule(*this, SideEffects::worstDefault);
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
}
}


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
void Module_dasDUCKDB::initFunctions_16() {
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:3910:20
	makeExtern< idx_t (*)(_duckdb_bind_info *) , duckdb_scalar_function_bind_get_argument_count , SimNode_ExtFuncCall >(lib,"duckdb_scalar_function_bind_get_argument_count","duckdb_scalar_function_bind_get_argument_count")
		->args({"info"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:3919:32
	makeExtern< _duckdb_expression * (*)(_duckdb_bind_info *,idx_t) , duckdb_scalar_function_bind_get_argument , SimNode_ExtFuncCall >(lib,"duckdb_scalar_function_bind_get_argument","duckdb_scalar_function_bind_get_argument")
		->args({"info","index"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:3927:20
	makeExtern< void * (*)(_duckdb_function_info *) , duckdb_scalar_function_get_state , SimNode_ExtFuncCall >(lib,"duckdb_scalar_function_get_state","duckdb_scalar_function_get_state")
		->args({"info"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:3944:19
	makeExtern< void (*)(_duckdb_init_info *,const char *) , duckdb_scalar_function_init_set_error , SimNode_ExtFuncCall >(lib,"duckdb_scalar_function_init_set_error","duckdb_scalar_function_init_set_error")
		->args({"info","error"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:3962:19
	makeExtern< void (*)(_duckdb_init_info *,_duckdb_client_context **) , duckdb_scalar_function_init_get_client_context , SimNode_ExtFuncCall >(lib,"duckdb_scalar_function_init_get_client_context","duckdb_scalar_function_init_get_client_context")
		->args({"info","out_context"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:3972:20
	makeExtern< void * (*)(_duckdb_init_info *) , duckdb_scalar_function_init_get_bind_data , SimNode_ExtFuncCall >(lib,"duckdb_scalar_function_init_get_bind_data","duckdb_scalar_function_init_get_bind_data")
		->args({"info"})
		->addToModule(*this, SideEffects::worstDefault);
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
}
}


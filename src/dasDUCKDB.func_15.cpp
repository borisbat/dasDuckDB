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
void Module_dasDUCKDB::initFunctions_15() {
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:3734:19
	makeExtern< void (*)(_duckdb_scalar_function *) , duckdb_scalar_function_set_volatile , SimNode_ExtFuncCall >(lib,"duckdb_scalar_function_set_volatile","duckdb_scalar_function_set_volatile")
		->args({"scalar_function"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:3742:19
	makeExtern< void (*)(_duckdb_scalar_function *,_duckdb_logical_type *) , duckdb_scalar_function_add_parameter , SimNode_ExtFuncCall >(lib,"duckdb_scalar_function_add_parameter","duckdb_scalar_function_add_parameter")
		->args({"scalar_function","type"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:3751:19
	makeExtern< void (*)(_duckdb_scalar_function *,_duckdb_logical_type *) , duckdb_scalar_function_set_return_type , SimNode_ExtFuncCall >(lib,"duckdb_scalar_function_set_return_type","duckdb_scalar_function_set_return_type")
		->args({"scalar_function","type"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:3799:19
	makeExtern< void (*)(_duckdb_bind_info *,const char *) , duckdb_scalar_function_bind_set_error , SimNode_ExtFuncCall >(lib,"duckdb_scalar_function_bind_set_error","duckdb_scalar_function_bind_set_error")
		->args({"info","error"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:3821:27
	makeExtern< duckdb_state (*)(_duckdb_connection *,_duckdb_scalar_function *) , duckdb_register_scalar_function , SimNode_ExtFuncCall >(lib,"duckdb_register_scalar_function","duckdb_register_scalar_function")
		->args({"con","scalar_function"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:3830:20
	makeExtern< void * (*)(_duckdb_function_info *) , duckdb_scalar_function_get_extra_info , SimNode_ExtFuncCall >(lib,"duckdb_scalar_function_get_extra_info","duckdb_scalar_function_get_extra_info")
		->args({"info"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:3838:20
	makeExtern< void * (*)(_duckdb_bind_info *) , duckdb_scalar_function_bind_get_extra_info , SimNode_ExtFuncCall >(lib,"duckdb_scalar_function_bind_get_extra_info","duckdb_scalar_function_bind_get_extra_info")
		->args({"info"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:3847:20
	makeExtern< void * (*)(_duckdb_function_info *) , duckdb_scalar_function_get_bind_data , SimNode_ExtFuncCall >(lib,"duckdb_scalar_function_get_bind_data","duckdb_scalar_function_get_bind_data")
		->args({"info"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:3855:19
	makeExtern< void (*)(_duckdb_bind_info *,_duckdb_client_context **) , duckdb_scalar_function_get_client_context , SimNode_ExtFuncCall >(lib,"duckdb_scalar_function_get_client_context","duckdb_scalar_function_get_client_context")
		->args({"info","out_context"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:3863:19
	makeExtern< void (*)(_duckdb_function_info *,const char *) , duckdb_scalar_function_set_error , SimNode_ExtFuncCall >(lib,"duckdb_scalar_function_set_error","duckdb_scalar_function_set_error")
		->args({"info","error"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:3872:41
	makeExtern< _duckdb_scalar_function_set * (*)(const char *) , duckdb_create_scalar_function_set , SimNode_ExtFuncCall >(lib,"duckdb_create_scalar_function_set","duckdb_create_scalar_function_set")
		->args({"name"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:3878:19
	makeExtern< void (*)(_duckdb_scalar_function_set **) , duckdb_destroy_scalar_function_set , SimNode_ExtFuncCall >(lib,"duckdb_destroy_scalar_function_set","duckdb_destroy_scalar_function_set")
		->args({"scalar_function_set"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:3888:27
	makeExtern< duckdb_state (*)(_duckdb_scalar_function_set *,_duckdb_scalar_function *) , duckdb_add_scalar_function_to_set , SimNode_ExtFuncCall >(lib,"duckdb_add_scalar_function_to_set","duckdb_add_scalar_function_to_set")
		->args({"set","function"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:3902:27
	makeExtern< duckdb_state (*)(_duckdb_connection *,_duckdb_scalar_function_set *) , duckdb_register_scalar_function_set , SimNode_ExtFuncCall >(lib,"duckdb_register_scalar_function_set","duckdb_register_scalar_function_set")
		->args({"con","set"})
		->addToModule(*this, SideEffects::worstDefault);
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
}
}


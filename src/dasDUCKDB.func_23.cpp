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
void Module_dasDUCKDB::initFunctions_23() {
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
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:5663:22
	makeExtern< int64_t (*)(_duckdb_file_handle *) , duckdb_file_handle_size , SimNode_ExtFuncCall >(lib,"duckdb_file_handle_size","duckdb_file_handle_size")
		->args({"file_handle"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:5672:27
	makeExtern< duckdb_state (*)(_duckdb_file_handle *,int64_t) , duckdb_file_handle_seek , SimNode_ExtFuncCall >(lib,"duckdb_file_handle_seek","duckdb_file_handle_seek")
		->args({"file_handle","position"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:5681:27
	makeExtern< duckdb_state (*)(_duckdb_file_handle *) , duckdb_file_handle_sync , SimNode_ExtFuncCall >(lib,"duckdb_file_handle_sync","duckdb_file_handle_sync")
		->args({"file_handle"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:5690:27
	makeExtern< duckdb_state (*)(_duckdb_file_handle *) , duckdb_file_handle_close , SimNode_ExtFuncCall >(lib,"duckdb_file_handle_close","duckdb_file_handle_close")
		->args({"file_handle"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:5704:35
	makeExtern< _duckdb_config_option * (*)() , duckdb_create_config_option , SimNode_ExtFuncCall >(lib,"duckdb_create_config_option","duckdb_create_config_option")
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:5710:19
	makeExtern< void (*)(_duckdb_config_option **) , duckdb_destroy_config_option , SimNode_ExtFuncCall >(lib,"duckdb_destroy_config_option","duckdb_destroy_config_option")
		->args({"option"})
		->addToModule(*this, SideEffects::worstDefault);
}
}


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
void Module_dasDUCKDB::initFunctions_1() {
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:935:36
	makeExtern< _duckdb_instance_cache * (*)() , duckdb_create_instance_cache , SimNode_ExtFuncCall >(lib,"duckdb_create_instance_cache","duckdb_create_instance_cache")
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:949:27
	makeExtern< duckdb_state (*)(_duckdb_instance_cache *,const char *,_duckdb_database **,_duckdb_config *,char **) , duckdb_get_or_create_from_cache , SimNode_ExtFuncCall >(lib,"duckdb_get_or_create_from_cache","duckdb_get_or_create_from_cache")
		->args({"instance_cache","path","out_database","config","out_error"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:958:19
	makeExtern< void (*)(_duckdb_instance_cache **) , duckdb_destroy_instance_cache , SimNode_ExtFuncCall >(lib,"duckdb_destroy_instance_cache","duckdb_destroy_instance_cache")
		->args({"instance_cache"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:969:27
	makeExtern< duckdb_state (*)(const char *,_duckdb_database **) , duckdb_open , SimNode_ExtFuncCall >(lib,"duckdb_open","duckdb_open")
		->args({"path","out_database"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:982:27
	makeExtern< duckdb_state (*)(const char *,_duckdb_database **,_duckdb_config *,char **) , duckdb_open_ext , SimNode_ExtFuncCall >(lib,"duckdb_open_ext","duckdb_open_ext")
		->args({"path","out_database","config","out_error"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:993:19
	makeExtern< void (*)(_duckdb_database **) , duckdb_close , SimNode_ExtFuncCall >(lib,"duckdb_close","duckdb_close")
		->args({"database"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:1004:27
	makeExtern< duckdb_state (*)(_duckdb_database *,_duckdb_connection **) , duckdb_connect , SimNode_ExtFuncCall >(lib,"duckdb_connect","duckdb_connect")
		->args({"database","out_connection"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:1011:19
	makeExtern< void (*)(_duckdb_connection *) , duckdb_interrupt , SimNode_ExtFuncCall >(lib,"duckdb_interrupt","duckdb_interrupt")
		->args({"connection"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:1019:41
	makeExtern< duckdb_query_progress_type (*)(_duckdb_connection *) , duckdb_query_progress , SimNode_ExtFuncCallAndCopyOrMove >(lib,"duckdb_query_progress","duckdb_query_progress")
		->args({"connection"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:1026:19
	makeExtern< void (*)(_duckdb_connection **) , duckdb_disconnect , SimNode_ExtFuncCall >(lib,"duckdb_disconnect","duckdb_disconnect")
		->args({"connection"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:1034:19
	makeExtern< void (*)(_duckdb_connection *,_duckdb_client_context **) , duckdb_connection_get_client_context , SimNode_ExtFuncCall >(lib,"duckdb_connection_get_client_context","duckdb_connection_get_client_context")
		->args({"connection","out_context"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:1042:19
	makeExtern< void (*)(_duckdb_connection *,_duckdb_arrow_options **) , duckdb_connection_get_arrow_options , SimNode_ExtFuncCall >(lib,"duckdb_connection_get_arrow_options","duckdb_connection_get_arrow_options")
		->args({"connection","out_arrow_options"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:1051:20
	makeExtern< idx_t (*)(_duckdb_client_context *) , duckdb_client_context_get_connection_id , SimNode_ExtFuncCall >(lib,"duckdb_client_context_get_connection_id","duckdb_client_context_get_connection_id")
		->args({"context"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:1058:19
	makeExtern< void (*)(_duckdb_client_context **) , duckdb_destroy_client_context , SimNode_ExtFuncCall >(lib,"duckdb_destroy_client_context","duckdb_destroy_client_context")
		->args({"context"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:1065:19
	makeExtern< void (*)(_duckdb_arrow_options **) , duckdb_destroy_arrow_options , SimNode_ExtFuncCall >(lib,"duckdb_destroy_arrow_options","duckdb_destroy_arrow_options")
		->args({"arrow_options"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:1072:26
	makeExtern< const char * (*)() , duckdb_library_version , SimNode_ExtFuncCall >(lib,"duckdb_library_version","duckdb_library_version")
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:1084:27
	makeExtern< _duckdb_value * (*)(_duckdb_connection *,const char *,bool) , duckdb_get_table_names , SimNode_ExtFuncCall >(lib,"duckdb_get_table_names","duckdb_get_table_names")
		->args({"connection","query","qualified"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:1106:27
	makeExtern< duckdb_state (*)(_duckdb_config **) , duckdb_create_config , SimNode_ExtFuncCall >(lib,"duckdb_create_config","duckdb_create_config")
		->args({"out_config"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:1115:21
	makeExtern< size_t (*)() , duckdb_config_count , SimNode_ExtFuncCall >(lib,"duckdb_config_count","duckdb_config_count")
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:1128:27
	makeExtern< duckdb_state (*)(size_t,const char **,const char **) , duckdb_get_config_flag , SimNode_ExtFuncCall >(lib,"duckdb_get_config_flag","duckdb_get_config_flag")
		->args({"index","out_name","out_description"})
		->addToModule(*this, SideEffects::worstDefault);
}
}


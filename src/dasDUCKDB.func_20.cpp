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
void Module_dasDUCKDB::initFunctions_20() {
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:4874:27
	makeExtern< duckdb_state (*)(_duckdb_appender *,double) , duckdb_append_double , SimNode_ExtFuncCall >(lib,"duckdb_append_double","duckdb_append_double")
		->args({"appender","value"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:4879:27
	makeExtern< duckdb_state (*)(_duckdb_appender *,duckdb_date) , duckdb_append_date , SimNode_ExtFuncCall >(lib,"duckdb_append_date","duckdb_append_date")
		->args({"appender","value"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:4884:27
	makeExtern< duckdb_state (*)(_duckdb_appender *,duckdb_time) , duckdb_append_time , SimNode_ExtFuncCall >(lib,"duckdb_append_time","duckdb_append_time")
		->args({"appender","value"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:4889:27
	makeExtern< duckdb_state (*)(_duckdb_appender *,duckdb_timestamp) , duckdb_append_timestamp , SimNode_ExtFuncCall >(lib,"duckdb_append_timestamp","duckdb_append_timestamp")
		->args({"appender","value"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:4894:27
	makeExtern< duckdb_state (*)(_duckdb_appender *,duckdb_interval) , duckdb_append_interval , SimNode_ExtFuncCall >(lib,"duckdb_append_interval","duckdb_append_interval")
		->args({"appender","value"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:4899:27
	makeExtern< duckdb_state (*)(_duckdb_appender *,const char *) , duckdb_append_varchar , SimNode_ExtFuncCall >(lib,"duckdb_append_varchar","duckdb_append_varchar")
		->args({"appender","val"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:4904:27
	makeExtern< duckdb_state (*)(_duckdb_appender *,const char *,idx_t) , duckdb_append_varchar_length , SimNode_ExtFuncCall >(lib,"duckdb_append_varchar_length","duckdb_append_varchar_length")
		->args({"appender","val","length"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:4909:27
	makeExtern< duckdb_state (*)(_duckdb_appender *,const void *,idx_t) , duckdb_append_blob , SimNode_ExtFuncCall >(lib,"duckdb_append_blob","duckdb_append_blob")
		->args({"appender","data","length"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:4914:27
	makeExtern< duckdb_state (*)(_duckdb_appender *) , duckdb_append_null , SimNode_ExtFuncCall >(lib,"duckdb_append_null","duckdb_append_null")
		->args({"appender"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:4919:27
	makeExtern< duckdb_state (*)(_duckdb_appender *,_duckdb_value *) , duckdb_append_value , SimNode_ExtFuncCall >(lib,"duckdb_append_value","duckdb_append_value")
		->args({"appender","value"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:4929:27
	makeExtern< duckdb_state (*)(_duckdb_appender *,_duckdb_data_chunk *) , duckdb_append_data_chunk , SimNode_ExtFuncCall >(lib,"duckdb_append_data_chunk","duckdb_append_data_chunk")
		->args({"appender","chunk"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:4948:27
	makeExtern< duckdb_state (*)(_duckdb_connection *,const char *,const char *,_duckdb_table_description **) , duckdb_table_description_create , SimNode_ExtFuncCall >(lib,"duckdb_table_description_create","duckdb_table_description_create")
		->args({"connection","schema","table","out"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:4962:27
	makeExtern< duckdb_state (*)(_duckdb_connection *,const char *,const char *,const char *,_duckdb_table_description **) , duckdb_table_description_create_ext , SimNode_ExtFuncCall >(lib,"duckdb_table_description_create_ext","duckdb_table_description_create_ext")
		->args({"connection","catalog","schema","table","out"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:4971:19
	makeExtern< void (*)(_duckdb_table_description **) , duckdb_table_description_destroy , SimNode_ExtFuncCall >(lib,"duckdb_table_description_destroy","duckdb_table_description_destroy")
		->args({"table_description"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:4981:26
	makeExtern< const char * (*)(_duckdb_table_description *) , duckdb_table_description_error , SimNode_ExtFuncCall >(lib,"duckdb_table_description_error","duckdb_table_description_error")
		->args({"table_description"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:4991:27
	makeExtern< duckdb_state (*)(_duckdb_table_description *,idx_t,bool *) , duckdb_column_has_default , SimNode_ExtFuncCall >(lib,"duckdb_column_has_default","duckdb_column_has_default")
		->args({"table_description","index","out"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:4999:20
	makeExtern< idx_t (*)(_duckdb_table_description *) , duckdb_table_description_get_column_count , SimNode_ExtFuncCall >(lib,"duckdb_table_description_get_column_count","duckdb_table_description_get_column_count")
		->args({"table_description"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:5009:20
	makeExtern< char * (*)(_duckdb_table_description *,idx_t) , duckdb_table_description_get_column_name , SimNode_ExtFuncCall >(lib,"duckdb_table_description_get_column_name","duckdb_table_description_get_column_name")
		->args({"table_description","index"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:5019:34
	makeExtern< _duckdb_logical_type * (*)(_duckdb_table_description *,idx_t) , duckdb_table_description_get_column_type , SimNode_ExtFuncCall >(lib,"duckdb_table_description_get_column_type","duckdb_table_description_get_column_type")
		->args({"table_description","index"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:5039:32
	makeExtern< _duckdb_error_data * (*)(_duckdb_arrow_options *,_duckdb_logical_type **,const char **,idx_t,ArrowSchema *) , duckdb_to_arrow_schema , SimNode_ExtFuncCall >(lib,"duckdb_to_arrow_schema","duckdb_to_arrow_schema")
		->args({"arrow_options","types","names","column_count","out_schema"})
		->addToModule(*this, SideEffects::worstDefault);
}
}


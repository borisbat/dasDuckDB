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
void Module_dasDUCKDB::initFunctions_20() {
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:4844:27
	makeExtern< duckdb_state (*)(_duckdb_appender *,unsigned char) , duckdb_append_uint8 , SimNode_ExtFuncCall >(lib,"duckdb_append_uint8","duckdb_append_uint8")
		->args({"appender","value"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:4849:27
	makeExtern< duckdb_state (*)(_duckdb_appender *,unsigned short) , duckdb_append_uint16 , SimNode_ExtFuncCall >(lib,"duckdb_append_uint16","duckdb_append_uint16")
		->args({"appender","value"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:4854:27
	makeExtern< duckdb_state (*)(_duckdb_appender *,unsigned int) , duckdb_append_uint32 , SimNode_ExtFuncCall >(lib,"duckdb_append_uint32","duckdb_append_uint32")
		->args({"appender","value"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:4859:27
	makeExtern< duckdb_state (*)(_duckdb_appender *,uint64_t) , duckdb_append_uint64 , SimNode_ExtFuncCall >(lib,"duckdb_append_uint64","duckdb_append_uint64")
		->args({"appender","value"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:4864:27
	makeExtern< duckdb_state (*)(_duckdb_appender *,duckdb_uhugeint) , duckdb_append_uhugeint , SimNode_ExtFuncCall >(lib,"duckdb_append_uhugeint","duckdb_append_uhugeint")
		->args({"appender","value"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:4869:27
	makeExtern< duckdb_state (*)(_duckdb_appender *,float) , duckdb_append_float , SimNode_ExtFuncCall >(lib,"duckdb_append_float","duckdb_append_float")
		->args({"appender","value"})
		->addToModule(*this, SideEffects::worstDefault);
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
}
}


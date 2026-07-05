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
void Module_dasDUCKDB::initFunctions_7() {
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:2125:27
	makeExtern< duckdb_state (*)(_duckdb_prepared_statement *,idx_t,duckdb_date) , duckdb_bind_date , SimNode_ExtFuncCall >(lib,"duckdb_bind_date","duckdb_bind_date")
		->args({"prepared_statement","param_idx","val"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:2131:27
	makeExtern< duckdb_state (*)(_duckdb_prepared_statement *,idx_t,duckdb_time) , duckdb_bind_time , SimNode_ExtFuncCall >(lib,"duckdb_bind_time","duckdb_bind_time")
		->args({"prepared_statement","param_idx","val"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:2137:27
	makeExtern< duckdb_state (*)(_duckdb_prepared_statement *,idx_t,duckdb_timestamp) , duckdb_bind_timestamp , SimNode_ExtFuncCall >(lib,"duckdb_bind_timestamp","duckdb_bind_timestamp")
		->args({"prepared_statement","param_idx","val"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:2143:27
	makeExtern< duckdb_state (*)(_duckdb_prepared_statement *,idx_t,duckdb_timestamp) , duckdb_bind_timestamp_tz , SimNode_ExtFuncCall >(lib,"duckdb_bind_timestamp_tz","duckdb_bind_timestamp_tz")
		->args({"prepared_statement","param_idx","val"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:2149:27
	makeExtern< duckdb_state (*)(_duckdb_prepared_statement *,idx_t,duckdb_interval) , duckdb_bind_interval , SimNode_ExtFuncCall >(lib,"duckdb_bind_interval","duckdb_bind_interval")
		->args({"prepared_statement","param_idx","val"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:2157:27
	makeExtern< duckdb_state (*)(_duckdb_prepared_statement *,idx_t,const char *) , duckdb_bind_varchar , SimNode_ExtFuncCall >(lib,"duckdb_bind_varchar","duckdb_bind_varchar")
		->args({"prepared_statement","param_idx","val"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:2165:27
	makeExtern< duckdb_state (*)(_duckdb_prepared_statement *,idx_t,const char *,idx_t) , duckdb_bind_varchar_length , SimNode_ExtFuncCall >(lib,"duckdb_bind_varchar_length","duckdb_bind_varchar_length")
		->args({"prepared_statement","param_idx","val","length"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:2171:27
	makeExtern< duckdb_state (*)(_duckdb_prepared_statement *,idx_t,const void *,idx_t) , duckdb_bind_blob , SimNode_ExtFuncCall >(lib,"duckdb_bind_blob","duckdb_bind_blob")
		->args({"prepared_statement","param_idx","data","length"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:2177:27
	makeExtern< duckdb_state (*)(_duckdb_prepared_statement *,idx_t) , duckdb_bind_null , SimNode_ExtFuncCall >(lib,"duckdb_bind_null","duckdb_bind_null")
		->args({"prepared_statement","param_idx"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:2198:27
	makeExtern< duckdb_state (*)(_duckdb_prepared_statement *,duckdb_result *) , duckdb_execute_prepared , SimNode_ExtFuncCall >(lib,"duckdb_execute_prepared","duckdb_execute_prepared")
		->args({"prepared_statement","out_result"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:2217:27
	makeExtern< duckdb_state (*)(_duckdb_prepared_statement *,duckdb_result *) , duckdb_execute_prepared_streaming , SimNode_ExtFuncCall >(lib,"duckdb_execute_prepared_streaming","duckdb_execute_prepared_streaming")
		->args({"prepared_statement","out_result"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:2242:20
	makeExtern< idx_t (*)(_duckdb_connection *,const char *,_duckdb_extracted_statements **) , duckdb_extract_statements , SimNode_ExtFuncCall >(lib,"duckdb_extract_statements","duckdb_extract_statements")
		->args({"connection","query","out_extracted_statements"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:2258:27
	makeExtern< duckdb_state (*)(_duckdb_connection *,_duckdb_extracted_statements *,idx_t,_duckdb_prepared_statement **) , duckdb_prepare_extracted_statement , SimNode_ExtFuncCall >(lib,"duckdb_prepare_extracted_statement","duckdb_prepare_extracted_statement")
		->args({"connection","extracted_statements","index","out_prepared_statement"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:2270:26
	makeExtern< const char * (*)(_duckdb_extracted_statements *) , duckdb_extract_statements_error , SimNode_ExtFuncCall >(lib,"duckdb_extract_statements_error","duckdb_extract_statements_error")
		->args({"extracted_statements"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:2276:19
	makeExtern< void (*)(_duckdb_extracted_statements **) , duckdb_destroy_extracted , SimNode_ExtFuncCall >(lib,"duckdb_destroy_extracted","duckdb_destroy_extracted")
		->args({"extracted_statements"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:2297:27
	makeExtern< duckdb_state (*)(_duckdb_prepared_statement *,_duckdb_pending_result **) , duckdb_pending_prepared , SimNode_ExtFuncCall >(lib,"duckdb_pending_prepared","duckdb_pending_prepared")
		->args({"prepared_statement","out_result"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:2315:27
	makeExtern< duckdb_state (*)(_duckdb_prepared_statement *,_duckdb_pending_result **) , duckdb_pending_prepared_streaming , SimNode_ExtFuncCall >(lib,"duckdb_pending_prepared_streaming","duckdb_pending_prepared_streaming")
		->args({"prepared_statement","out_result"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:2325:19
	makeExtern< void (*)(_duckdb_pending_result **) , duckdb_destroy_pending , SimNode_ExtFuncCall >(lib,"duckdb_destroy_pending","duckdb_destroy_pending")
		->args({"pending_result"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:2335:26
	makeExtern< const char * (*)(_duckdb_pending_result *) , duckdb_pending_error , SimNode_ExtFuncCall >(lib,"duckdb_pending_error","duckdb_pending_error")
		->args({"pending_result"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:2349:35
	makeExtern< duckdb_pending_state (*)(_duckdb_pending_result *) , duckdb_pending_execute_task , SimNode_ExtFuncCall >(lib,"duckdb_pending_execute_task","duckdb_pending_execute_task")
		->args({"pending_result"})
		->addToModule(*this, SideEffects::worstDefault);
}
}


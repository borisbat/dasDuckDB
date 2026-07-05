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
void Module_dasDUCKDB::initFunctions_6() {
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:1975:36
	makeExtern< duckdb_statement_type (*)(_duckdb_prepared_statement *) , duckdb_prepared_statement_type , SimNode_ExtFuncCall >(lib,"duckdb_prepared_statement_type","duckdb_prepared_statement_type")
		->args({"statement"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:1984:20
	makeExtern< idx_t (*)(_duckdb_prepared_statement *) , duckdb_prepared_statement_column_count , SimNode_ExtFuncCall >(lib,"duckdb_prepared_statement_column_count","duckdb_prepared_statement_column_count")
		->args({"prepared_statement"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:1996:26
	makeExtern< const char * (*)(_duckdb_prepared_statement *,idx_t) , duckdb_prepared_statement_column_name , SimNode_ExtFuncCall >(lib,"duckdb_prepared_statement_column_name","duckdb_prepared_statement_column_name")
		->args({"prepared_statement","col_idx"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:2010:1
	makeExtern< _duckdb_logical_type * (*)(_duckdb_prepared_statement *,idx_t) , duckdb_prepared_statement_column_logical_type , SimNode_ExtFuncCall >(lib,"duckdb_prepared_statement_column_logical_type","duckdb_prepared_statement_column_logical_type")
		->args({"prepared_statement","col_idx"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:2021:26
	makeExtern< DUCKDB_TYPE (*)(_duckdb_prepared_statement *,idx_t) , duckdb_prepared_statement_column_type , SimNode_ExtFuncCall >(lib,"duckdb_prepared_statement_column_type","duckdb_prepared_statement_column_type")
		->args({"prepared_statement","col_idx"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:2037:27
	makeExtern< duckdb_state (*)(_duckdb_prepared_statement *,idx_t,_duckdb_value *) , duckdb_bind_value , SimNode_ExtFuncCall >(lib,"duckdb_bind_value","duckdb_bind_value")
		->args({"prepared_statement","param_idx","val"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:2049:27
	makeExtern< duckdb_state (*)(_duckdb_prepared_statement *,idx_t,bool) , duckdb_bind_boolean , SimNode_ExtFuncCall >(lib,"duckdb_bind_boolean","duckdb_bind_boolean")
		->args({"prepared_statement","param_idx","val"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:2054:27
	makeExtern< duckdb_state (*)(_duckdb_prepared_statement *,idx_t,signed char) , duckdb_bind_int8 , SimNode_ExtFuncCall >(lib,"duckdb_bind_int8","duckdb_bind_int8")
		->args({"prepared_statement","param_idx","val"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:2059:27
	makeExtern< duckdb_state (*)(_duckdb_prepared_statement *,idx_t,short) , duckdb_bind_int16 , SimNode_ExtFuncCall >(lib,"duckdb_bind_int16","duckdb_bind_int16")
		->args({"prepared_statement","param_idx","val"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:2064:27
	makeExtern< duckdb_state (*)(_duckdb_prepared_statement *,idx_t,int) , duckdb_bind_int32 , SimNode_ExtFuncCall >(lib,"duckdb_bind_int32","duckdb_bind_int32")
		->args({"prepared_statement","param_idx","val"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:2069:27
	makeExtern< duckdb_state (*)(_duckdb_prepared_statement *,idx_t,int64_t) , duckdb_bind_int64 , SimNode_ExtFuncCall >(lib,"duckdb_bind_int64","duckdb_bind_int64")
		->args({"prepared_statement","param_idx","val"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:2074:27
	makeExtern< duckdb_state (*)(_duckdb_prepared_statement *,idx_t,duckdb_hugeint) , duckdb_bind_hugeint , SimNode_ExtFuncCall >(lib,"duckdb_bind_hugeint","duckdb_bind_hugeint")
		->args({"prepared_statement","param_idx","val"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:2080:27
	makeExtern< duckdb_state (*)(_duckdb_prepared_statement *,idx_t,duckdb_uhugeint) , duckdb_bind_uhugeint , SimNode_ExtFuncCall >(lib,"duckdb_bind_uhugeint","duckdb_bind_uhugeint")
		->args({"prepared_statement","param_idx","val"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:2086:27
	makeExtern< duckdb_state (*)(_duckdb_prepared_statement *,idx_t,duckdb_decimal) , duckdb_bind_decimal , SimNode_ExtFuncCall >(lib,"duckdb_bind_decimal","duckdb_bind_decimal")
		->args({"prepared_statement","param_idx","val"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:2092:27
	makeExtern< duckdb_state (*)(_duckdb_prepared_statement *,idx_t,unsigned char) , duckdb_bind_uint8 , SimNode_ExtFuncCall >(lib,"duckdb_bind_uint8","duckdb_bind_uint8")
		->args({"prepared_statement","param_idx","val"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:2097:27
	makeExtern< duckdb_state (*)(_duckdb_prepared_statement *,idx_t,unsigned short) , duckdb_bind_uint16 , SimNode_ExtFuncCall >(lib,"duckdb_bind_uint16","duckdb_bind_uint16")
		->args({"prepared_statement","param_idx","val"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:2103:27
	makeExtern< duckdb_state (*)(_duckdb_prepared_statement *,idx_t,unsigned int) , duckdb_bind_uint32 , SimNode_ExtFuncCall >(lib,"duckdb_bind_uint32","duckdb_bind_uint32")
		->args({"prepared_statement","param_idx","val"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:2109:27
	makeExtern< duckdb_state (*)(_duckdb_prepared_statement *,idx_t,uint64_t) , duckdb_bind_uint64 , SimNode_ExtFuncCall >(lib,"duckdb_bind_uint64","duckdb_bind_uint64")
		->args({"prepared_statement","param_idx","val"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:2115:27
	makeExtern< duckdb_state (*)(_duckdb_prepared_statement *,idx_t,float) , duckdb_bind_float , SimNode_ExtFuncCall >(lib,"duckdb_bind_float","duckdb_bind_float")
		->args({"prepared_statement","param_idx","val"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:2120:27
	makeExtern< duckdb_state (*)(_duckdb_prepared_statement *,idx_t,double) , duckdb_bind_double , SimNode_ExtFuncCall >(lib,"duckdb_bind_double","duckdb_bind_double")
		->args({"prepared_statement","param_idx","val"})
		->addToModule(*this, SideEffects::worstDefault);
}
}


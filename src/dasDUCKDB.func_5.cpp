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
void Module_dasDUCKDB::initFunctions_5() {
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:1761:38
	makeExtern< duckdb_timestamp_struct (*)(duckdb_timestamp) , duckdb_from_timestamp , SimNode_ExtFuncCallAndCopyOrMove >(lib,"duckdb_from_timestamp","duckdb_from_timestamp")
		->args({"ts"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:1769:31
	makeExtern< duckdb_timestamp (*)(duckdb_timestamp_struct) , duckdb_to_timestamp , SimNode_ExtFuncCallAndCopyOrMove >(lib,"duckdb_to_timestamp","duckdb_to_timestamp")
		->args({"ts"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:1777:19
	makeExtern< bool (*)(duckdb_timestamp) , duckdb_is_finite_timestamp , SimNode_ExtFuncCall >(lib,"duckdb_is_finite_timestamp","duckdb_is_finite_timestamp")
		->args({"ts"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:1785:19
	makeExtern< bool (*)(duckdb_timestamp_s) , duckdb_is_finite_timestamp_s , SimNode_ExtFuncCall >(lib,"duckdb_is_finite_timestamp_s","duckdb_is_finite_timestamp_s")
		->args({"ts"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:1793:19
	makeExtern< bool (*)(duckdb_timestamp_ms) , duckdb_is_finite_timestamp_ms , SimNode_ExtFuncCall >(lib,"duckdb_is_finite_timestamp_ms","duckdb_is_finite_timestamp_ms")
		->args({"ts"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:1801:19
	makeExtern< bool (*)(duckdb_timestamp_ns) , duckdb_is_finite_timestamp_ns , SimNode_ExtFuncCall >(lib,"duckdb_is_finite_timestamp_ns","duckdb_is_finite_timestamp_ns")
		->args({"ts"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:1816:21
	makeExtern< double (*)(duckdb_hugeint) , duckdb_hugeint_to_double , SimNode_ExtFuncCall >(lib,"duckdb_hugeint_to_double","duckdb_hugeint_to_double")
		->args({"val"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:1826:29
	makeExtern< duckdb_hugeint (*)(double) , duckdb_double_to_hugeint , SimNode_ExtFuncCallAndCopyOrMove >(lib,"duckdb_double_to_hugeint","duckdb_double_to_hugeint")
		->args({"val"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:1834:21
	makeExtern< double (*)(duckdb_uhugeint) , duckdb_uhugeint_to_double , SimNode_ExtFuncCall >(lib,"duckdb_uhugeint_to_double","duckdb_uhugeint_to_double")
		->args({"val"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:1844:30
	makeExtern< duckdb_uhugeint (*)(double) , duckdb_double_to_uhugeint , SimNode_ExtFuncCallAndCopyOrMove >(lib,"duckdb_double_to_uhugeint","duckdb_double_to_uhugeint")
		->args({"val"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:1861:29
	makeExtern< duckdb_decimal (*)(double,unsigned char,unsigned char) , duckdb_double_to_decimal , SimNode_ExtFuncCallAndCopyOrMove >(lib,"duckdb_double_to_decimal","duckdb_double_to_decimal")
		->args({"val","width","scale"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:1869:21
	makeExtern< double (*)(duckdb_decimal) , duckdb_decimal_to_double , SimNode_ExtFuncCall >(lib,"duckdb_decimal_to_double","duckdb_decimal_to_double")
		->args({"val"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:1899:27
	makeExtern< duckdb_state (*)(_duckdb_connection *,const char *,_duckdb_prepared_statement **) , duckdb_prepare , SimNode_ExtFuncCall >(lib,"duckdb_prepare","duckdb_prepare")
		->args({"connection","query","out_prepared_statement"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:1907:19
	makeExtern< void (*)(_duckdb_prepared_statement **) , duckdb_destroy_prepare , SimNode_ExtFuncCall >(lib,"duckdb_destroy_prepare","duckdb_destroy_prepare")
		->args({"prepared_statement"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:1918:26
	makeExtern< const char * (*)(_duckdb_prepared_statement *) , duckdb_prepare_error , SimNode_ExtFuncCall >(lib,"duckdb_prepare_error","duckdb_prepare_error")
		->args({"prepared_statement"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:1927:20
	makeExtern< idx_t (*)(_duckdb_prepared_statement *) , duckdb_nparams , SimNode_ExtFuncCall >(lib,"duckdb_nparams","duckdb_nparams")
		->args({"prepared_statement"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:1937:26
	makeExtern< const char * (*)(_duckdb_prepared_statement *,idx_t) , duckdb_parameter_name , SimNode_ExtFuncCall >(lib,"duckdb_parameter_name","duckdb_parameter_name")
		->args({"prepared_statement","index"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:1948:26
	makeExtern< DUCKDB_TYPE (*)(_duckdb_prepared_statement *,idx_t) , duckdb_param_type , SimNode_ExtFuncCall >(lib,"duckdb_param_type","duckdb_param_type")
		->args({"prepared_statement","param_idx"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:1961:34
	makeExtern< _duckdb_logical_type * (*)(_duckdb_prepared_statement *,idx_t) , duckdb_param_logical_type , SimNode_ExtFuncCall >(lib,"duckdb_param_logical_type","duckdb_param_logical_type")
		->args({"prepared_statement","param_idx"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:1967:27
	makeExtern< duckdb_state (*)(_duckdb_prepared_statement *) , duckdb_clear_bindings , SimNode_ExtFuncCall >(lib,"duckdb_clear_bindings","duckdb_clear_bindings")
		->args({"prepared_statement"})
		->addToModule(*this, SideEffects::worstDefault);
}
}


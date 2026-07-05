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
void Module_dasDUCKDB::initFunctions_19() {
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:4676:20
	makeExtern< idx_t (*)(_duckdb_appender *) , duckdb_appender_column_count , SimNode_ExtFuncCall >(lib,"duckdb_appender_column_count","duckdb_appender_column_count")
		->args({"appender"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:4688:34
	makeExtern< _duckdb_logical_type * (*)(_duckdb_appender *,idx_t) , duckdb_appender_column_type , SimNode_ExtFuncCall >(lib,"duckdb_appender_column_type","duckdb_appender_column_type")
		->args({"appender","col_idx"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:4703:26
	makeExtern< const char * (*)(_duckdb_appender *) , duckdb_appender_error , SimNode_ExtFuncCall >(lib,"duckdb_appender_error","duckdb_appender_error")
		->args({"appender"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:4714:32
	makeExtern< _duckdb_error_data * (*)(_duckdb_appender *) , duckdb_appender_error_data , SimNode_ExtFuncCall >(lib,"duckdb_appender_error_data","duckdb_appender_error_data")
		->args({"appender"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:4725:27
	makeExtern< duckdb_state (*)(_duckdb_appender *) , duckdb_appender_flush , SimNode_ExtFuncCall >(lib,"duckdb_appender_flush","duckdb_appender_flush")
		->args({"appender"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:4734:27
	makeExtern< duckdb_state (*)(_duckdb_appender *) , duckdb_appender_clear , SimNode_ExtFuncCall >(lib,"duckdb_appender_clear","duckdb_appender_clear")
		->args({"appender"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:4745:27
	makeExtern< duckdb_state (*)(_duckdb_appender *) , duckdb_appender_close , SimNode_ExtFuncCall >(lib,"duckdb_appender_close","duckdb_appender_close")
		->args({"appender"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:4757:27
	makeExtern< duckdb_state (*)(_duckdb_appender **) , duckdb_appender_destroy , SimNode_ExtFuncCall >(lib,"duckdb_appender_destroy","duckdb_appender_destroy")
		->args({"appender"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:4768:27
	makeExtern< duckdb_state (*)(_duckdb_appender *,const char *) , duckdb_appender_add_column , SimNode_ExtFuncCall >(lib,"duckdb_appender_add_column","duckdb_appender_add_column")
		->args({"appender","name"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:4777:27
	makeExtern< duckdb_state (*)(_duckdb_appender *) , duckdb_appender_clear_columns , SimNode_ExtFuncCall >(lib,"duckdb_appender_clear_columns","duckdb_appender_clear_columns")
		->args({"appender"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:4782:27
	makeExtern< duckdb_state (*)(_duckdb_appender *) , duckdb_appender_begin_row , SimNode_ExtFuncCall >(lib,"duckdb_appender_begin_row","duckdb_appender_begin_row")
		->args({"appender"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:4790:27
	makeExtern< duckdb_state (*)(_duckdb_appender *) , duckdb_appender_end_row , SimNode_ExtFuncCall >(lib,"duckdb_appender_end_row","duckdb_appender_end_row")
		->args({"appender"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:4795:27
	makeExtern< duckdb_state (*)(_duckdb_appender *) , duckdb_append_default , SimNode_ExtFuncCall >(lib,"duckdb_append_default","duckdb_append_default")
		->args({"appender"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:4808:27
	makeExtern< duckdb_state (*)(_duckdb_appender *,_duckdb_data_chunk *,idx_t,idx_t) , duckdb_append_default_to_chunk , SimNode_ExtFuncCall >(lib,"duckdb_append_default_to_chunk","duckdb_append_default_to_chunk")
		->args({"appender","chunk","col","row"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:4814:27
	makeExtern< duckdb_state (*)(_duckdb_appender *,bool) , duckdb_append_bool , SimNode_ExtFuncCall >(lib,"duckdb_append_bool","duckdb_append_bool")
		->args({"appender","value"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:4819:27
	makeExtern< duckdb_state (*)(_duckdb_appender *,signed char) , duckdb_append_int8 , SimNode_ExtFuncCall >(lib,"duckdb_append_int8","duckdb_append_int8")
		->args({"appender","value"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:4824:27
	makeExtern< duckdb_state (*)(_duckdb_appender *,short) , duckdb_append_int16 , SimNode_ExtFuncCall >(lib,"duckdb_append_int16","duckdb_append_int16")
		->args({"appender","value"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:4829:27
	makeExtern< duckdb_state (*)(_duckdb_appender *,int) , duckdb_append_int32 , SimNode_ExtFuncCall >(lib,"duckdb_append_int32","duckdb_append_int32")
		->args({"appender","value"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:4834:27
	makeExtern< duckdb_state (*)(_duckdb_appender *,int64_t) , duckdb_append_int64 , SimNode_ExtFuncCall >(lib,"duckdb_append_int64","duckdb_append_int64")
		->args({"appender","value"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:4839:27
	makeExtern< duckdb_state (*)(_duckdb_appender *,duckdb_hugeint) , duckdb_append_hugeint , SimNode_ExtFuncCall >(lib,"duckdb_append_hugeint","duckdb_append_hugeint")
		->args({"appender","value"})
		->addToModule(*this, SideEffects::worstDefault);
}
}


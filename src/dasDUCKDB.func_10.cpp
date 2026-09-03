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
void Module_dasDUCKDB::initFunctions_10() {
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:2703:23
	makeExtern< unsigned int (*)(_duckdb_value *) , duckdb_get_uint32 , SimNode_ExtFuncCall >(lib,"duckdb_get_uint32","duckdb_get_uint32")
		->args({"val"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:2711:22
	makeExtern< int64_t (*)(_duckdb_value *) , duckdb_get_int64 , SimNode_ExtFuncCall >(lib,"duckdb_get_int64","duckdb_get_int64")
		->args({"val"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:2719:23
	makeExtern< uint64_t (*)(_duckdb_value *) , duckdb_get_uint64 , SimNode_ExtFuncCall >(lib,"duckdb_get_uint64","duckdb_get_uint64")
		->args({"val"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:2727:29
	makeExtern< duckdb_hugeint (*)(_duckdb_value *) , duckdb_get_hugeint , SimNode_ExtFuncCallAndCopyOrMove >(lib,"duckdb_get_hugeint","duckdb_get_hugeint")
		->args({"val"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:2735:30
	makeExtern< duckdb_uhugeint (*)(_duckdb_value *) , duckdb_get_uhugeint , SimNode_ExtFuncCallAndCopyOrMove >(lib,"duckdb_get_uhugeint","duckdb_get_uhugeint")
		->args({"val"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:2744:28
	makeExtern< duckdb_bignum (*)(_duckdb_value *) , duckdb_get_bignum , SimNode_ExtFuncCallAndCopyOrMove >(lib,"duckdb_get_bignum","duckdb_get_bignum")
		->args({"val"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:2752:29
	makeExtern< duckdb_decimal (*)(_duckdb_value *) , duckdb_get_decimal , SimNode_ExtFuncCallAndCopyOrMove >(lib,"duckdb_get_decimal","duckdb_get_decimal")
		->args({"val"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:2760:20
	makeExtern< float (*)(_duckdb_value *) , duckdb_get_float , SimNode_ExtFuncCall >(lib,"duckdb_get_float","duckdb_get_float")
		->args({"val"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:2768:21
	makeExtern< double (*)(_duckdb_value *) , duckdb_get_double , SimNode_ExtFuncCall >(lib,"duckdb_get_double","duckdb_get_double")
		->args({"val"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:2776:26
	makeExtern< duckdb_date (*)(_duckdb_value *) , duckdb_get_date , SimNode_ExtFuncCallAndCopyOrMove >(lib,"duckdb_get_date","duckdb_get_date")
		->args({"val"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:2784:26
	makeExtern< duckdb_time (*)(_duckdb_value *) , duckdb_get_time , SimNode_ExtFuncCallAndCopyOrMove >(lib,"duckdb_get_time","duckdb_get_time")
		->args({"val"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:2792:29
	makeExtern< duckdb_time_ns (*)(_duckdb_value *) , duckdb_get_time_ns , SimNode_ExtFuncCallAndCopyOrMove >(lib,"duckdb_get_time_ns","duckdb_get_time_ns")
		->args({"val"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:2800:29
	makeExtern< duckdb_time_tz (*)(_duckdb_value *) , duckdb_get_time_tz , SimNode_ExtFuncCallAndCopyOrMove >(lib,"duckdb_get_time_tz","duckdb_get_time_tz")
		->args({"val"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:2808:31
	makeExtern< duckdb_timestamp (*)(_duckdb_value *) , duckdb_get_timestamp , SimNode_ExtFuncCallAndCopyOrMove >(lib,"duckdb_get_timestamp","duckdb_get_timestamp")
		->args({"val"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:2816:31
	makeExtern< duckdb_timestamp (*)(_duckdb_value *) , duckdb_get_timestamp_tz , SimNode_ExtFuncCallAndCopyOrMove >(lib,"duckdb_get_timestamp_tz","duckdb_get_timestamp_tz")
		->args({"val"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:2824:33
	makeExtern< duckdb_timestamp_s (*)(_duckdb_value *) , duckdb_get_timestamp_s , SimNode_ExtFuncCallAndCopyOrMove >(lib,"duckdb_get_timestamp_s","duckdb_get_timestamp_s")
		->args({"val"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:2832:34
	makeExtern< duckdb_timestamp_ms (*)(_duckdb_value *) , duckdb_get_timestamp_ms , SimNode_ExtFuncCallAndCopyOrMove >(lib,"duckdb_get_timestamp_ms","duckdb_get_timestamp_ms")
		->args({"val"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:2840:34
	makeExtern< duckdb_timestamp_ns (*)(_duckdb_value *) , duckdb_get_timestamp_ns , SimNode_ExtFuncCallAndCopyOrMove >(lib,"duckdb_get_timestamp_ns","duckdb_get_timestamp_ns")
		->args({"val"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:2848:30
	makeExtern< duckdb_interval (*)(_duckdb_value *) , duckdb_get_interval , SimNode_ExtFuncCallAndCopyOrMove >(lib,"duckdb_get_interval","duckdb_get_interval")
		->args({"val"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:2857:34
	makeExtern< _duckdb_logical_type * (*)(_duckdb_value *) , duckdb_get_value_type , SimNode_ExtFuncCall >(lib,"duckdb_get_value_type","duckdb_get_value_type")
		->args({"val"})
		->addToModule(*this, SideEffects::worstDefault);
}
}


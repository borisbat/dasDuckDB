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
void Module_dasDUCKDB::initFunctions_3() {
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:1377:32
	makeExtern< duckdb_error_type (*)(duckdb_result *) , duckdb_result_error_type , SimNode_ExtFuncCall >(lib,"duckdb_result_error_type","duckdb_result_error_type")
		->args({"result"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:1399:32
	makeExtern< _duckdb_data_chunk * (*)(duckdb_result,idx_t) , duckdb_result_get_chunk , SimNode_ExtFuncCall >(lib,"duckdb_result_get_chunk","duckdb_result_get_chunk")
		->args({"result","chunk_index"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:1409:19
	makeExtern< bool (*)(duckdb_result) , duckdb_result_is_streaming , SimNode_ExtFuncCall >(lib,"duckdb_result_is_streaming","duckdb_result_is_streaming")
		->args({"result"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:1419:20
	makeExtern< idx_t (*)(duckdb_result) , duckdb_result_chunk_count , SimNode_ExtFuncCall >(lib,"duckdb_result_chunk_count","duckdb_result_chunk_count")
		->args({"result"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:1429:33
	makeExtern< duckdb_result_type (*)(duckdb_result) , duckdb_result_return_type , SimNode_ExtFuncCall >(lib,"duckdb_result_return_type","duckdb_result_return_type")
		->args({"result"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:1451:19
	makeExtern< bool (*)(duckdb_result *,idx_t,idx_t) , duckdb_value_boolean , SimNode_ExtFuncCall >(lib,"duckdb_value_boolean","duckdb_value_boolean")
		->args({"result","col","row"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:1458:21
	makeExtern< signed char (*)(duckdb_result *,idx_t,idx_t) , duckdb_value_int8 , SimNode_ExtFuncCall >(lib,"duckdb_value_int8","duckdb_value_int8")
		->args({"result","col","row"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:1465:22
	makeExtern< short (*)(duckdb_result *,idx_t,idx_t) , duckdb_value_int16 , SimNode_ExtFuncCall >(lib,"duckdb_value_int16","duckdb_value_int16")
		->args({"result","col","row"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:1472:22
	makeExtern< int (*)(duckdb_result *,idx_t,idx_t) , duckdb_value_int32 , SimNode_ExtFuncCall >(lib,"duckdb_value_int32","duckdb_value_int32")
		->args({"result","col","row"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:1479:22
	makeExtern< int64_t (*)(duckdb_result *,idx_t,idx_t) , duckdb_value_int64 , SimNode_ExtFuncCall >(lib,"duckdb_value_int64","duckdb_value_int64")
		->args({"result","col","row"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:1486:29
	makeExtern< duckdb_hugeint (*)(duckdb_result *,idx_t,idx_t) , duckdb_value_hugeint , SimNode_ExtFuncCallAndCopyOrMove >(lib,"duckdb_value_hugeint","duckdb_value_hugeint")
		->args({"result","col","row"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:1493:30
	makeExtern< duckdb_uhugeint (*)(duckdb_result *,idx_t,idx_t) , duckdb_value_uhugeint , SimNode_ExtFuncCallAndCopyOrMove >(lib,"duckdb_value_uhugeint","duckdb_value_uhugeint")
		->args({"result","col","row"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:1500:29
	makeExtern< duckdb_decimal (*)(duckdb_result *,idx_t,idx_t) , duckdb_value_decimal , SimNode_ExtFuncCallAndCopyOrMove >(lib,"duckdb_value_decimal","duckdb_value_decimal")
		->args({"result","col","row"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:1507:22
	makeExtern< unsigned char (*)(duckdb_result *,idx_t,idx_t) , duckdb_value_uint8 , SimNode_ExtFuncCall >(lib,"duckdb_value_uint8","duckdb_value_uint8")
		->args({"result","col","row"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:1514:23
	makeExtern< unsigned short (*)(duckdb_result *,idx_t,idx_t) , duckdb_value_uint16 , SimNode_ExtFuncCall >(lib,"duckdb_value_uint16","duckdb_value_uint16")
		->args({"result","col","row"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:1521:23
	makeExtern< unsigned int (*)(duckdb_result *,idx_t,idx_t) , duckdb_value_uint32 , SimNode_ExtFuncCall >(lib,"duckdb_value_uint32","duckdb_value_uint32")
		->args({"result","col","row"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:1528:23
	makeExtern< uint64_t (*)(duckdb_result *,idx_t,idx_t) , duckdb_value_uint64 , SimNode_ExtFuncCall >(lib,"duckdb_value_uint64","duckdb_value_uint64")
		->args({"result","col","row"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:1535:20
	makeExtern< float (*)(duckdb_result *,idx_t,idx_t) , duckdb_value_float , SimNode_ExtFuncCall >(lib,"duckdb_value_float","duckdb_value_float")
		->args({"result","col","row"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:1542:21
	makeExtern< double (*)(duckdb_result *,idx_t,idx_t) , duckdb_value_double , SimNode_ExtFuncCall >(lib,"duckdb_value_double","duckdb_value_double")
		->args({"result","col","row"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:1549:26
	makeExtern< duckdb_date (*)(duckdb_result *,idx_t,idx_t) , duckdb_value_date , SimNode_ExtFuncCallAndCopyOrMove >(lib,"duckdb_value_date","duckdb_value_date")
		->args({"result","col","row"})
		->addToModule(*this, SideEffects::worstDefault);
}
}


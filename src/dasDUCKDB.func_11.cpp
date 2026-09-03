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
void Module_dasDUCKDB::initFunctions_11() {
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:2865:26
	makeExtern< duckdb_blob (*)(_duckdb_value *) , duckdb_get_blob , SimNode_ExtFuncCallAndCopyOrMove >(lib,"duckdb_get_blob","duckdb_get_blob")
		->args({"val"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:2874:25
	makeExtern< duckdb_bit (*)(_duckdb_value *) , duckdb_get_bit , SimNode_ExtFuncCallAndCopyOrMove >(lib,"duckdb_get_bit","duckdb_get_bit")
		->args({"val"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:2882:30
	makeExtern< duckdb_uhugeint (*)(_duckdb_value *) , duckdb_get_uuid , SimNode_ExtFuncCallAndCopyOrMove >(lib,"duckdb_get_uuid","duckdb_get_uuid")
		->args({"val"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:2891:20
	makeExtern< char * (*)(_duckdb_value *) , duckdb_get_varchar , SimNode_ExtFuncCall >(lib,"duckdb_get_varchar","duckdb_get_varchar")
		->args({"value"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:2900:27
	makeExtern< _duckdb_value * (*)(_duckdb_logical_type *,_duckdb_value **) , duckdb_create_struct_value , SimNode_ExtFuncCall >(lib,"duckdb_create_struct_value","duckdb_create_struct_value")
		->args({"type","values"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:2911:27
	makeExtern< _duckdb_value * (*)(_duckdb_logical_type *,_duckdb_value **,idx_t) , duckdb_create_list_value , SimNode_ExtFuncCall >(lib,"duckdb_create_list_value","duckdb_create_list_value")
		->args({"type","values","value_count"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:2922:27
	makeExtern< _duckdb_value * (*)(_duckdb_logical_type *,_duckdb_value **,idx_t) , duckdb_create_array_value , SimNode_ExtFuncCall >(lib,"duckdb_create_array_value","duckdb_create_array_value")
		->args({"type","values","value_count"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:2934:27
	makeExtern< _duckdb_value * (*)(_duckdb_logical_type *,_duckdb_value **,_duckdb_value **,idx_t) , duckdb_create_map_value , SimNode_ExtFuncCall >(lib,"duckdb_create_map_value","duckdb_create_map_value")
		->args({"map_type","keys","values","entry_count"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:2946:27
	makeExtern< _duckdb_value * (*)(_duckdb_logical_type *,idx_t,_duckdb_value *) , duckdb_create_union_value , SimNode_ExtFuncCall >(lib,"duckdb_create_union_value","duckdb_create_union_value")
		->args({"union_type","tag_index","value"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:2955:20
	makeExtern< idx_t (*)(_duckdb_value *) , duckdb_get_map_size , SimNode_ExtFuncCall >(lib,"duckdb_get_map_size","duckdb_get_map_size")
		->args({"value"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:2964:27
	makeExtern< _duckdb_value * (*)(_duckdb_value *,idx_t) , duckdb_get_map_key , SimNode_ExtFuncCall >(lib,"duckdb_get_map_key","duckdb_get_map_key")
		->args({"value","index"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:2973:27
	makeExtern< _duckdb_value * (*)(_duckdb_value *,idx_t) , duckdb_get_map_value , SimNode_ExtFuncCall >(lib,"duckdb_get_map_value","duckdb_get_map_value")
		->args({"value","index"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:2981:19
	makeExtern< bool (*)(_duckdb_value *) , duckdb_is_null_value , SimNode_ExtFuncCall >(lib,"duckdb_is_null_value","duckdb_is_null_value")
		->args({"value"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:2988:27
	makeExtern< _duckdb_value * (*)() , duckdb_create_null_value , SimNode_ExtFuncCall >(lib,"duckdb_create_null_value","duckdb_create_null_value")
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:2996:20
	makeExtern< idx_t (*)(_duckdb_value *) , duckdb_get_list_size , SimNode_ExtFuncCall >(lib,"duckdb_get_list_size","duckdb_get_list_size")
		->args({"value"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:3005:27
	makeExtern< _duckdb_value * (*)(_duckdb_value *,idx_t) , duckdb_get_list_child , SimNode_ExtFuncCall >(lib,"duckdb_get_list_child","duckdb_get_list_child")
		->args({"value","index"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:3014:27
	makeExtern< _duckdb_value * (*)(_duckdb_logical_type *,uint64_t) , duckdb_create_enum_value , SimNode_ExtFuncCall >(lib,"duckdb_create_enum_value","duckdb_create_enum_value")
		->args({"type","value"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:3022:23
	makeExtern< uint64_t (*)(_duckdb_value *) , duckdb_get_enum_value , SimNode_ExtFuncCall >(lib,"duckdb_get_enum_value","duckdb_get_enum_value")
		->args({"value"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:3031:27
	makeExtern< _duckdb_value * (*)(_duckdb_value *,idx_t) , duckdb_get_struct_child , SimNode_ExtFuncCall >(lib,"duckdb_get_struct_child","duckdb_get_struct_child")
		->args({"value","index"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:3039:20
	makeExtern< char * (*)(_duckdb_value *) , duckdb_value_to_string , SimNode_ExtFuncCall >(lib,"duckdb_value_to_string","duckdb_value_to_string")
		->args({"value"})
		->addToModule(*this, SideEffects::worstDefault);
}
}


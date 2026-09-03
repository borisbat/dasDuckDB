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
void Module_dasDUCKDB::initFunctions_13() {
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:3244:34
	makeExtern< _duckdb_logical_type * (*)(_duckdb_logical_type *) , duckdb_map_type_key_type , SimNode_ExtFuncCall >(lib,"duckdb_map_type_key_type","duckdb_map_type_key_type")
		->args({"type"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:3254:34
	makeExtern< _duckdb_logical_type * (*)(_duckdb_logical_type *) , duckdb_map_type_value_type , SimNode_ExtFuncCall >(lib,"duckdb_map_type_value_type","duckdb_map_type_value_type")
		->args({"type"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:3262:20
	makeExtern< idx_t (*)(_duckdb_logical_type *) , duckdb_struct_type_child_count , SimNode_ExtFuncCall >(lib,"duckdb_struct_type_child_count","duckdb_struct_type_child_count")
		->args({"type"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:3273:20
	makeExtern< char * (*)(_duckdb_logical_type *,idx_t) , duckdb_struct_type_child_name , SimNode_ExtFuncCall >(lib,"duckdb_struct_type_child_name","duckdb_struct_type_child_name")
		->args({"type","index"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:3284:34
	makeExtern< _duckdb_logical_type * (*)(_duckdb_logical_type *,idx_t) , duckdb_struct_type_child_type , SimNode_ExtFuncCall >(lib,"duckdb_struct_type_child_type","duckdb_struct_type_child_type")
		->args({"type","index"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:3292:20
	makeExtern< idx_t (*)(_duckdb_logical_type *) , duckdb_union_type_member_count , SimNode_ExtFuncCall >(lib,"duckdb_union_type_member_count","duckdb_union_type_member_count")
		->args({"type"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:3303:20
	makeExtern< char * (*)(_duckdb_logical_type *,idx_t) , duckdb_union_type_member_name , SimNode_ExtFuncCall >(lib,"duckdb_union_type_member_name","duckdb_union_type_member_name")
		->args({"type","index"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:3314:34
	makeExtern< _duckdb_logical_type * (*)(_duckdb_logical_type *,idx_t) , duckdb_union_type_member_type , SimNode_ExtFuncCall >(lib,"duckdb_union_type_member_type","duckdb_union_type_member_type")
		->args({"type","index"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:3321:19
	makeExtern< void (*)(_duckdb_logical_type **) , duckdb_destroy_logical_type , SimNode_ExtFuncCall >(lib,"duckdb_destroy_logical_type","duckdb_destroy_logical_type")
		->args({"type"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:3331:27
	makeExtern< duckdb_state (*)(_duckdb_connection *,_duckdb_logical_type *,_duckdb_create_type_info *) , duckdb_register_logical_type , SimNode_ExtFuncCall >(lib,"duckdb_register_logical_type","duckdb_register_logical_type")
		->args({"con","type","info"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:3354:32
	makeExtern< _duckdb_data_chunk * (*)(_duckdb_logical_type **,idx_t) , duckdb_create_data_chunk , SimNode_ExtFuncCall >(lib,"duckdb_create_data_chunk","duckdb_create_data_chunk")
		->args({"types","column_count"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:3361:19
	makeExtern< void (*)(_duckdb_data_chunk **) , duckdb_destroy_data_chunk , SimNode_ExtFuncCall >(lib,"duckdb_destroy_data_chunk","duckdb_destroy_data_chunk")
		->args({"chunk"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:3370:19
	makeExtern< void (*)(_duckdb_data_chunk *) , duckdb_data_chunk_reset , SimNode_ExtFuncCall >(lib,"duckdb_data_chunk_reset","duckdb_data_chunk_reset")
		->args({"chunk"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:3378:20
	makeExtern< idx_t (*)(_duckdb_data_chunk *) , duckdb_data_chunk_get_column_count , SimNode_ExtFuncCall >(lib,"duckdb_data_chunk_get_column_count","duckdb_data_chunk_get_column_count")
		->args({"chunk"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:3389:28
	makeExtern< _duckdb_vector * (*)(_duckdb_data_chunk *,idx_t) , duckdb_data_chunk_get_vector , SimNode_ExtFuncCall >(lib,"duckdb_data_chunk_get_vector","duckdb_data_chunk_get_vector")
		->args({"chunk","col_idx"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:3397:20
	makeExtern< idx_t (*)(_duckdb_data_chunk *) , duckdb_data_chunk_get_size , SimNode_ExtFuncCall >(lib,"duckdb_data_chunk_get_size","duckdb_data_chunk_get_size")
		->args({"chunk"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:3405:19
	makeExtern< void (*)(_duckdb_data_chunk *,idx_t) , duckdb_data_chunk_set_size , SimNode_ExtFuncCall >(lib,"duckdb_data_chunk_set_size","duckdb_data_chunk_set_size")
		->args({"chunk","size"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:3422:28
	makeExtern< _duckdb_vector * (*)(_duckdb_logical_type *,idx_t) , duckdb_create_vector , SimNode_ExtFuncCall >(lib,"duckdb_create_vector","duckdb_create_vector")
		->args({"type","capacity"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:3429:19
	makeExtern< void (*)(_duckdb_vector **) , duckdb_destroy_vector , SimNode_ExtFuncCall >(lib,"duckdb_destroy_vector","duckdb_destroy_vector")
		->args({"vector"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:3439:34
	makeExtern< _duckdb_logical_type * (*)(_duckdb_vector *) , duckdb_vector_get_column_type , SimNode_ExtFuncCall >(lib,"duckdb_vector_get_column_type","duckdb_vector_get_column_type")
		->args({"vector"})
		->addToModule(*this, SideEffects::worstDefault);
}
}


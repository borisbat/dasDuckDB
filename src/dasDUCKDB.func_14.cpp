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
void Module_dasDUCKDB::initFunctions_14() {
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:3439:34
	makeExtern< _duckdb_logical_type * (*)(_duckdb_vector *) , duckdb_vector_get_column_type , SimNode_ExtFuncCall >(lib,"duckdb_vector_get_column_type","duckdb_vector_get_column_type")
		->args({"vector"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:3450:20
	makeExtern< void * (*)(_duckdb_vector *) , duckdb_vector_get_data , SimNode_ExtFuncCall >(lib,"duckdb_vector_get_data","duckdb_vector_get_data")
		->args({"vector"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:3472:24
	makeExtern< unsigned long long * (*)(_duckdb_vector *) , duckdb_vector_get_validity , SimNode_ExtFuncCall >(lib,"duckdb_vector_get_validity","duckdb_vector_get_validity")
		->args({"vector"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:3482:19
	makeExtern< void (*)(_duckdb_vector *) , duckdb_vector_ensure_validity_writable , SimNode_ExtFuncCall >(lib,"duckdb_vector_ensure_validity_writable","duckdb_vector_ensure_validity_writable")
		->args({"vector"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:3494:19
	makeExtern< void (*)(_duckdb_vector *,idx_t,const char *) , duckdb_vector_assign_string_element , SimNode_ExtFuncCall >(lib,"duckdb_vector_assign_string_element","duckdb_vector_assign_string_element")
		->args({"vector","index","str"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:3507:19
	makeExtern< void (*)(_duckdb_vector *,idx_t,const char *,idx_t) , duckdb_vector_assign_string_element_len , SimNode_ExtFuncCall >(lib,"duckdb_vector_assign_string_element_len","duckdb_vector_assign_string_element_len")
		->args({"vector","index","str","str_len"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:3521:19
	makeExtern< void (*)(_duckdb_vector *,idx_t,const char *,idx_t) , duckdb_unsafe_vector_assign_string_element_len , SimNode_ExtFuncCall >(lib,"duckdb_unsafe_vector_assign_string_element_len","duckdb_unsafe_vector_assign_string_element_len")
		->args({"vector","index","str","str_len"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:3532:28
	makeExtern< _duckdb_vector * (*)(_duckdb_vector *) , duckdb_list_vector_get_child , SimNode_ExtFuncCall >(lib,"duckdb_list_vector_get_child","duckdb_list_vector_get_child")
		->args({"vector"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:3540:20
	makeExtern< idx_t (*)(_duckdb_vector *) , duckdb_list_vector_get_size , SimNode_ExtFuncCall >(lib,"duckdb_list_vector_get_size","duckdb_list_vector_get_size")
		->args({"vector"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:3552:27
	makeExtern< duckdb_state (*)(_duckdb_vector *,idx_t) , duckdb_list_vector_set_size , SimNode_ExtFuncCall >(lib,"duckdb_list_vector_set_size","duckdb_list_vector_set_size")
		->args({"vector","size"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:3564:27
	makeExtern< duckdb_state (*)(_duckdb_vector *,idx_t) , duckdb_list_vector_reserve , SimNode_ExtFuncCall >(lib,"duckdb_list_vector_reserve","duckdb_list_vector_reserve")
		->args({"vector","required_capacity"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:3574:28
	makeExtern< _duckdb_vector * (*)(_duckdb_vector *,idx_t) , duckdb_struct_vector_get_child , SimNode_ExtFuncCall >(lib,"duckdb_struct_vector_get_child","duckdb_struct_vector_get_child")
		->args({"vector","index"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:3584:28
	makeExtern< _duckdb_vector * (*)(_duckdb_vector *) , duckdb_array_vector_get_child , SimNode_ExtFuncCall >(lib,"duckdb_array_vector_get_child","duckdb_array_vector_get_child")
		->args({"vector"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:3595:19
	makeExtern< void (*)(_duckdb_vector *,_duckdb_selection_vector *,idx_t) , duckdb_slice_vector , SimNode_ExtFuncCall >(lib,"duckdb_slice_vector","duckdb_slice_vector")
		->args({"vector","sel","len"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:3610:19
	makeExtern< void (*)(_duckdb_vector *,_duckdb_vector *,_duckdb_selection_vector *,idx_t,idx_t,idx_t) , duckdb_vector_copy_sel , SimNode_ExtFuncCall >(lib,"duckdb_vector_copy_sel","duckdb_vector_copy_sel")
		->args({"src","dst","sel","src_count","src_offset","dst_offset"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:3619:19
	makeExtern< void (*)(_duckdb_vector *,_duckdb_value *) , duckdb_vector_reference_value , SimNode_ExtFuncCall >(lib,"duckdb_vector_reference_value","duckdb_vector_reference_value")
		->args({"vector","value"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:3627:19
	makeExtern< void (*)(_duckdb_vector *,_duckdb_vector *) , duckdb_vector_reference_vector , SimNode_ExtFuncCall >(lib,"duckdb_vector_reference_vector","duckdb_vector_reference_vector")
		->args({"to_vector","from_vector"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:3644:19
	makeExtern< bool (*)(unsigned long long *,idx_t) , duckdb_validity_row_is_valid , SimNode_ExtFuncCall >(lib,"duckdb_validity_row_is_valid","duckdb_validity_row_is_valid")
		->args({"validity","row"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:3656:19
	makeExtern< void (*)(unsigned long long *,idx_t,bool) , duckdb_validity_set_row_validity , SimNode_ExtFuncCall >(lib,"duckdb_validity_set_row_validity","duckdb_validity_set_row_validity")
		->args({"validity","row","valid"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:3666:19
	makeExtern< void (*)(unsigned long long *,idx_t) , duckdb_validity_set_row_invalid , SimNode_ExtFuncCall >(lib,"duckdb_validity_set_row_invalid","duckdb_validity_set_row_invalid")
		->args({"validity","row"})
		->addToModule(*this, SideEffects::worstDefault);
}
}


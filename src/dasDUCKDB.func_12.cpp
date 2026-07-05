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
void Module_dasDUCKDB::initFunctions_12() {
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:3058:34
	makeExtern< _duckdb_logical_type * (*)(DUCKDB_TYPE) , duckdb_create_logical_type , SimNode_ExtFuncCall >(lib,"duckdb_create_logical_type","duckdb_create_logical_type")
		->args({"type"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:3067:20
	makeExtern< char * (*)(_duckdb_logical_type *) , duckdb_logical_type_get_alias , SimNode_ExtFuncCall >(lib,"duckdb_logical_type_get_alias","duckdb_logical_type_get_alias")
		->args({"type"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:3075:19
	makeExtern< void (*)(_duckdb_logical_type *,const char *) , duckdb_logical_type_set_alias , SimNode_ExtFuncCall >(lib,"duckdb_logical_type_set_alias","duckdb_logical_type_set_alias")
		->args({"type","alias"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:3084:34
	makeExtern< _duckdb_logical_type * (*)(_duckdb_logical_type *) , duckdb_create_list_type , SimNode_ExtFuncCall >(lib,"duckdb_create_list_type","duckdb_create_list_type")
		->args({"type"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:3094:34
	makeExtern< _duckdb_logical_type * (*)(_duckdb_logical_type *,idx_t) , duckdb_create_array_type , SimNode_ExtFuncCall >(lib,"duckdb_create_array_type","duckdb_create_array_type")
		->args({"type","array_size"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:3104:34
	makeExtern< _duckdb_logical_type * (*)(_duckdb_logical_type *,_duckdb_logical_type *) , duckdb_create_map_type , SimNode_ExtFuncCall >(lib,"duckdb_create_map_type","duckdb_create_map_type")
		->args({"key_type","value_type"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:3115:34
	makeExtern< _duckdb_logical_type * (*)(_duckdb_logical_type **,const char **,idx_t) , duckdb_create_union_type , SimNode_ExtFuncCall >(lib,"duckdb_create_union_type","duckdb_create_union_type")
		->args({"member_types","member_names","member_count"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:3127:34
	makeExtern< _duckdb_logical_type * (*)(_duckdb_logical_type **,const char **,idx_t) , duckdb_create_struct_type , SimNode_ExtFuncCall >(lib,"duckdb_create_struct_type","duckdb_create_struct_type")
		->args({"member_types","member_names","member_count"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:3138:34
	makeExtern< _duckdb_logical_type * (*)(const char **,idx_t) , duckdb_create_enum_type , SimNode_ExtFuncCall >(lib,"duckdb_create_enum_type","duckdb_create_enum_type")
		->args({"member_names","member_count"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:3148:34
	makeExtern< _duckdb_logical_type * (*)(unsigned char,unsigned char) , duckdb_create_decimal_type , SimNode_ExtFuncCall >(lib,"duckdb_create_decimal_type","duckdb_create_decimal_type")
		->args({"width","scale"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:3156:26
	makeExtern< DUCKDB_TYPE (*)(_duckdb_logical_type *) , duckdb_get_type_id , SimNode_ExtFuncCall >(lib,"duckdb_get_type_id","duckdb_get_type_id")
		->args({"type"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:3164:22
	makeExtern< unsigned char (*)(_duckdb_logical_type *) , duckdb_decimal_width , SimNode_ExtFuncCall >(lib,"duckdb_decimal_width","duckdb_decimal_width")
		->args({"type"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:3172:22
	makeExtern< unsigned char (*)(_duckdb_logical_type *) , duckdb_decimal_scale , SimNode_ExtFuncCall >(lib,"duckdb_decimal_scale","duckdb_decimal_scale")
		->args({"type"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:3180:26
	makeExtern< DUCKDB_TYPE (*)(_duckdb_logical_type *) , duckdb_decimal_internal_type , SimNode_ExtFuncCall >(lib,"duckdb_decimal_internal_type","duckdb_decimal_internal_type")
		->args({"type"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:3188:26
	makeExtern< DUCKDB_TYPE (*)(_duckdb_logical_type *) , duckdb_enum_internal_type , SimNode_ExtFuncCall >(lib,"duckdb_enum_internal_type","duckdb_enum_internal_type")
		->args({"type"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:3196:23
	makeExtern< unsigned int (*)(_duckdb_logical_type *) , duckdb_enum_dictionary_size , SimNode_ExtFuncCall >(lib,"duckdb_enum_dictionary_size","duckdb_enum_dictionary_size")
		->args({"type"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:3207:20
	makeExtern< char * (*)(_duckdb_logical_type *,idx_t) , duckdb_enum_dictionary_value , SimNode_ExtFuncCall >(lib,"duckdb_enum_dictionary_value","duckdb_enum_dictionary_value")
		->args({"type","index"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:3216:34
	makeExtern< _duckdb_logical_type * (*)(_duckdb_logical_type *) , duckdb_list_type_child_type , SimNode_ExtFuncCall >(lib,"duckdb_list_type_child_type","duckdb_list_type_child_type")
		->args({"type"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:3226:34
	makeExtern< _duckdb_logical_type * (*)(_duckdb_logical_type *) , duckdb_array_type_child_type , SimNode_ExtFuncCall >(lib,"duckdb_array_type_child_type","duckdb_array_type_child_type")
		->args({"type"})
		->addToModule(*this, SideEffects::worstDefault);
// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:3234:20
	makeExtern< idx_t (*)(_duckdb_logical_type *) , duckdb_array_type_array_size , SimNode_ExtFuncCall >(lib,"duckdb_array_type_array_size","duckdb_array_type_array_size")
		->args({"type"})
		->addToModule(*this, SideEffects::worstDefault);
}
}


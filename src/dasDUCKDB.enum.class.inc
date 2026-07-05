// this file is generated via Daslang automatic binder
// all user modifications will be lost after this file is re-generated

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:61:14
class Enumeration_DUCKDB_TYPE : public das::Enumeration {
public:
	Enumeration_DUCKDB_TYPE() : das::Enumeration("DUCKDB_TYPE") {
		external = true;
		cppName = "DUCKDB_TYPE";
		baseType = (das::Type) das::ToBasicType<int>::type;
		addIEx("INVALID", "DUCKDB_TYPE_INVALID", int64_t(DUCKDB_TYPE::DUCKDB_TYPE_INVALID), das::LineInfo());
		addIEx("BOOLEAN", "DUCKDB_TYPE_BOOLEAN", int64_t(DUCKDB_TYPE::DUCKDB_TYPE_BOOLEAN), das::LineInfo());
		addIEx("TINYINT", "DUCKDB_TYPE_TINYINT", int64_t(DUCKDB_TYPE::DUCKDB_TYPE_TINYINT), das::LineInfo());
		addIEx("SMALLINT", "DUCKDB_TYPE_SMALLINT", int64_t(DUCKDB_TYPE::DUCKDB_TYPE_SMALLINT), das::LineInfo());
		addIEx("INTEGER", "DUCKDB_TYPE_INTEGER", int64_t(DUCKDB_TYPE::DUCKDB_TYPE_INTEGER), das::LineInfo());
		addIEx("BIGINT", "DUCKDB_TYPE_BIGINT", int64_t(DUCKDB_TYPE::DUCKDB_TYPE_BIGINT), das::LineInfo());
		addIEx("UTINYINT", "DUCKDB_TYPE_UTINYINT", int64_t(DUCKDB_TYPE::DUCKDB_TYPE_UTINYINT), das::LineInfo());
		addIEx("USMALLINT", "DUCKDB_TYPE_USMALLINT", int64_t(DUCKDB_TYPE::DUCKDB_TYPE_USMALLINT), das::LineInfo());
		addIEx("UINTEGER", "DUCKDB_TYPE_UINTEGER", int64_t(DUCKDB_TYPE::DUCKDB_TYPE_UINTEGER), das::LineInfo());
		addIEx("UBIGINT", "DUCKDB_TYPE_UBIGINT", int64_t(DUCKDB_TYPE::DUCKDB_TYPE_UBIGINT), das::LineInfo());
		addIEx("FLOAT", "DUCKDB_TYPE_FLOAT", int64_t(DUCKDB_TYPE::DUCKDB_TYPE_FLOAT), das::LineInfo());
		addIEx("DOUBLE", "DUCKDB_TYPE_DOUBLE", int64_t(DUCKDB_TYPE::DUCKDB_TYPE_DOUBLE), das::LineInfo());
		addIEx("TIMESTAMP", "DUCKDB_TYPE_TIMESTAMP", int64_t(DUCKDB_TYPE::DUCKDB_TYPE_TIMESTAMP), das::LineInfo());
		addIEx("DATE", "DUCKDB_TYPE_DATE", int64_t(DUCKDB_TYPE::DUCKDB_TYPE_DATE), das::LineInfo());
		addIEx("TIME", "DUCKDB_TYPE_TIME", int64_t(DUCKDB_TYPE::DUCKDB_TYPE_TIME), das::LineInfo());
		addIEx("INTERVAL", "DUCKDB_TYPE_INTERVAL", int64_t(DUCKDB_TYPE::DUCKDB_TYPE_INTERVAL), das::LineInfo());
		addIEx("HUGEINT", "DUCKDB_TYPE_HUGEINT", int64_t(DUCKDB_TYPE::DUCKDB_TYPE_HUGEINT), das::LineInfo());
		addIEx("UHUGEINT", "DUCKDB_TYPE_UHUGEINT", int64_t(DUCKDB_TYPE::DUCKDB_TYPE_UHUGEINT), das::LineInfo());
		addIEx("VARCHAR", "DUCKDB_TYPE_VARCHAR", int64_t(DUCKDB_TYPE::DUCKDB_TYPE_VARCHAR), das::LineInfo());
		addIEx("BLOB", "DUCKDB_TYPE_BLOB", int64_t(DUCKDB_TYPE::DUCKDB_TYPE_BLOB), das::LineInfo());
		addIEx("DECIMAL", "DUCKDB_TYPE_DECIMAL", int64_t(DUCKDB_TYPE::DUCKDB_TYPE_DECIMAL), das::LineInfo());
		addIEx("TIMESTAMP_S", "DUCKDB_TYPE_TIMESTAMP_S", int64_t(DUCKDB_TYPE::DUCKDB_TYPE_TIMESTAMP_S), das::LineInfo());
		addIEx("TIMESTAMP_MS", "DUCKDB_TYPE_TIMESTAMP_MS", int64_t(DUCKDB_TYPE::DUCKDB_TYPE_TIMESTAMP_MS), das::LineInfo());
		addIEx("TIMESTAMP_NS", "DUCKDB_TYPE_TIMESTAMP_NS", int64_t(DUCKDB_TYPE::DUCKDB_TYPE_TIMESTAMP_NS), das::LineInfo());
		addIEx("ENUM", "DUCKDB_TYPE_ENUM", int64_t(DUCKDB_TYPE::DUCKDB_TYPE_ENUM), das::LineInfo());
		addIEx("LIST", "DUCKDB_TYPE_LIST", int64_t(DUCKDB_TYPE::DUCKDB_TYPE_LIST), das::LineInfo());
		addIEx("STRUCT", "DUCKDB_TYPE_STRUCT", int64_t(DUCKDB_TYPE::DUCKDB_TYPE_STRUCT), das::LineInfo());
		addIEx("MAP", "DUCKDB_TYPE_MAP", int64_t(DUCKDB_TYPE::DUCKDB_TYPE_MAP), das::LineInfo());
		addIEx("ARRAY", "DUCKDB_TYPE_ARRAY", int64_t(DUCKDB_TYPE::DUCKDB_TYPE_ARRAY), das::LineInfo());
		addIEx("UUID", "DUCKDB_TYPE_UUID", int64_t(DUCKDB_TYPE::DUCKDB_TYPE_UUID), das::LineInfo());
		addIEx("UNION", "DUCKDB_TYPE_UNION", int64_t(DUCKDB_TYPE::DUCKDB_TYPE_UNION), das::LineInfo());
		addIEx("BIT", "DUCKDB_TYPE_BIT", int64_t(DUCKDB_TYPE::DUCKDB_TYPE_BIT), das::LineInfo());
		addIEx("TIME_TZ", "DUCKDB_TYPE_TIME_TZ", int64_t(DUCKDB_TYPE::DUCKDB_TYPE_TIME_TZ), das::LineInfo());
		addIEx("TIMESTAMP_TZ", "DUCKDB_TYPE_TIMESTAMP_TZ", int64_t(DUCKDB_TYPE::DUCKDB_TYPE_TIMESTAMP_TZ), das::LineInfo());
		addIEx("ANY", "DUCKDB_TYPE_ANY", int64_t(DUCKDB_TYPE::DUCKDB_TYPE_ANY), das::LineInfo());
		addIEx("BIGNUM", "DUCKDB_TYPE_BIGNUM", int64_t(DUCKDB_TYPE::DUCKDB_TYPE_BIGNUM), das::LineInfo());
		addIEx("SQLNULL", "DUCKDB_TYPE_SQLNULL", int64_t(DUCKDB_TYPE::DUCKDB_TYPE_SQLNULL), das::LineInfo());
		addIEx("STRING_LITERAL", "DUCKDB_TYPE_STRING_LITERAL", int64_t(DUCKDB_TYPE::DUCKDB_TYPE_STRING_LITERAL), das::LineInfo());
		addIEx("INTEGER_LITERAL", "DUCKDB_TYPE_INTEGER_LITERAL", int64_t(DUCKDB_TYPE::DUCKDB_TYPE_INTEGER_LITERAL), das::LineInfo());
		addIEx("TIME_NS", "DUCKDB_TYPE_TIME_NS", int64_t(DUCKDB_TYPE::DUCKDB_TYPE_TIME_NS), das::LineInfo());
		addIEx("GEOMETRY", "DUCKDB_TYPE_GEOMETRY", int64_t(DUCKDB_TYPE::DUCKDB_TYPE_GEOMETRY), das::LineInfo());
		addIEx("VARIANT", "DUCKDB_TYPE_VARIANT", int64_t(DUCKDB_TYPE::DUCKDB_TYPE_VARIANT), das::LineInfo());
	}
};

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:148:14
class Enumeration_duckdb_state : public das::Enumeration {
public:
	Enumeration_duckdb_state() : das::Enumeration("duckdb_state") {
		external = true;
		cppName = "duckdb_state";
		baseType = (das::Type) das::ToBasicType<int>::type;
		addIEx("DuckDBSuccess", "DuckDBSuccess", int64_t(duckdb_state::DuckDBSuccess), das::LineInfo());
		addIEx("DuckDBError", "DuckDBError", int64_t(duckdb_state::DuckDBError), das::LineInfo());
	}
};

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:151:14
class Enumeration_duckdb_pending_state : public das::Enumeration {
public:
	Enumeration_duckdb_pending_state() : das::Enumeration("duckdb_pending_state") {
		external = true;
		cppName = "duckdb_pending_state";
		baseType = (das::Type) das::ToBasicType<int>::type;
		addIEx("DUCKDB_PENDING_RESULT_READY", "DUCKDB_PENDING_RESULT_READY", int64_t(duckdb_pending_state::DUCKDB_PENDING_RESULT_READY), das::LineInfo());
		addIEx("DUCKDB_PENDING_RESULT_NOT_READY", "DUCKDB_PENDING_RESULT_NOT_READY", int64_t(duckdb_pending_state::DUCKDB_PENDING_RESULT_NOT_READY), das::LineInfo());
		addIEx("DUCKDB_PENDING_ERROR", "DUCKDB_PENDING_ERROR", int64_t(duckdb_pending_state::DUCKDB_PENDING_ERROR), das::LineInfo());
		addIEx("DUCKDB_PENDING_NO_TASKS_AVAILABLE", "DUCKDB_PENDING_NO_TASKS_AVAILABLE", int64_t(duckdb_pending_state::DUCKDB_PENDING_NO_TASKS_AVAILABLE), das::LineInfo());
	}
};

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:159:14
class Enumeration_duckdb_result_type : public das::Enumeration {
public:
	Enumeration_duckdb_result_type() : das::Enumeration("duckdb_result_type") {
		external = true;
		cppName = "duckdb_result_type";
		baseType = (das::Type) das::ToBasicType<int>::type;
		addIEx("INVALID", "DUCKDB_RESULT_TYPE_INVALID", int64_t(duckdb_result_type::DUCKDB_RESULT_TYPE_INVALID), das::LineInfo());
		addIEx("CHANGED_ROWS", "DUCKDB_RESULT_TYPE_CHANGED_ROWS", int64_t(duckdb_result_type::DUCKDB_RESULT_TYPE_CHANGED_ROWS), das::LineInfo());
		addIEx("NOTHING", "DUCKDB_RESULT_TYPE_NOTHING", int64_t(duckdb_result_type::DUCKDB_RESULT_TYPE_NOTHING), das::LineInfo());
		addIEx("QUERY_RESULT", "DUCKDB_RESULT_TYPE_QUERY_RESULT", int64_t(duckdb_result_type::DUCKDB_RESULT_TYPE_QUERY_RESULT), das::LineInfo());
	}
};

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:167:14
class Enumeration_duckdb_statement_type : public das::Enumeration {
public:
	Enumeration_duckdb_statement_type() : das::Enumeration("duckdb_statement_type") {
		external = true;
		cppName = "duckdb_statement_type";
		baseType = (das::Type) das::ToBasicType<int>::type;
		addIEx("INVALID", "DUCKDB_STATEMENT_TYPE_INVALID", int64_t(duckdb_statement_type::DUCKDB_STATEMENT_TYPE_INVALID), das::LineInfo());
		addIEx("SELECT", "DUCKDB_STATEMENT_TYPE_SELECT", int64_t(duckdb_statement_type::DUCKDB_STATEMENT_TYPE_SELECT), das::LineInfo());
		addIEx("INSERT", "DUCKDB_STATEMENT_TYPE_INSERT", int64_t(duckdb_statement_type::DUCKDB_STATEMENT_TYPE_INSERT), das::LineInfo());
		addIEx("UPDATE", "DUCKDB_STATEMENT_TYPE_UPDATE", int64_t(duckdb_statement_type::DUCKDB_STATEMENT_TYPE_UPDATE), das::LineInfo());
		addIEx("EXPLAIN", "DUCKDB_STATEMENT_TYPE_EXPLAIN", int64_t(duckdb_statement_type::DUCKDB_STATEMENT_TYPE_EXPLAIN), das::LineInfo());
		addIEx("DELETE", "DUCKDB_STATEMENT_TYPE_DELETE", int64_t(duckdb_statement_type::DUCKDB_STATEMENT_TYPE_DELETE), das::LineInfo());
		addIEx("PREPARE", "DUCKDB_STATEMENT_TYPE_PREPARE", int64_t(duckdb_statement_type::DUCKDB_STATEMENT_TYPE_PREPARE), das::LineInfo());
		addIEx("CREATE", "DUCKDB_STATEMENT_TYPE_CREATE", int64_t(duckdb_statement_type::DUCKDB_STATEMENT_TYPE_CREATE), das::LineInfo());
		addIEx("EXECUTE", "DUCKDB_STATEMENT_TYPE_EXECUTE", int64_t(duckdb_statement_type::DUCKDB_STATEMENT_TYPE_EXECUTE), das::LineInfo());
		addIEx("ALTER", "DUCKDB_STATEMENT_TYPE_ALTER", int64_t(duckdb_statement_type::DUCKDB_STATEMENT_TYPE_ALTER), das::LineInfo());
		addIEx("TRANSACTION", "DUCKDB_STATEMENT_TYPE_TRANSACTION", int64_t(duckdb_statement_type::DUCKDB_STATEMENT_TYPE_TRANSACTION), das::LineInfo());
		addIEx("COPY", "DUCKDB_STATEMENT_TYPE_COPY", int64_t(duckdb_statement_type::DUCKDB_STATEMENT_TYPE_COPY), das::LineInfo());
		addIEx("ANALYZE", "DUCKDB_STATEMENT_TYPE_ANALYZE", int64_t(duckdb_statement_type::DUCKDB_STATEMENT_TYPE_ANALYZE), das::LineInfo());
		addIEx("VARIABLE_SET", "DUCKDB_STATEMENT_TYPE_VARIABLE_SET", int64_t(duckdb_statement_type::DUCKDB_STATEMENT_TYPE_VARIABLE_SET), das::LineInfo());
		addIEx("CREATE_FUNC", "DUCKDB_STATEMENT_TYPE_CREATE_FUNC", int64_t(duckdb_statement_type::DUCKDB_STATEMENT_TYPE_CREATE_FUNC), das::LineInfo());
		addIEx("DROP", "DUCKDB_STATEMENT_TYPE_DROP", int64_t(duckdb_statement_type::DUCKDB_STATEMENT_TYPE_DROP), das::LineInfo());
		addIEx("EXPORT", "DUCKDB_STATEMENT_TYPE_EXPORT", int64_t(duckdb_statement_type::DUCKDB_STATEMENT_TYPE_EXPORT), das::LineInfo());
		addIEx("PRAGMA", "DUCKDB_STATEMENT_TYPE_PRAGMA", int64_t(duckdb_statement_type::DUCKDB_STATEMENT_TYPE_PRAGMA), das::LineInfo());
		addIEx("VACUUM", "DUCKDB_STATEMENT_TYPE_VACUUM", int64_t(duckdb_statement_type::DUCKDB_STATEMENT_TYPE_VACUUM), das::LineInfo());
		addIEx("CALL", "DUCKDB_STATEMENT_TYPE_CALL", int64_t(duckdb_statement_type::DUCKDB_STATEMENT_TYPE_CALL), das::LineInfo());
		addIEx("SET", "DUCKDB_STATEMENT_TYPE_SET", int64_t(duckdb_statement_type::DUCKDB_STATEMENT_TYPE_SET), das::LineInfo());
		addIEx("LOAD", "DUCKDB_STATEMENT_TYPE_LOAD", int64_t(duckdb_statement_type::DUCKDB_STATEMENT_TYPE_LOAD), das::LineInfo());
		addIEx("RELATION", "DUCKDB_STATEMENT_TYPE_RELATION", int64_t(duckdb_statement_type::DUCKDB_STATEMENT_TYPE_RELATION), das::LineInfo());
		addIEx("EXTENSION", "DUCKDB_STATEMENT_TYPE_EXTENSION", int64_t(duckdb_statement_type::DUCKDB_STATEMENT_TYPE_EXTENSION), das::LineInfo());
		addIEx("LOGICAL_PLAN", "DUCKDB_STATEMENT_TYPE_LOGICAL_PLAN", int64_t(duckdb_statement_type::DUCKDB_STATEMENT_TYPE_LOGICAL_PLAN), das::LineInfo());
		addIEx("ATTACH", "DUCKDB_STATEMENT_TYPE_ATTACH", int64_t(duckdb_statement_type::DUCKDB_STATEMENT_TYPE_ATTACH), das::LineInfo());
		addIEx("DETACH", "DUCKDB_STATEMENT_TYPE_DETACH", int64_t(duckdb_statement_type::DUCKDB_STATEMENT_TYPE_DETACH), das::LineInfo());
		addIEx("MULTI", "DUCKDB_STATEMENT_TYPE_MULTI", int64_t(duckdb_statement_type::DUCKDB_STATEMENT_TYPE_MULTI), das::LineInfo());
	}
};

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:199:14
class Enumeration_duckdb_error_type : public das::Enumeration {
public:
	Enumeration_duckdb_error_type() : das::Enumeration("duckdb_error_type") {
		external = true;
		cppName = "duckdb_error_type";
		baseType = (das::Type) das::ToBasicType<int>::type;
		addIEx("DUCKDB_ERROR_INVALID", "DUCKDB_ERROR_INVALID", int64_t(duckdb_error_type::DUCKDB_ERROR_INVALID), das::LineInfo());
		addIEx("DUCKDB_ERROR_OUT_OF_RANGE", "DUCKDB_ERROR_OUT_OF_RANGE", int64_t(duckdb_error_type::DUCKDB_ERROR_OUT_OF_RANGE), das::LineInfo());
		addIEx("DUCKDB_ERROR_CONVERSION", "DUCKDB_ERROR_CONVERSION", int64_t(duckdb_error_type::DUCKDB_ERROR_CONVERSION), das::LineInfo());
		addIEx("DUCKDB_ERROR_UNKNOWN_TYPE", "DUCKDB_ERROR_UNKNOWN_TYPE", int64_t(duckdb_error_type::DUCKDB_ERROR_UNKNOWN_TYPE), das::LineInfo());
		addIEx("DUCKDB_ERROR_DECIMAL", "DUCKDB_ERROR_DECIMAL", int64_t(duckdb_error_type::DUCKDB_ERROR_DECIMAL), das::LineInfo());
		addIEx("DUCKDB_ERROR_MISMATCH_TYPE", "DUCKDB_ERROR_MISMATCH_TYPE", int64_t(duckdb_error_type::DUCKDB_ERROR_MISMATCH_TYPE), das::LineInfo());
		addIEx("DUCKDB_ERROR_DIVIDE_BY_ZERO", "DUCKDB_ERROR_DIVIDE_BY_ZERO", int64_t(duckdb_error_type::DUCKDB_ERROR_DIVIDE_BY_ZERO), das::LineInfo());
		addIEx("DUCKDB_ERROR_OBJECT_SIZE", "DUCKDB_ERROR_OBJECT_SIZE", int64_t(duckdb_error_type::DUCKDB_ERROR_OBJECT_SIZE), das::LineInfo());
		addIEx("DUCKDB_ERROR_INVALID_TYPE", "DUCKDB_ERROR_INVALID_TYPE", int64_t(duckdb_error_type::DUCKDB_ERROR_INVALID_TYPE), das::LineInfo());
		addIEx("DUCKDB_ERROR_SERIALIZATION", "DUCKDB_ERROR_SERIALIZATION", int64_t(duckdb_error_type::DUCKDB_ERROR_SERIALIZATION), das::LineInfo());
		addIEx("DUCKDB_ERROR_TRANSACTION", "DUCKDB_ERROR_TRANSACTION", int64_t(duckdb_error_type::DUCKDB_ERROR_TRANSACTION), das::LineInfo());
		addIEx("DUCKDB_ERROR_NOT_IMPLEMENTED", "DUCKDB_ERROR_NOT_IMPLEMENTED", int64_t(duckdb_error_type::DUCKDB_ERROR_NOT_IMPLEMENTED), das::LineInfo());
		addIEx("DUCKDB_ERROR_EXPRESSION", "DUCKDB_ERROR_EXPRESSION", int64_t(duckdb_error_type::DUCKDB_ERROR_EXPRESSION), das::LineInfo());
		addIEx("DUCKDB_ERROR_CATALOG", "DUCKDB_ERROR_CATALOG", int64_t(duckdb_error_type::DUCKDB_ERROR_CATALOG), das::LineInfo());
		addIEx("DUCKDB_ERROR_PARSER", "DUCKDB_ERROR_PARSER", int64_t(duckdb_error_type::DUCKDB_ERROR_PARSER), das::LineInfo());
		addIEx("DUCKDB_ERROR_PLANNER", "DUCKDB_ERROR_PLANNER", int64_t(duckdb_error_type::DUCKDB_ERROR_PLANNER), das::LineInfo());
		addIEx("DUCKDB_ERROR_SCHEDULER", "DUCKDB_ERROR_SCHEDULER", int64_t(duckdb_error_type::DUCKDB_ERROR_SCHEDULER), das::LineInfo());
		addIEx("DUCKDB_ERROR_EXECUTOR", "DUCKDB_ERROR_EXECUTOR", int64_t(duckdb_error_type::DUCKDB_ERROR_EXECUTOR), das::LineInfo());
		addIEx("DUCKDB_ERROR_CONSTRAINT", "DUCKDB_ERROR_CONSTRAINT", int64_t(duckdb_error_type::DUCKDB_ERROR_CONSTRAINT), das::LineInfo());
		addIEx("DUCKDB_ERROR_INDEX", "DUCKDB_ERROR_INDEX", int64_t(duckdb_error_type::DUCKDB_ERROR_INDEX), das::LineInfo());
		addIEx("DUCKDB_ERROR_STAT", "DUCKDB_ERROR_STAT", int64_t(duckdb_error_type::DUCKDB_ERROR_STAT), das::LineInfo());
		addIEx("DUCKDB_ERROR_CONNECTION", "DUCKDB_ERROR_CONNECTION", int64_t(duckdb_error_type::DUCKDB_ERROR_CONNECTION), das::LineInfo());
		addIEx("DUCKDB_ERROR_SYNTAX", "DUCKDB_ERROR_SYNTAX", int64_t(duckdb_error_type::DUCKDB_ERROR_SYNTAX), das::LineInfo());
		addIEx("DUCKDB_ERROR_SETTINGS", "DUCKDB_ERROR_SETTINGS", int64_t(duckdb_error_type::DUCKDB_ERROR_SETTINGS), das::LineInfo());
		addIEx("DUCKDB_ERROR_BINDER", "DUCKDB_ERROR_BINDER", int64_t(duckdb_error_type::DUCKDB_ERROR_BINDER), das::LineInfo());
		addIEx("DUCKDB_ERROR_NETWORK", "DUCKDB_ERROR_NETWORK", int64_t(duckdb_error_type::DUCKDB_ERROR_NETWORK), das::LineInfo());
		addIEx("DUCKDB_ERROR_OPTIMIZER", "DUCKDB_ERROR_OPTIMIZER", int64_t(duckdb_error_type::DUCKDB_ERROR_OPTIMIZER), das::LineInfo());
		addIEx("DUCKDB_ERROR_NULL_POINTER", "DUCKDB_ERROR_NULL_POINTER", int64_t(duckdb_error_type::DUCKDB_ERROR_NULL_POINTER), das::LineInfo());
		addIEx("DUCKDB_ERROR_IO", "DUCKDB_ERROR_IO", int64_t(duckdb_error_type::DUCKDB_ERROR_IO), das::LineInfo());
		addIEx("DUCKDB_ERROR_INTERRUPT", "DUCKDB_ERROR_INTERRUPT", int64_t(duckdb_error_type::DUCKDB_ERROR_INTERRUPT), das::LineInfo());
		addIEx("DUCKDB_ERROR_FATAL", "DUCKDB_ERROR_FATAL", int64_t(duckdb_error_type::DUCKDB_ERROR_FATAL), das::LineInfo());
		addIEx("DUCKDB_ERROR_INTERNAL", "DUCKDB_ERROR_INTERNAL", int64_t(duckdb_error_type::DUCKDB_ERROR_INTERNAL), das::LineInfo());
		addIEx("DUCKDB_ERROR_INVALID_INPUT", "DUCKDB_ERROR_INVALID_INPUT", int64_t(duckdb_error_type::DUCKDB_ERROR_INVALID_INPUT), das::LineInfo());
		addIEx("DUCKDB_ERROR_OUT_OF_MEMORY", "DUCKDB_ERROR_OUT_OF_MEMORY", int64_t(duckdb_error_type::DUCKDB_ERROR_OUT_OF_MEMORY), das::LineInfo());
		addIEx("DUCKDB_ERROR_PERMISSION", "DUCKDB_ERROR_PERMISSION", int64_t(duckdb_error_type::DUCKDB_ERROR_PERMISSION), das::LineInfo());
		addIEx("DUCKDB_ERROR_PARAMETER_NOT_RESOLVED", "DUCKDB_ERROR_PARAMETER_NOT_RESOLVED", int64_t(duckdb_error_type::DUCKDB_ERROR_PARAMETER_NOT_RESOLVED), das::LineInfo());
		addIEx("DUCKDB_ERROR_PARAMETER_NOT_ALLOWED", "DUCKDB_ERROR_PARAMETER_NOT_ALLOWED", int64_t(duckdb_error_type::DUCKDB_ERROR_PARAMETER_NOT_ALLOWED), das::LineInfo());
		addIEx("DUCKDB_ERROR_DEPENDENCY", "DUCKDB_ERROR_DEPENDENCY", int64_t(duckdb_error_type::DUCKDB_ERROR_DEPENDENCY), das::LineInfo());
		addIEx("DUCKDB_ERROR_HTTP", "DUCKDB_ERROR_HTTP", int64_t(duckdb_error_type::DUCKDB_ERROR_HTTP), das::LineInfo());
		addIEx("DUCKDB_ERROR_MISSING_EXTENSION", "DUCKDB_ERROR_MISSING_EXTENSION", int64_t(duckdb_error_type::DUCKDB_ERROR_MISSING_EXTENSION), das::LineInfo());
		addIEx("DUCKDB_ERROR_AUTOLOAD", "DUCKDB_ERROR_AUTOLOAD", int64_t(duckdb_error_type::DUCKDB_ERROR_AUTOLOAD), das::LineInfo());
		addIEx("DUCKDB_ERROR_SEQUENCE", "DUCKDB_ERROR_SEQUENCE", int64_t(duckdb_error_type::DUCKDB_ERROR_SEQUENCE), das::LineInfo());
		addIEx("DUCKDB_INVALID_CONFIGURATION", "DUCKDB_INVALID_CONFIGURATION", int64_t(duckdb_error_type::DUCKDB_INVALID_CONFIGURATION), das::LineInfo());
	}
};

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:246:14
class Enumeration_duckdb_cast_mode : public das::Enumeration {
public:
	Enumeration_duckdb_cast_mode() : das::Enumeration("duckdb_cast_mode") {
		external = true;
		cppName = "duckdb_cast_mode";
		baseType = (das::Type) das::ToBasicType<int>::type;
		addIEx("DUCKDB_CAST_NORMAL", "DUCKDB_CAST_NORMAL", int64_t(duckdb_cast_mode::DUCKDB_CAST_NORMAL), das::LineInfo());
		addIEx("DUCKDB_CAST_TRY", "DUCKDB_CAST_TRY", int64_t(duckdb_cast_mode::DUCKDB_CAST_TRY), das::LineInfo());
	}
};

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:248:14
class Enumeration_duckdb_file_flag : public das::Enumeration {
public:
	Enumeration_duckdb_file_flag() : das::Enumeration("duckdb_file_flag") {
		external = true;
		cppName = "duckdb_file_flag";
		baseType = (das::Type) das::ToBasicType<int>::type;
		addIEx("INVALID", "DUCKDB_FILE_FLAG_INVALID", int64_t(duckdb_file_flag::DUCKDB_FILE_FLAG_INVALID), das::LineInfo());
		addIEx("READ", "DUCKDB_FILE_FLAG_READ", int64_t(duckdb_file_flag::DUCKDB_FILE_FLAG_READ), das::LineInfo());
		addIEx("WRITE", "DUCKDB_FILE_FLAG_WRITE", int64_t(duckdb_file_flag::DUCKDB_FILE_FLAG_WRITE), das::LineInfo());
		addIEx("CREATE", "DUCKDB_FILE_FLAG_CREATE", int64_t(duckdb_file_flag::DUCKDB_FILE_FLAG_CREATE), das::LineInfo());
		addIEx("CREATE_NEW", "DUCKDB_FILE_FLAG_CREATE_NEW", int64_t(duckdb_file_flag::DUCKDB_FILE_FLAG_CREATE_NEW), das::LineInfo());
		addIEx("APPEND", "DUCKDB_FILE_FLAG_APPEND", int64_t(duckdb_file_flag::DUCKDB_FILE_FLAG_APPEND), das::LineInfo());
	}
};

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:266:14
class Enumeration_duckdb_config_option_scope : public das::Enumeration {
public:
	Enumeration_duckdb_config_option_scope() : das::Enumeration("duckdb_config_option_scope") {
		external = true;
		cppName = "duckdb_config_option_scope";
		baseType = (das::Type) das::ToBasicType<int>::type;
		addIEx("INVALID", "DUCKDB_CONFIG_OPTION_SCOPE_INVALID", int64_t(duckdb_config_option_scope::DUCKDB_CONFIG_OPTION_SCOPE_INVALID), das::LineInfo());
		addIEx("LOCAL", "DUCKDB_CONFIG_OPTION_SCOPE_LOCAL", int64_t(duckdb_config_option_scope::DUCKDB_CONFIG_OPTION_SCOPE_LOCAL), das::LineInfo());
		addIEx("SESSION", "DUCKDB_CONFIG_OPTION_SCOPE_SESSION", int64_t(duckdb_config_option_scope::DUCKDB_CONFIG_OPTION_SCOPE_SESSION), das::LineInfo());
		addIEx("GLOBAL", "DUCKDB_CONFIG_OPTION_SCOPE_GLOBAL", int64_t(duckdb_config_option_scope::DUCKDB_CONFIG_OPTION_SCOPE_GLOBAL), das::LineInfo());
	}
};

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:278:14
class Enumeration_duckdb_catalog_entry_type : public das::Enumeration {
public:
	Enumeration_duckdb_catalog_entry_type() : das::Enumeration("duckdb_catalog_entry_type") {
		external = true;
		cppName = "duckdb_catalog_entry_type";
		baseType = (das::Type) das::ToBasicType<int>::type;
		addIEx("INVALID", "DUCKDB_CATALOG_ENTRY_TYPE_INVALID", int64_t(duckdb_catalog_entry_type::DUCKDB_CATALOG_ENTRY_TYPE_INVALID), das::LineInfo());
		addIEx("TABLE", "DUCKDB_CATALOG_ENTRY_TYPE_TABLE", int64_t(duckdb_catalog_entry_type::DUCKDB_CATALOG_ENTRY_TYPE_TABLE), das::LineInfo());
		addIEx("SCHEMA", "DUCKDB_CATALOG_ENTRY_TYPE_SCHEMA", int64_t(duckdb_catalog_entry_type::DUCKDB_CATALOG_ENTRY_TYPE_SCHEMA), das::LineInfo());
		addIEx("VIEW", "DUCKDB_CATALOG_ENTRY_TYPE_VIEW", int64_t(duckdb_catalog_entry_type::DUCKDB_CATALOG_ENTRY_TYPE_VIEW), das::LineInfo());
		addIEx("INDEX", "DUCKDB_CATALOG_ENTRY_TYPE_INDEX", int64_t(duckdb_catalog_entry_type::DUCKDB_CATALOG_ENTRY_TYPE_INDEX), das::LineInfo());
		addIEx("PREPARED_STATEMENT", "DUCKDB_CATALOG_ENTRY_TYPE_PREPARED_STATEMENT", int64_t(duckdb_catalog_entry_type::DUCKDB_CATALOG_ENTRY_TYPE_PREPARED_STATEMENT), das::LineInfo());
		addIEx("SEQUENCE", "DUCKDB_CATALOG_ENTRY_TYPE_SEQUENCE", int64_t(duckdb_catalog_entry_type::DUCKDB_CATALOG_ENTRY_TYPE_SEQUENCE), das::LineInfo());
		addIEx("COLLATION", "DUCKDB_CATALOG_ENTRY_TYPE_COLLATION", int64_t(duckdb_catalog_entry_type::DUCKDB_CATALOG_ENTRY_TYPE_COLLATION), das::LineInfo());
		addIEx("TYPE", "DUCKDB_CATALOG_ENTRY_TYPE_TYPE", int64_t(duckdb_catalog_entry_type::DUCKDB_CATALOG_ENTRY_TYPE_TYPE), das::LineInfo());
		addIEx("DATABASE", "DUCKDB_CATALOG_ENTRY_TYPE_DATABASE", int64_t(duckdb_catalog_entry_type::DUCKDB_CATALOG_ENTRY_TYPE_DATABASE), das::LineInfo());
	}
};


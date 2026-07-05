// this file is generated via Daslang automatic binder
// all user modifications will be lost after this file is re-generated

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:318:9
struct duckdb_date_GeneratedAnnotation : ManagedStructureAnnotation<duckdb_date> {
	duckdb_date_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("duckdb_date", ml, "duckdb_date") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(days)>("days","days");
	}
};

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:322:9
struct duckdb_date_struct_GeneratedAnnotation : ManagedStructureAnnotation<duckdb_date_struct> {
	duckdb_date_struct_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("duckdb_date_struct", ml, "duckdb_date_struct") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(year)>("year","year");
		addField<DAS_BIND_MANAGED_FIELD(month)>("month","month");
		addField<DAS_BIND_MANAGED_FIELD(day)>("day","day");
	}
};

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:330:9
struct duckdb_time_GeneratedAnnotation : ManagedStructureAnnotation<duckdb_time> {
	duckdb_time_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("duckdb_time", ml, "duckdb_time") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(micros)>("micros","micros");
	}
};

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:334:9
struct duckdb_time_struct_GeneratedAnnotation : ManagedStructureAnnotation<duckdb_time_struct> {
	duckdb_time_struct_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("duckdb_time_struct", ml, "duckdb_time_struct") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(hour)>("hour","hour");
		addField<DAS_BIND_MANAGED_FIELD(min)>("min","min");
		addField<DAS_BIND_MANAGED_FIELD(sec)>("sec","sec");
		addField<DAS_BIND_MANAGED_FIELD(micros)>("micros","micros");
	}
};

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:342:9
struct duckdb_time_ns_GeneratedAnnotation : ManagedStructureAnnotation<duckdb_time_ns> {
	duckdb_time_ns_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("duckdb_time_ns", ml, "duckdb_time_ns") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(nanos)>("nanos","nanos");
	}
};

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:348:9
struct duckdb_time_tz_GeneratedAnnotation : ManagedStructureAnnotation<duckdb_time_tz> {
	duckdb_time_tz_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("duckdb_time_tz", ml, "duckdb_time_tz") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(bits)>("bits","bits");
	}
};

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:352:9
struct duckdb_time_tz_struct_GeneratedAnnotation : ManagedStructureAnnotation<duckdb_time_tz_struct> {
	duckdb_time_tz_struct_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("duckdb_time_tz_struct", ml, "duckdb_time_tz_struct") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(time)>("time","time");
		addField<DAS_BIND_MANAGED_FIELD(offset)>("offset","offset");
	}
};

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:359:9
struct duckdb_timestamp_GeneratedAnnotation : ManagedStructureAnnotation<duckdb_timestamp> {
	duckdb_timestamp_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("duckdb_timestamp", ml, "duckdb_timestamp") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(micros)>("micros","micros");
	}
};

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:363:9
struct duckdb_timestamp_struct_GeneratedAnnotation : ManagedStructureAnnotation<duckdb_timestamp_struct> {
	duckdb_timestamp_struct_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("duckdb_timestamp_struct", ml, "duckdb_timestamp_struct") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(date)>("date","date");
		addField<DAS_BIND_MANAGED_FIELD(time)>("time","time");
	}
};

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:369:9
struct duckdb_timestamp_s_GeneratedAnnotation : ManagedStructureAnnotation<duckdb_timestamp_s> {
	duckdb_timestamp_s_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("duckdb_timestamp_s", ml, "duckdb_timestamp_s") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(seconds)>("seconds","seconds");
	}
};

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:374:9
struct duckdb_timestamp_ms_GeneratedAnnotation : ManagedStructureAnnotation<duckdb_timestamp_ms> {
	duckdb_timestamp_ms_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("duckdb_timestamp_ms", ml, "duckdb_timestamp_ms") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(millis)>("millis","millis");
	}
};

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:379:9
struct duckdb_timestamp_ns_GeneratedAnnotation : ManagedStructureAnnotation<duckdb_timestamp_ns> {
	duckdb_timestamp_ns_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("duckdb_timestamp_ns", ml, "duckdb_timestamp_ns") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(nanos)>("nanos","nanos");
	}
};

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:384:9
struct duckdb_interval_GeneratedAnnotation : ManagedStructureAnnotation<duckdb_interval> {
	duckdb_interval_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("duckdb_interval", ml, "duckdb_interval") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(months)>("months","months");
		addField<DAS_BIND_MANAGED_FIELD(days)>("days","days");
		addField<DAS_BIND_MANAGED_FIELD(micros)>("micros","micros");
	}
};

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:393:9
struct duckdb_hugeint_GeneratedAnnotation : ManagedStructureAnnotation<duckdb_hugeint> {
	duckdb_hugeint_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("duckdb_hugeint", ml, "duckdb_hugeint") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(lower)>("lower","lower");
		addField<DAS_BIND_MANAGED_FIELD(upper)>("upper","upper");
	}
};

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:401:9
struct duckdb_uhugeint_GeneratedAnnotation : ManagedStructureAnnotation<duckdb_uhugeint> {
	duckdb_uhugeint_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("duckdb_uhugeint", ml, "duckdb_uhugeint") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(lower)>("lower","lower");
		addField<DAS_BIND_MANAGED_FIELD(upper)>("upper","upper");
	}
};

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:408:9
struct duckdb_decimal_GeneratedAnnotation : ManagedStructureAnnotation<duckdb_decimal> {
	duckdb_decimal_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("duckdb_decimal", ml, "duckdb_decimal") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(width)>("width","width");
		addField<DAS_BIND_MANAGED_FIELD(scale)>("scale","scale");
		addField<DAS_BIND_MANAGED_FIELD(value)>("value","value");
	}
};

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:415:9
struct duckdb_query_progress_type_GeneratedAnnotation : ManagedStructureAnnotation<duckdb_query_progress_type> {
	duckdb_query_progress_type_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("duckdb_query_progress_type", ml, "duckdb_query_progress_type") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(percentage)>("percentage","percentage");
		addField<DAS_BIND_MANAGED_FIELD(rows_processed)>("rows_processed","rows_processed");
		addField<DAS_BIND_MANAGED_FIELD(total_rows_to_process)>("total_rows_to_process","total_rows_to_process");
	}
};

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:443:9
struct duckdb_list_entry_GeneratedAnnotation : ManagedStructureAnnotation<duckdb_list_entry> {
	duckdb_list_entry_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("duckdb_list_entry", ml, "duckdb_list_entry") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(offset)>("offset","offset");
		addField<DAS_BIND_MANAGED_FIELD(length)>("length","length");
	}
};

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:451:9
struct duckdb_column_GeneratedAnnotation : ManagedStructureAnnotation<duckdb_column> {
	duckdb_column_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("duckdb_column", ml, "duckdb_column") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(deprecated_data)>("deprecated_data","deprecated_data");
		addField<DAS_BIND_MANAGED_FIELD(deprecated_nullmask)>("deprecated_nullmask","deprecated_nullmask");
		addField<DAS_BIND_MANAGED_FIELD(deprecated_type)>("deprecated_type","deprecated_type");
		addField<DAS_BIND_MANAGED_FIELD(deprecated_name)>("deprecated_name","deprecated_name");
		addField<DAS_BIND_MANAGED_FIELD(internal_data)>("internal_data","internal_data");
	}
};

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:465:16
struct _duckdb_vector_GeneratedAnnotation : ManagedStructureAnnotation<_duckdb_vector> {
	_duckdb_vector_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("_duckdb_vector", ml, "_duckdb_vector") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(internal_ptr)>("internal_ptr","internal_ptr");
	}
};

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:472:16
struct _duckdb_selection_vector_GeneratedAnnotation : ManagedStructureAnnotation<_duckdb_selection_vector> {
	_duckdb_selection_vector_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("_duckdb_selection_vector", ml, "_duckdb_selection_vector") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(internal_ptr)>("internal_ptr","internal_ptr");
	}
};

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:482:9
struct duckdb_string_GeneratedAnnotation : ManagedStructureAnnotation<duckdb_string> {
	duckdb_string_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("duckdb_string", ml, "duckdb_string") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(data)>("data","data");
		addField<DAS_BIND_MANAGED_FIELD(size)>("size","size");
	}
};

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:489:9
struct duckdb_blob_GeneratedAnnotation : ManagedStructureAnnotation<duckdb_blob> {
	virtual bool isLocal() const override { return true; }
	virtual bool canBePlacedInContainer() const override { return true; }
	duckdb_blob_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("duckdb_blob", ml, "duckdb_blob") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(data)>("data","data");
		addField<DAS_BIND_MANAGED_FIELD(size)>("size","size");
	}
};

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:499:9
struct duckdb_bit_GeneratedAnnotation : ManagedStructureAnnotation<duckdb_bit> {
	duckdb_bit_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("duckdb_bit", ml, "duckdb_bit") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(data)>("data","data");
		addField<DAS_BIND_MANAGED_FIELD(size)>("size","size");
	}
};

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:507:9
struct duckdb_bignum_GeneratedAnnotation : ManagedStructureAnnotation<duckdb_bignum> {
	duckdb_bignum_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("duckdb_bignum", ml, "duckdb_bignum") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(data)>("data","data");
		addField<DAS_BIND_MANAGED_FIELD(size)>("size","size");
		addField<DAS_BIND_MANAGED_FIELD(is_negative)>("is_negative","is_negative");
	}
};

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:515:9
struct duckdb_result_GeneratedAnnotation : ManagedStructureAnnotation<duckdb_result> {
	virtual bool isLocal() const override { return true; }
	virtual bool canBePlacedInContainer() const override { return true; }
	duckdb_result_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("duckdb_result", ml, "duckdb_result") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(deprecated_column_count)>("deprecated_column_count","deprecated_column_count");
		addField<DAS_BIND_MANAGED_FIELD(deprecated_row_count)>("deprecated_row_count","deprecated_row_count");
		addField<DAS_BIND_MANAGED_FIELD(deprecated_rows_changed)>("deprecated_rows_changed","deprecated_rows_changed");
		addField<DAS_BIND_MANAGED_FIELD(deprecated_columns)>("deprecated_columns","deprecated_columns");
		addField<DAS_BIND_MANAGED_FIELD(deprecated_error_message)>("deprecated_error_message","deprecated_error_message");
		addField<DAS_BIND_MANAGED_FIELD(internal_data)>("internal_data","internal_data");
	}
};

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:530:16
struct _duckdb_instance_cache_GeneratedAnnotation : ManagedStructureAnnotation<_duckdb_instance_cache> {
	_duckdb_instance_cache_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("_duckdb_instance_cache", ml, "_duckdb_instance_cache") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(internal_ptr)>("internal_ptr","internal_ptr");
	}
};

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:535:16
struct _duckdb_database_GeneratedAnnotation : ManagedStructureAnnotation<_duckdb_database> {
	_duckdb_database_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("_duckdb_database", ml, "_duckdb_database") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(internal_ptr)>("internal_ptr","internal_ptr");
	}
};

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:540:16
struct _duckdb_connection_GeneratedAnnotation : ManagedStructureAnnotation<_duckdb_connection> {
	_duckdb_connection_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("_duckdb_connection", ml, "_duckdb_connection") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(internal_ptr)>("internal_ptr","internal_ptr");
	}
};

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:545:16
struct _duckdb_client_context_GeneratedAnnotation : ManagedStructureAnnotation<_duckdb_client_context> {
	_duckdb_client_context_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("_duckdb_client_context", ml, "_duckdb_client_context") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(internal_ptr)>("internal_ptr","internal_ptr");
	}
};

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:551:16
struct _duckdb_prepared_statement_GeneratedAnnotation : ManagedStructureAnnotation<_duckdb_prepared_statement> {
	_duckdb_prepared_statement_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("_duckdb_prepared_statement", ml, "_duckdb_prepared_statement") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(internal_ptr)>("internal_ptr","internal_ptr");
	}
};

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:556:16
struct _duckdb_extracted_statements_GeneratedAnnotation : ManagedStructureAnnotation<_duckdb_extracted_statements> {
	_duckdb_extracted_statements_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("_duckdb_extracted_statements", ml, "_duckdb_extracted_statements") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(internal_ptr)>("internal_ptr","internal_ptr");
	}
};

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:562:16
struct _duckdb_pending_result_GeneratedAnnotation : ManagedStructureAnnotation<_duckdb_pending_result> {
	_duckdb_pending_result_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("_duckdb_pending_result", ml, "_duckdb_pending_result") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(internal_ptr)>("internal_ptr","internal_ptr");
	}
};

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:568:16
struct _duckdb_appender_GeneratedAnnotation : ManagedStructureAnnotation<_duckdb_appender> {
	_duckdb_appender_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("_duckdb_appender", ml, "_duckdb_appender") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(internal_ptr)>("internal_ptr","internal_ptr");
	}
};

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:574:16
struct _duckdb_table_description_GeneratedAnnotation : ManagedStructureAnnotation<_duckdb_table_description> {
	_duckdb_table_description_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("_duckdb_table_description", ml, "_duckdb_table_description") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(internal_ptr)>("internal_ptr","internal_ptr");
	}
};

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:580:16
struct _duckdb_config_GeneratedAnnotation : ManagedStructureAnnotation<_duckdb_config> {
	_duckdb_config_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("_duckdb_config", ml, "_duckdb_config") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(internal_ptr)>("internal_ptr","internal_ptr");
	}
};

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:586:16
struct _duckdb_config_option_GeneratedAnnotation : ManagedStructureAnnotation<_duckdb_config_option> {
	_duckdb_config_option_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("_duckdb_config_option", ml, "_duckdb_config_option") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(internal_ptr)>("internal_ptr","internal_ptr");
	}
};

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:592:16
struct _duckdb_logical_type_GeneratedAnnotation : ManagedStructureAnnotation<_duckdb_logical_type> {
	_duckdb_logical_type_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("_duckdb_logical_type", ml, "_duckdb_logical_type") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(internal_ptr)>("internal_ptr","internal_ptr");
	}
};

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:598:16
struct _duckdb_create_type_info_GeneratedAnnotation : ManagedStructureAnnotation<_duckdb_create_type_info> {
	_duckdb_create_type_info_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("_duckdb_create_type_info", ml, "_duckdb_create_type_info") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(internal_ptr)>("internal_ptr","internal_ptr");
	}
};

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:604:16
struct _duckdb_data_chunk_GeneratedAnnotation : ManagedStructureAnnotation<_duckdb_data_chunk> {
	_duckdb_data_chunk_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("_duckdb_data_chunk", ml, "_duckdb_data_chunk") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(internal_ptr)>("internal_ptr","internal_ptr");
	}
};

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:610:16
struct _duckdb_value_GeneratedAnnotation : ManagedStructureAnnotation<_duckdb_value> {
	_duckdb_value_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("_duckdb_value", ml, "_duckdb_value") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(internal_ptr)>("internal_ptr","internal_ptr");
	}
};

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:616:16
struct _duckdb_profiling_info_GeneratedAnnotation : ManagedStructureAnnotation<_duckdb_profiling_info> {
	_duckdb_profiling_info_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("_duckdb_profiling_info", ml, "_duckdb_profiling_info") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(internal_ptr)>("internal_ptr","internal_ptr");
	}
};

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:622:16
struct _duckdb_error_data_GeneratedAnnotation : ManagedStructureAnnotation<_duckdb_error_data> {
	_duckdb_error_data_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("_duckdb_error_data", ml, "_duckdb_error_data") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(internal_ptr)>("internal_ptr","internal_ptr");
	}
};

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:628:16
struct _duckdb_expression_GeneratedAnnotation : ManagedStructureAnnotation<_duckdb_expression> {
	_duckdb_expression_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("_duckdb_expression", ml, "_duckdb_expression") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(internal_ptr)>("internal_ptr","internal_ptr");
	}
};

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:637:16
struct _duckdb_extension_info_GeneratedAnnotation : ManagedStructureAnnotation<_duckdb_extension_info> {
	_duckdb_extension_info_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("_duckdb_extension_info", ml, "_duckdb_extension_info") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(internal_ptr)>("internal_ptr","internal_ptr");
	}
};

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:647:16
struct _duckdb_function_info_GeneratedAnnotation : ManagedStructureAnnotation<_duckdb_function_info> {
	_duckdb_function_info_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("_duckdb_function_info", ml, "_duckdb_function_info") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(internal_ptr)>("internal_ptr","internal_ptr");
	}
};

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:653:16
struct _duckdb_bind_info_GeneratedAnnotation : ManagedStructureAnnotation<_duckdb_bind_info> {
	_duckdb_bind_info_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("_duckdb_bind_info", ml, "_duckdb_bind_info") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(internal_ptr)>("internal_ptr","internal_ptr");
	}
};

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:659:16
struct _duckdb_init_info_GeneratedAnnotation : ManagedStructureAnnotation<_duckdb_init_info> {
	_duckdb_init_info_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("_duckdb_init_info", ml, "_duckdb_init_info") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(internal_ptr)>("internal_ptr","internal_ptr");
	}
};

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:668:16
struct _duckdb_scalar_function_GeneratedAnnotation : ManagedStructureAnnotation<_duckdb_scalar_function> {
	_duckdb_scalar_function_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("_duckdb_scalar_function", ml, "_duckdb_scalar_function") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(internal_ptr)>("internal_ptr","internal_ptr");
	}
};

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:673:16
struct _duckdb_scalar_function_set_GeneratedAnnotation : ManagedStructureAnnotation<_duckdb_scalar_function_set> {
	_duckdb_scalar_function_set_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("_duckdb_scalar_function_set", ml, "_duckdb_scalar_function_set") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(internal_ptr)>("internal_ptr","internal_ptr");
	}
};

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:691:16
struct _duckdb_aggregate_function_GeneratedAnnotation : ManagedStructureAnnotation<_duckdb_aggregate_function> {
	_duckdb_aggregate_function_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("_duckdb_aggregate_function", ml, "_duckdb_aggregate_function") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(internal_ptr)>("internal_ptr","internal_ptr");
	}
};

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:696:16
struct _duckdb_aggregate_function_set_GeneratedAnnotation : ManagedStructureAnnotation<_duckdb_aggregate_function_set> {
	_duckdb_aggregate_function_set_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("_duckdb_aggregate_function_set", ml, "_duckdb_aggregate_function_set") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(internal_ptr)>("internal_ptr","internal_ptr");
	}
};

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:701:16
struct _duckdb_aggregate_state_GeneratedAnnotation : ManagedStructureAnnotation<_duckdb_aggregate_state> {
	_duckdb_aggregate_state_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("_duckdb_aggregate_state", ml, "_duckdb_aggregate_state") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(internal_ptr)>("internal_ptr","internal_ptr");
	}
};

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:731:16
struct _duckdb_table_function_GeneratedAnnotation : ManagedStructureAnnotation<_duckdb_table_function> {
	_duckdb_table_function_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("_duckdb_table_function", ml, "_duckdb_table_function") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(internal_ptr)>("internal_ptr","internal_ptr");
	}
};

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:749:16
struct _duckdb_copy_function_GeneratedAnnotation : ManagedStructureAnnotation<_duckdb_copy_function> {
	_duckdb_copy_function_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("_duckdb_copy_function", ml, "_duckdb_copy_function") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(internal_ptr)>("internal_ptr","internal_ptr");
	}
};

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:754:16
struct _duckdb_copy_function_bind_info_GeneratedAnnotation : ManagedStructureAnnotation<_duckdb_copy_function_bind_info> {
	_duckdb_copy_function_bind_info_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("_duckdb_copy_function_bind_info", ml, "_duckdb_copy_function_bind_info") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(internal_ptr)>("internal_ptr","internal_ptr");
	}
};

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:759:16
struct _duckdb_copy_function_global_init_info_GeneratedAnnotation : ManagedStructureAnnotation<_duckdb_copy_function_global_init_info> {
	_duckdb_copy_function_global_init_info_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("_duckdb_copy_function_global_init_info", ml, "_duckdb_copy_function_global_init_info") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(internal_ptr)>("internal_ptr","internal_ptr");
	}
};

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:764:16
struct _duckdb_copy_function_sink_info_GeneratedAnnotation : ManagedStructureAnnotation<_duckdb_copy_function_sink_info> {
	_duckdb_copy_function_sink_info_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("_duckdb_copy_function_sink_info", ml, "_duckdb_copy_function_sink_info") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(internal_ptr)>("internal_ptr","internal_ptr");
	}
};

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:769:16
struct _duckdb_copy_function_finalize_info_GeneratedAnnotation : ManagedStructureAnnotation<_duckdb_copy_function_finalize_info> {
	_duckdb_copy_function_finalize_info_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("_duckdb_copy_function_finalize_info", ml, "_duckdb_copy_function_finalize_info") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(internal_ptr)>("internal_ptr","internal_ptr");
	}
};

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:790:16
struct _duckdb_cast_function_GeneratedAnnotation : ManagedStructureAnnotation<_duckdb_cast_function> {
	_duckdb_cast_function_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("_duckdb_cast_function", ml, "_duckdb_cast_function") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(internal_ptr)>("internal_ptr","internal_ptr");
	}
};

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:803:16
struct _duckdb_replacement_scan_info_GeneratedAnnotation : ManagedStructureAnnotation<_duckdb_replacement_scan_info> {
	_duckdb_replacement_scan_info_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("_duckdb_replacement_scan_info", ml, "_duckdb_replacement_scan_info") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(internal_ptr)>("internal_ptr","internal_ptr");
	}
};

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:823:16
struct _duckdb_arrow_GeneratedAnnotation : ManagedStructureAnnotation<_duckdb_arrow> {
	_duckdb_arrow_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("_duckdb_arrow", ml, "_duckdb_arrow") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(internal_ptr)>("internal_ptr","internal_ptr");
	}
};

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:828:16
struct _duckdb_arrow_stream_GeneratedAnnotation : ManagedStructureAnnotation<_duckdb_arrow_stream> {
	_duckdb_arrow_stream_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("_duckdb_arrow_stream", ml, "_duckdb_arrow_stream") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(internal_ptr)>("internal_ptr","internal_ptr");
	}
};

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:833:16
struct _duckdb_arrow_schema_GeneratedAnnotation : ManagedStructureAnnotation<_duckdb_arrow_schema> {
	_duckdb_arrow_schema_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("_duckdb_arrow_schema", ml, "_duckdb_arrow_schema") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(internal_ptr)>("internal_ptr","internal_ptr");
	}
};

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:841:16
struct _duckdb_arrow_converted_schema_GeneratedAnnotation : ManagedStructureAnnotation<_duckdb_arrow_converted_schema> {
	_duckdb_arrow_converted_schema_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("_duckdb_arrow_converted_schema", ml, "_duckdb_arrow_converted_schema") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(internal_ptr)>("internal_ptr","internal_ptr");
	}
};

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:846:16
struct _duckdb_arrow_array_GeneratedAnnotation : ManagedStructureAnnotation<_duckdb_arrow_array> {
	_duckdb_arrow_array_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("_duckdb_arrow_array", ml, "_duckdb_arrow_array") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(internal_ptr)>("internal_ptr","internal_ptr");
	}
};

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:852:16
struct _duckdb_arrow_options_GeneratedAnnotation : ManagedStructureAnnotation<_duckdb_arrow_options> {
	_duckdb_arrow_options_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("_duckdb_arrow_options", ml, "_duckdb_arrow_options") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(internal_ptr)>("internal_ptr","internal_ptr");
	}
};

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:860:16
struct _duckdb_file_open_options_GeneratedAnnotation : ManagedStructureAnnotation<_duckdb_file_open_options> {
	_duckdb_file_open_options_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("_duckdb_file_open_options", ml, "_duckdb_file_open_options") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(internal_ptr)>("internal_ptr","internal_ptr");
	}
};

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:864:16
struct _duckdb_file_system_GeneratedAnnotation : ManagedStructureAnnotation<_duckdb_file_system> {
	_duckdb_file_system_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("_duckdb_file_system", ml, "_duckdb_file_system") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(internal_ptr)>("internal_ptr","internal_ptr");
	}
};

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:868:16
struct _duckdb_file_handle_GeneratedAnnotation : ManagedStructureAnnotation<_duckdb_file_handle> {
	_duckdb_file_handle_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("_duckdb_file_handle", ml, "_duckdb_file_handle") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(internal_ptr)>("internal_ptr","internal_ptr");
	}
};

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:878:16
struct _duckdb_catalog_GeneratedAnnotation : ManagedStructureAnnotation<_duckdb_catalog> {
	_duckdb_catalog_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("_duckdb_catalog", ml, "_duckdb_catalog") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(internal_ptr)>("internal_ptr","internal_ptr");
	}
};

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:884:16
struct _duckdb_catalog_entry_GeneratedAnnotation : ManagedStructureAnnotation<_duckdb_catalog_entry> {
	_duckdb_catalog_entry_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("_duckdb_catalog_entry", ml, "_duckdb_catalog_entry") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(internal_ptr)>("internal_ptr","internal_ptr");
	}
};

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:893:16
struct _duckdb_log_storage_GeneratedAnnotation : ManagedStructureAnnotation<_duckdb_log_storage> {
	_duckdb_log_storage_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("_duckdb_log_storage", ml, "_duckdb_log_storage") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(internal_ptr)>("internal_ptr","internal_ptr");
	}
};

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:906:8
struct duckdb_extension_access_GeneratedAnnotation : ManagedStructureAnnotation<duckdb_extension_access> {
	duckdb_extension_access_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("duckdb_extension_access", ml, "duckdb_extension_access") {
	}
	void init () {
	}
};


// this file is generated via Daslang automatic binder
// all user modifications will be lost after this file is re-generated

template <> struct cast_arg<duckdb_date> {
	static __forceinline const duckdb_date & to ( Context & ctx, SimNode * node ) {
		vec4f res = node->eval(ctx);
		return * cast<duckdb_date *>::to(res);
	}
};
template <> struct cast_arg<duckdb_date_struct> {
	static __forceinline const duckdb_date_struct & to ( Context & ctx, SimNode * node ) {
		vec4f res = node->eval(ctx);
		return * cast<duckdb_date_struct *>::to(res);
	}
};
template <> struct cast_arg<duckdb_time> {
	static __forceinline const duckdb_time & to ( Context & ctx, SimNode * node ) {
		vec4f res = node->eval(ctx);
		return * cast<duckdb_time *>::to(res);
	}
};
template <> struct cast_arg<duckdb_time_struct> {
	static __forceinline const duckdb_time_struct & to ( Context & ctx, SimNode * node ) {
		vec4f res = node->eval(ctx);
		return * cast<duckdb_time_struct *>::to(res);
	}
};
template <> struct cast_arg<duckdb_time_ns> {
	static __forceinline const duckdb_time_ns & to ( Context & ctx, SimNode * node ) {
		vec4f res = node->eval(ctx);
		return * cast<duckdb_time_ns *>::to(res);
	}
};
template <> struct cast_arg<duckdb_time_tz> {
	static __forceinline const duckdb_time_tz & to ( Context & ctx, SimNode * node ) {
		vec4f res = node->eval(ctx);
		return * cast<duckdb_time_tz *>::to(res);
	}
};
template <> struct cast_arg<duckdb_time_tz_struct> {
	static __forceinline const duckdb_time_tz_struct & to ( Context & ctx, SimNode * node ) {
		vec4f res = node->eval(ctx);
		return * cast<duckdb_time_tz_struct *>::to(res);
	}
};
template <> struct cast_arg<duckdb_timestamp> {
	static __forceinline const duckdb_timestamp & to ( Context & ctx, SimNode * node ) {
		vec4f res = node->eval(ctx);
		return * cast<duckdb_timestamp *>::to(res);
	}
};
template <> struct cast_arg<duckdb_timestamp_struct> {
	static __forceinline const duckdb_timestamp_struct & to ( Context & ctx, SimNode * node ) {
		vec4f res = node->eval(ctx);
		return * cast<duckdb_timestamp_struct *>::to(res);
	}
};
template <> struct cast_arg<duckdb_timestamp_s> {
	static __forceinline const duckdb_timestamp_s & to ( Context & ctx, SimNode * node ) {
		vec4f res = node->eval(ctx);
		return * cast<duckdb_timestamp_s *>::to(res);
	}
};
template <> struct cast_arg<duckdb_timestamp_ms> {
	static __forceinline const duckdb_timestamp_ms & to ( Context & ctx, SimNode * node ) {
		vec4f res = node->eval(ctx);
		return * cast<duckdb_timestamp_ms *>::to(res);
	}
};
template <> struct cast_arg<duckdb_timestamp_ns> {
	static __forceinline const duckdb_timestamp_ns & to ( Context & ctx, SimNode * node ) {
		vec4f res = node->eval(ctx);
		return * cast<duckdb_timestamp_ns *>::to(res);
	}
};
template <> struct cast_arg<duckdb_interval> {
	static __forceinline const duckdb_interval & to ( Context & ctx, SimNode * node ) {
		vec4f res = node->eval(ctx);
		return * cast<duckdb_interval *>::to(res);
	}
};
template <> struct cast_arg<duckdb_hugeint> {
	static __forceinline const duckdb_hugeint & to ( Context & ctx, SimNode * node ) {
		vec4f res = node->eval(ctx);
		return * cast<duckdb_hugeint *>::to(res);
	}
};
template <> struct cast_arg<duckdb_uhugeint> {
	static __forceinline const duckdb_uhugeint & to ( Context & ctx, SimNode * node ) {
		vec4f res = node->eval(ctx);
		return * cast<duckdb_uhugeint *>::to(res);
	}
};
template <> struct cast_arg<duckdb_decimal> {
	static __forceinline const duckdb_decimal & to ( Context & ctx, SimNode * node ) {
		vec4f res = node->eval(ctx);
		return * cast<duckdb_decimal *>::to(res);
	}
};
template <> struct cast_arg<duckdb_query_progress_type> {
	static __forceinline const duckdb_query_progress_type & to ( Context & ctx, SimNode * node ) {
		vec4f res = node->eval(ctx);
		return * cast<duckdb_query_progress_type *>::to(res);
	}
};
template <> struct cast_arg<duckdb_list_entry> {
	static __forceinline const duckdb_list_entry & to ( Context & ctx, SimNode * node ) {
		vec4f res = node->eval(ctx);
		return * cast<duckdb_list_entry *>::to(res);
	}
};
template <> struct cast_arg<duckdb_column> {
	static __forceinline const duckdb_column & to ( Context & ctx, SimNode * node ) {
		vec4f res = node->eval(ctx);
		return * cast<duckdb_column *>::to(res);
	}
};
template <> struct cast_arg<_duckdb_vector> {
	static __forceinline const _duckdb_vector & to ( Context & ctx, SimNode * node ) {
		vec4f res = node->eval(ctx);
		return * cast<_duckdb_vector *>::to(res);
	}
};
template <> struct cast_arg<_duckdb_selection_vector> {
	static __forceinline const _duckdb_selection_vector & to ( Context & ctx, SimNode * node ) {
		vec4f res = node->eval(ctx);
		return * cast<_duckdb_selection_vector *>::to(res);
	}
};
template <> struct cast_arg<duckdb_string> {
	static __forceinline const duckdb_string & to ( Context & ctx, SimNode * node ) {
		vec4f res = node->eval(ctx);
		return * cast<duckdb_string *>::to(res);
	}
};
template <> struct cast_arg<duckdb_blob> {
	static __forceinline const duckdb_blob & to ( Context & ctx, SimNode * node ) {
		vec4f res = node->eval(ctx);
		return * cast<duckdb_blob *>::to(res);
	}
};
template <> struct cast_arg<duckdb_bit> {
	static __forceinline const duckdb_bit & to ( Context & ctx, SimNode * node ) {
		vec4f res = node->eval(ctx);
		return * cast<duckdb_bit *>::to(res);
	}
};
template <> struct cast_arg<duckdb_bignum> {
	static __forceinline const duckdb_bignum & to ( Context & ctx, SimNode * node ) {
		vec4f res = node->eval(ctx);
		return * cast<duckdb_bignum *>::to(res);
	}
};
template <> struct cast_arg<duckdb_result> {
	static __forceinline const duckdb_result & to ( Context & ctx, SimNode * node ) {
		vec4f res = node->eval(ctx);
		return * cast<duckdb_result *>::to(res);
	}
};
template <> struct cast_arg<_duckdb_instance_cache> {
	static __forceinline const _duckdb_instance_cache & to ( Context & ctx, SimNode * node ) {
		vec4f res = node->eval(ctx);
		return * cast<_duckdb_instance_cache *>::to(res);
	}
};
template <> struct cast_arg<_duckdb_database> {
	static __forceinline const _duckdb_database & to ( Context & ctx, SimNode * node ) {
		vec4f res = node->eval(ctx);
		return * cast<_duckdb_database *>::to(res);
	}
};
template <> struct cast_arg<_duckdb_connection> {
	static __forceinline const _duckdb_connection & to ( Context & ctx, SimNode * node ) {
		vec4f res = node->eval(ctx);
		return * cast<_duckdb_connection *>::to(res);
	}
};
template <> struct cast_arg<_duckdb_client_context> {
	static __forceinline const _duckdb_client_context & to ( Context & ctx, SimNode * node ) {
		vec4f res = node->eval(ctx);
		return * cast<_duckdb_client_context *>::to(res);
	}
};
template <> struct cast_arg<_duckdb_prepared_statement> {
	static __forceinline const _duckdb_prepared_statement & to ( Context & ctx, SimNode * node ) {
		vec4f res = node->eval(ctx);
		return * cast<_duckdb_prepared_statement *>::to(res);
	}
};
template <> struct cast_arg<_duckdb_extracted_statements> {
	static __forceinline const _duckdb_extracted_statements & to ( Context & ctx, SimNode * node ) {
		vec4f res = node->eval(ctx);
		return * cast<_duckdb_extracted_statements *>::to(res);
	}
};
template <> struct cast_arg<_duckdb_pending_result> {
	static __forceinline const _duckdb_pending_result & to ( Context & ctx, SimNode * node ) {
		vec4f res = node->eval(ctx);
		return * cast<_duckdb_pending_result *>::to(res);
	}
};
template <> struct cast_arg<_duckdb_appender> {
	static __forceinline const _duckdb_appender & to ( Context & ctx, SimNode * node ) {
		vec4f res = node->eval(ctx);
		return * cast<_duckdb_appender *>::to(res);
	}
};
template <> struct cast_arg<_duckdb_table_description> {
	static __forceinline const _duckdb_table_description & to ( Context & ctx, SimNode * node ) {
		vec4f res = node->eval(ctx);
		return * cast<_duckdb_table_description *>::to(res);
	}
};
template <> struct cast_arg<_duckdb_config> {
	static __forceinline const _duckdb_config & to ( Context & ctx, SimNode * node ) {
		vec4f res = node->eval(ctx);
		return * cast<_duckdb_config *>::to(res);
	}
};
template <> struct cast_arg<_duckdb_config_option> {
	static __forceinline const _duckdb_config_option & to ( Context & ctx, SimNode * node ) {
		vec4f res = node->eval(ctx);
		return * cast<_duckdb_config_option *>::to(res);
	}
};
template <> struct cast_arg<_duckdb_logical_type> {
	static __forceinline const _duckdb_logical_type & to ( Context & ctx, SimNode * node ) {
		vec4f res = node->eval(ctx);
		return * cast<_duckdb_logical_type *>::to(res);
	}
};
template <> struct cast_arg<_duckdb_create_type_info> {
	static __forceinline const _duckdb_create_type_info & to ( Context & ctx, SimNode * node ) {
		vec4f res = node->eval(ctx);
		return * cast<_duckdb_create_type_info *>::to(res);
	}
};
template <> struct cast_arg<_duckdb_data_chunk> {
	static __forceinline const _duckdb_data_chunk & to ( Context & ctx, SimNode * node ) {
		vec4f res = node->eval(ctx);
		return * cast<_duckdb_data_chunk *>::to(res);
	}
};
template <> struct cast_arg<_duckdb_value> {
	static __forceinline const _duckdb_value & to ( Context & ctx, SimNode * node ) {
		vec4f res = node->eval(ctx);
		return * cast<_duckdb_value *>::to(res);
	}
};
template <> struct cast_arg<_duckdb_profiling_info> {
	static __forceinline const _duckdb_profiling_info & to ( Context & ctx, SimNode * node ) {
		vec4f res = node->eval(ctx);
		return * cast<_duckdb_profiling_info *>::to(res);
	}
};
template <> struct cast_arg<_duckdb_error_data> {
	static __forceinline const _duckdb_error_data & to ( Context & ctx, SimNode * node ) {
		vec4f res = node->eval(ctx);
		return * cast<_duckdb_error_data *>::to(res);
	}
};
template <> struct cast_arg<_duckdb_expression> {
	static __forceinline const _duckdb_expression & to ( Context & ctx, SimNode * node ) {
		vec4f res = node->eval(ctx);
		return * cast<_duckdb_expression *>::to(res);
	}
};
template <> struct cast_arg<_duckdb_extension_info> {
	static __forceinline const _duckdb_extension_info & to ( Context & ctx, SimNode * node ) {
		vec4f res = node->eval(ctx);
		return * cast<_duckdb_extension_info *>::to(res);
	}
};
template <> struct cast_arg<_duckdb_function_info> {
	static __forceinline const _duckdb_function_info & to ( Context & ctx, SimNode * node ) {
		vec4f res = node->eval(ctx);
		return * cast<_duckdb_function_info *>::to(res);
	}
};
template <> struct cast_arg<_duckdb_bind_info> {
	static __forceinline const _duckdb_bind_info & to ( Context & ctx, SimNode * node ) {
		vec4f res = node->eval(ctx);
		return * cast<_duckdb_bind_info *>::to(res);
	}
};
template <> struct cast_arg<_duckdb_init_info> {
	static __forceinline const _duckdb_init_info & to ( Context & ctx, SimNode * node ) {
		vec4f res = node->eval(ctx);
		return * cast<_duckdb_init_info *>::to(res);
	}
};
template <> struct cast_arg<_duckdb_scalar_function> {
	static __forceinline const _duckdb_scalar_function & to ( Context & ctx, SimNode * node ) {
		vec4f res = node->eval(ctx);
		return * cast<_duckdb_scalar_function *>::to(res);
	}
};
template <> struct cast_arg<_duckdb_scalar_function_set> {
	static __forceinline const _duckdb_scalar_function_set & to ( Context & ctx, SimNode * node ) {
		vec4f res = node->eval(ctx);
		return * cast<_duckdb_scalar_function_set *>::to(res);
	}
};
template <> struct cast_arg<_duckdb_aggregate_function> {
	static __forceinline const _duckdb_aggregate_function & to ( Context & ctx, SimNode * node ) {
		vec4f res = node->eval(ctx);
		return * cast<_duckdb_aggregate_function *>::to(res);
	}
};
template <> struct cast_arg<_duckdb_aggregate_function_set> {
	static __forceinline const _duckdb_aggregate_function_set & to ( Context & ctx, SimNode * node ) {
		vec4f res = node->eval(ctx);
		return * cast<_duckdb_aggregate_function_set *>::to(res);
	}
};
template <> struct cast_arg<_duckdb_aggregate_state> {
	static __forceinline const _duckdb_aggregate_state & to ( Context & ctx, SimNode * node ) {
		vec4f res = node->eval(ctx);
		return * cast<_duckdb_aggregate_state *>::to(res);
	}
};
template <> struct cast_arg<_duckdb_table_function> {
	static __forceinline const _duckdb_table_function & to ( Context & ctx, SimNode * node ) {
		vec4f res = node->eval(ctx);
		return * cast<_duckdb_table_function *>::to(res);
	}
};
template <> struct cast_arg<_duckdb_copy_function> {
	static __forceinline const _duckdb_copy_function & to ( Context & ctx, SimNode * node ) {
		vec4f res = node->eval(ctx);
		return * cast<_duckdb_copy_function *>::to(res);
	}
};
template <> struct cast_arg<_duckdb_copy_function_bind_info> {
	static __forceinline const _duckdb_copy_function_bind_info & to ( Context & ctx, SimNode * node ) {
		vec4f res = node->eval(ctx);
		return * cast<_duckdb_copy_function_bind_info *>::to(res);
	}
};
template <> struct cast_arg<_duckdb_copy_function_global_init_info> {
	static __forceinline const _duckdb_copy_function_global_init_info & to ( Context & ctx, SimNode * node ) {
		vec4f res = node->eval(ctx);
		return * cast<_duckdb_copy_function_global_init_info *>::to(res);
	}
};
template <> struct cast_arg<_duckdb_copy_function_sink_info> {
	static __forceinline const _duckdb_copy_function_sink_info & to ( Context & ctx, SimNode * node ) {
		vec4f res = node->eval(ctx);
		return * cast<_duckdb_copy_function_sink_info *>::to(res);
	}
};
template <> struct cast_arg<_duckdb_copy_function_finalize_info> {
	static __forceinline const _duckdb_copy_function_finalize_info & to ( Context & ctx, SimNode * node ) {
		vec4f res = node->eval(ctx);
		return * cast<_duckdb_copy_function_finalize_info *>::to(res);
	}
};
template <> struct cast_arg<_duckdb_cast_function> {
	static __forceinline const _duckdb_cast_function & to ( Context & ctx, SimNode * node ) {
		vec4f res = node->eval(ctx);
		return * cast<_duckdb_cast_function *>::to(res);
	}
};
template <> struct cast_arg<_duckdb_replacement_scan_info> {
	static __forceinline const _duckdb_replacement_scan_info & to ( Context & ctx, SimNode * node ) {
		vec4f res = node->eval(ctx);
		return * cast<_duckdb_replacement_scan_info *>::to(res);
	}
};
template <> struct cast_arg<_duckdb_arrow> {
	static __forceinline const _duckdb_arrow & to ( Context & ctx, SimNode * node ) {
		vec4f res = node->eval(ctx);
		return * cast<_duckdb_arrow *>::to(res);
	}
};
template <> struct cast_arg<_duckdb_arrow_stream> {
	static __forceinline const _duckdb_arrow_stream & to ( Context & ctx, SimNode * node ) {
		vec4f res = node->eval(ctx);
		return * cast<_duckdb_arrow_stream *>::to(res);
	}
};
template <> struct cast_arg<_duckdb_arrow_schema> {
	static __forceinline const _duckdb_arrow_schema & to ( Context & ctx, SimNode * node ) {
		vec4f res = node->eval(ctx);
		return * cast<_duckdb_arrow_schema *>::to(res);
	}
};
template <> struct cast_arg<_duckdb_arrow_converted_schema> {
	static __forceinline const _duckdb_arrow_converted_schema & to ( Context & ctx, SimNode * node ) {
		vec4f res = node->eval(ctx);
		return * cast<_duckdb_arrow_converted_schema *>::to(res);
	}
};
template <> struct cast_arg<_duckdb_arrow_array> {
	static __forceinline const _duckdb_arrow_array & to ( Context & ctx, SimNode * node ) {
		vec4f res = node->eval(ctx);
		return * cast<_duckdb_arrow_array *>::to(res);
	}
};
template <> struct cast_arg<_duckdb_arrow_options> {
	static __forceinline const _duckdb_arrow_options & to ( Context & ctx, SimNode * node ) {
		vec4f res = node->eval(ctx);
		return * cast<_duckdb_arrow_options *>::to(res);
	}
};
template <> struct cast_arg<_duckdb_file_open_options> {
	static __forceinline const _duckdb_file_open_options & to ( Context & ctx, SimNode * node ) {
		vec4f res = node->eval(ctx);
		return * cast<_duckdb_file_open_options *>::to(res);
	}
};
template <> struct cast_arg<_duckdb_file_system> {
	static __forceinline const _duckdb_file_system & to ( Context & ctx, SimNode * node ) {
		vec4f res = node->eval(ctx);
		return * cast<_duckdb_file_system *>::to(res);
	}
};
template <> struct cast_arg<_duckdb_file_handle> {
	static __forceinline const _duckdb_file_handle & to ( Context & ctx, SimNode * node ) {
		vec4f res = node->eval(ctx);
		return * cast<_duckdb_file_handle *>::to(res);
	}
};
template <> struct cast_arg<_duckdb_catalog> {
	static __forceinline const _duckdb_catalog & to ( Context & ctx, SimNode * node ) {
		vec4f res = node->eval(ctx);
		return * cast<_duckdb_catalog *>::to(res);
	}
};
template <> struct cast_arg<_duckdb_catalog_entry> {
	static __forceinline const _duckdb_catalog_entry & to ( Context & ctx, SimNode * node ) {
		vec4f res = node->eval(ctx);
		return * cast<_duckdb_catalog_entry *>::to(res);
	}
};
template <> struct cast_arg<_duckdb_log_storage> {
	static __forceinline const _duckdb_log_storage & to ( Context & ctx, SimNode * node ) {
		vec4f res = node->eval(ctx);
		return * cast<_duckdb_log_storage *>::to(res);
	}
};
template <> struct cast_arg<duckdb_extension_access> {
	static __forceinline const duckdb_extension_access & to ( Context & ctx, SimNode * node ) {
		vec4f res = node->eval(ctx);
		return * cast<duckdb_extension_access *>::to(res);
	}
};

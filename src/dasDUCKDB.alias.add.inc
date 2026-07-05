// this file is generated via Daslang automatic binder
// all user modifications will be lost after this file is re-generated

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:296:18
auto alias_idx_t = typeFactory<unsigned long long>::make(lib);
alias_idx_t->alias = "idx_t";
addAlias(alias_idx_t);

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:299:18
auto alias_sel_t = typeFactory<unsigned int>::make(lib);
alias_sel_t->alias = "sel_t";
addAlias(alias_sel_t);

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:303:16
auto alias_duckdb_delete_callback_t = typeFactory<void (*)(void *)>::make(lib);
alias_duckdb_delete_callback_t->alias = "duckdb_delete_callback_t";
addAlias(alias_duckdb_delete_callback_t);

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:306:17
auto alias_duckdb_copy_callback_t = typeFactory<void *(*)(void *)>::make(lib);
alias_duckdb_copy_callback_t->alias = "duckdb_copy_callback_t";
addAlias(alias_duckdb_copy_callback_t);

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:310:15
auto alias_duckdb_task_state = typeFactory<void *>::make(lib);
alias_duckdb_task_state->alias = "duckdb_task_state";
addAlias(alias_duckdb_task_state);

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:467:5
auto alias_duckdb_vector = typeFactory<_duckdb_vector *>::make(lib);
alias_duckdb_vector->alias = "duckdb_vector";
addAlias(alias_duckdb_vector);

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:474:5
auto alias_duckdb_selection_vector = typeFactory<_duckdb_selection_vector *>::make(lib);
alias_duckdb_selection_vector->alias = "duckdb_selection_vector";
addAlias(alias_duckdb_selection_vector);

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:532:5
auto alias_duckdb_instance_cache = typeFactory<_duckdb_instance_cache *>::make(lib);
alias_duckdb_instance_cache->alias = "duckdb_instance_cache";
addAlias(alias_duckdb_instance_cache);

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:537:5
auto alias_duckdb_database = typeFactory<_duckdb_database *>::make(lib);
alias_duckdb_database->alias = "duckdb_database";
addAlias(alias_duckdb_database);

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:542:5
auto alias_duckdb_connection = typeFactory<_duckdb_connection *>::make(lib);
alias_duckdb_connection->alias = "duckdb_connection";
addAlias(alias_duckdb_connection);

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:547:5
auto alias_duckdb_client_context = typeFactory<_duckdb_client_context *>::make(lib);
alias_duckdb_client_context->alias = "duckdb_client_context";
addAlias(alias_duckdb_client_context);

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:553:5
auto alias_duckdb_prepared_statement = typeFactory<_duckdb_prepared_statement *>::make(lib);
alias_duckdb_prepared_statement->alias = "duckdb_prepared_statement";
addAlias(alias_duckdb_prepared_statement);

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:558:5
auto alias_duckdb_extracted_statements = typeFactory<_duckdb_extracted_statements *>::make(lib);
alias_duckdb_extracted_statements->alias = "duckdb_extracted_statements";
addAlias(alias_duckdb_extracted_statements);

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:564:5
auto alias_duckdb_pending_result = typeFactory<_duckdb_pending_result *>::make(lib);
alias_duckdb_pending_result->alias = "duckdb_pending_result";
addAlias(alias_duckdb_pending_result);

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:570:5
auto alias_duckdb_appender = typeFactory<_duckdb_appender *>::make(lib);
alias_duckdb_appender->alias = "duckdb_appender";
addAlias(alias_duckdb_appender);

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:576:5
auto alias_duckdb_table_description = typeFactory<_duckdb_table_description *>::make(lib);
alias_duckdb_table_description->alias = "duckdb_table_description";
addAlias(alias_duckdb_table_description);

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:582:5
auto alias_duckdb_config = typeFactory<_duckdb_config *>::make(lib);
alias_duckdb_config->alias = "duckdb_config";
addAlias(alias_duckdb_config);

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:588:5
auto alias_duckdb_config_option = typeFactory<_duckdb_config_option *>::make(lib);
alias_duckdb_config_option->alias = "duckdb_config_option";
addAlias(alias_duckdb_config_option);

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:594:5
auto alias_duckdb_logical_type = typeFactory<_duckdb_logical_type *>::make(lib);
alias_duckdb_logical_type->alias = "duckdb_logical_type";
addAlias(alias_duckdb_logical_type);

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:600:5
auto alias_duckdb_create_type_info = typeFactory<_duckdb_create_type_info *>::make(lib);
alias_duckdb_create_type_info->alias = "duckdb_create_type_info";
addAlias(alias_duckdb_create_type_info);

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:606:5
auto alias_duckdb_data_chunk = typeFactory<_duckdb_data_chunk *>::make(lib);
alias_duckdb_data_chunk->alias = "duckdb_data_chunk";
addAlias(alias_duckdb_data_chunk);

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:612:5
auto alias_duckdb_value = typeFactory<_duckdb_value *>::make(lib);
alias_duckdb_value->alias = "duckdb_value";
addAlias(alias_duckdb_value);

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:618:5
auto alias_duckdb_profiling_info = typeFactory<_duckdb_profiling_info *>::make(lib);
alias_duckdb_profiling_info->alias = "duckdb_profiling_info";
addAlias(alias_duckdb_profiling_info);

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:624:5
auto alias_duckdb_error_data = typeFactory<_duckdb_error_data *>::make(lib);
alias_duckdb_error_data->alias = "duckdb_error_data";
addAlias(alias_duckdb_error_data);

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:630:5
auto alias_duckdb_expression = typeFactory<_duckdb_expression *>::make(lib);
alias_duckdb_expression->alias = "duckdb_expression";
addAlias(alias_duckdb_expression);

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:639:5
auto alias_duckdb_extension_info = typeFactory<_duckdb_extension_info *>::make(lib);
alias_duckdb_extension_info->alias = "duckdb_extension_info";
addAlias(alias_duckdb_extension_info);

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:649:5
auto alias_duckdb_function_info = typeFactory<_duckdb_function_info *>::make(lib);
alias_duckdb_function_info->alias = "duckdb_function_info";
addAlias(alias_duckdb_function_info);

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:655:5
auto alias_duckdb_bind_info = typeFactory<_duckdb_bind_info *>::make(lib);
alias_duckdb_bind_info->alias = "duckdb_bind_info";
addAlias(alias_duckdb_bind_info);

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:661:5
auto alias_duckdb_init_info = typeFactory<_duckdb_init_info *>::make(lib);
alias_duckdb_init_info->alias = "duckdb_init_info";
addAlias(alias_duckdb_init_info);

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:670:5
auto alias_duckdb_scalar_function = typeFactory<_duckdb_scalar_function *>::make(lib);
alias_duckdb_scalar_function->alias = "duckdb_scalar_function";
addAlias(alias_duckdb_scalar_function);

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:675:5
auto alias_duckdb_scalar_function_set = typeFactory<_duckdb_scalar_function_set *>::make(lib);
alias_duckdb_scalar_function_set->alias = "duckdb_scalar_function_set";
addAlias(alias_duckdb_scalar_function_set);

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:678:16
auto alias_duckdb_scalar_function_bind_t = typeFactory<void (*)(_duckdb_bind_info *)>::make(lib);
alias_duckdb_scalar_function_bind_t->alias = "duckdb_scalar_function_bind_t";
addAlias(alias_duckdb_scalar_function_bind_t);

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:681:16
auto alias_duckdb_scalar_function_init_t = typeFactory<void (*)(_duckdb_init_info *)>::make(lib);
alias_duckdb_scalar_function_init_t->alias = "duckdb_scalar_function_init_t";
addAlias(alias_duckdb_scalar_function_init_t);

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:684:16
auto alias_duckdb_scalar_function_t = typeFactory<void (*)(_duckdb_function_info *, _duckdb_data_chunk *, _duckdb_vector *)>::make(lib);
alias_duckdb_scalar_function_t->alias = "duckdb_scalar_function_t";
addAlias(alias_duckdb_scalar_function_t);

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:693:5
auto alias_duckdb_aggregate_function = typeFactory<_duckdb_aggregate_function *>::make(lib);
alias_duckdb_aggregate_function->alias = "duckdb_aggregate_function";
addAlias(alias_duckdb_aggregate_function);

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:698:5
auto alias_duckdb_aggregate_function_set = typeFactory<_duckdb_aggregate_function_set *>::make(lib);
alias_duckdb_aggregate_function_set->alias = "duckdb_aggregate_function_set";
addAlias(alias_duckdb_aggregate_function_set);

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:703:5
auto alias_duckdb_aggregate_state = typeFactory<_duckdb_aggregate_state *>::make(lib);
alias_duckdb_aggregate_state->alias = "duckdb_aggregate_state";
addAlias(alias_duckdb_aggregate_state);

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:706:17
auto alias_duckdb_aggregate_state_size = typeFactory<unsigned long long (*)(_duckdb_function_info *)>::make(lib);
alias_duckdb_aggregate_state_size->alias = "duckdb_aggregate_state_size";
addAlias(alias_duckdb_aggregate_state_size);

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:709:16
auto alias_duckdb_aggregate_init_t = typeFactory<void (*)(_duckdb_function_info *, _duckdb_aggregate_state *)>::make(lib);
alias_duckdb_aggregate_init_t->alias = "duckdb_aggregate_init_t";
addAlias(alias_duckdb_aggregate_init_t);

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:712:16
auto alias_duckdb_aggregate_destroy_t = typeFactory<void (*)(_duckdb_aggregate_state **, unsigned long long)>::make(lib);
alias_duckdb_aggregate_destroy_t->alias = "duckdb_aggregate_destroy_t";
addAlias(alias_duckdb_aggregate_destroy_t);

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:715:16
auto alias_duckdb_aggregate_update_t = typeFactory<void (*)(_duckdb_function_info *, _duckdb_data_chunk *, _duckdb_aggregate_state **)>::make(lib);
alias_duckdb_aggregate_update_t->alias = "duckdb_aggregate_update_t";
addAlias(alias_duckdb_aggregate_update_t);

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:719:16
auto alias_duckdb_aggregate_combine_t = typeFactory<void (*)(_duckdb_function_info *, _duckdb_aggregate_state **, _duckdb_aggregate_state **, unsigned long long)>::make(lib);
alias_duckdb_aggregate_combine_t->alias = "duckdb_aggregate_combine_t";
addAlias(alias_duckdb_aggregate_combine_t);

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:723:16
auto alias_duckdb_aggregate_finalize_t = typeFactory<void (*)(_duckdb_function_info *, _duckdb_aggregate_state **, _duckdb_vector *, unsigned long long, unsigned long long)>::make(lib);
alias_duckdb_aggregate_finalize_t->alias = "duckdb_aggregate_finalize_t";
addAlias(alias_duckdb_aggregate_finalize_t);

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:733:5
auto alias_duckdb_table_function = typeFactory<_duckdb_table_function *>::make(lib);
alias_duckdb_table_function->alias = "duckdb_table_function";
addAlias(alias_duckdb_table_function);

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:736:16
auto alias_duckdb_table_function_bind_t = typeFactory<void (*)(_duckdb_bind_info *)>::make(lib);
alias_duckdb_table_function_bind_t->alias = "duckdb_table_function_bind_t";
addAlias(alias_duckdb_table_function_bind_t);

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:739:16
auto alias_duckdb_table_function_init_t = typeFactory<void (*)(_duckdb_init_info *)>::make(lib);
alias_duckdb_table_function_init_t->alias = "duckdb_table_function_init_t";
addAlias(alias_duckdb_table_function_init_t);

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:742:16
auto alias_duckdb_table_function_t = typeFactory<void (*)(_duckdb_function_info *, _duckdb_data_chunk *)>::make(lib);
alias_duckdb_table_function_t->alias = "duckdb_table_function_t";
addAlias(alias_duckdb_table_function_t);

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:751:5
auto alias_duckdb_copy_function = typeFactory<_duckdb_copy_function *>::make(lib);
alias_duckdb_copy_function->alias = "duckdb_copy_function";
addAlias(alias_duckdb_copy_function);

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:756:5
auto alias_duckdb_copy_function_bind_info = typeFactory<_duckdb_copy_function_bind_info *>::make(lib);
alias_duckdb_copy_function_bind_info->alias = "duckdb_copy_function_bind_info";
addAlias(alias_duckdb_copy_function_bind_info);

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:761:5
auto alias_duckdb_copy_function_global_init_info = typeFactory<_duckdb_copy_function_global_init_info *>::make(lib);
alias_duckdb_copy_function_global_init_info->alias = "duckdb_copy_function_global_init_info";
addAlias(alias_duckdb_copy_function_global_init_info);

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:766:5
auto alias_duckdb_copy_function_sink_info = typeFactory<_duckdb_copy_function_sink_info *>::make(lib);
alias_duckdb_copy_function_sink_info->alias = "duckdb_copy_function_sink_info";
addAlias(alias_duckdb_copy_function_sink_info);

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:771:5
auto alias_duckdb_copy_function_finalize_info = typeFactory<_duckdb_copy_function_finalize_info *>::make(lib);
alias_duckdb_copy_function_finalize_info->alias = "duckdb_copy_function_finalize_info";
addAlias(alias_duckdb_copy_function_finalize_info);

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:774:16
auto alias_duckdb_copy_function_bind_t = typeFactory<void (*)(_duckdb_copy_function_bind_info *)>::make(lib);
alias_duckdb_copy_function_bind_t->alias = "duckdb_copy_function_bind_t";
addAlias(alias_duckdb_copy_function_bind_t);

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:777:16
auto alias_duckdb_copy_function_global_init_t = typeFactory<void (*)(_duckdb_copy_function_global_init_info *)>::make(lib);
alias_duckdb_copy_function_global_init_t->alias = "duckdb_copy_function_global_init_t";
addAlias(alias_duckdb_copy_function_global_init_t);

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:780:16
auto alias_duckdb_copy_function_sink_t = typeFactory<void (*)(_duckdb_copy_function_sink_info *, _duckdb_data_chunk *)>::make(lib);
alias_duckdb_copy_function_sink_t->alias = "duckdb_copy_function_sink_t";
addAlias(alias_duckdb_copy_function_sink_t);

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:783:16
auto alias_duckdb_copy_function_finalize_t = typeFactory<void (*)(_duckdb_copy_function_finalize_info *)>::make(lib);
alias_duckdb_copy_function_finalize_t->alias = "duckdb_copy_function_finalize_t";
addAlias(alias_duckdb_copy_function_finalize_t);

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:792:5
auto alias_duckdb_cast_function = typeFactory<_duckdb_cast_function *>::make(lib);
alias_duckdb_cast_function->alias = "duckdb_cast_function";
addAlias(alias_duckdb_cast_function);

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:795:16
auto alias_duckdb_cast_function_t = typeFactory<bool (*)(_duckdb_function_info *, unsigned long long, _duckdb_vector *, _duckdb_vector *)>::make(lib);
alias_duckdb_cast_function_t->alias = "duckdb_cast_function_t";
addAlias(alias_duckdb_cast_function_t);

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:805:5
auto alias_duckdb_replacement_scan_info = typeFactory<_duckdb_replacement_scan_info *>::make(lib);
alias_duckdb_replacement_scan_info->alias = "duckdb_replacement_scan_info";
addAlias(alias_duckdb_replacement_scan_info);

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:808:16
auto alias_duckdb_replacement_callback_t = typeFactory<void (*)(_duckdb_replacement_scan_info *, const char *, void *)>::make(lib);
alias_duckdb_replacement_callback_t->alias = "duckdb_replacement_callback_t";
addAlias(alias_duckdb_replacement_callback_t);

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:825:5
auto alias_duckdb_arrow = typeFactory<_duckdb_arrow *>::make(lib);
alias_duckdb_arrow->alias = "duckdb_arrow";
addAlias(alias_duckdb_arrow);

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:830:5
auto alias_duckdb_arrow_stream = typeFactory<_duckdb_arrow_stream *>::make(lib);
alias_duckdb_arrow_stream->alias = "duckdb_arrow_stream";
addAlias(alias_duckdb_arrow_stream);

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:835:5
auto alias_duckdb_arrow_schema = typeFactory<_duckdb_arrow_schema *>::make(lib);
alias_duckdb_arrow_schema->alias = "duckdb_arrow_schema";
addAlias(alias_duckdb_arrow_schema);

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:843:5
auto alias_duckdb_arrow_converted_schema = typeFactory<_duckdb_arrow_converted_schema *>::make(lib);
alias_duckdb_arrow_converted_schema->alias = "duckdb_arrow_converted_schema";
addAlias(alias_duckdb_arrow_converted_schema);

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:848:5
auto alias_duckdb_arrow_array = typeFactory<_duckdb_arrow_array *>::make(lib);
alias_duckdb_arrow_array->alias = "duckdb_arrow_array";
addAlias(alias_duckdb_arrow_array);

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:854:5
auto alias_duckdb_arrow_options = typeFactory<_duckdb_arrow_options *>::make(lib);
alias_duckdb_arrow_options->alias = "duckdb_arrow_options";
addAlias(alias_duckdb_arrow_options);

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:862:5
auto alias_duckdb_file_open_options = typeFactory<_duckdb_file_open_options *>::make(lib);
alias_duckdb_file_open_options->alias = "duckdb_file_open_options";
addAlias(alias_duckdb_file_open_options);

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:866:5
auto alias_duckdb_file_system = typeFactory<_duckdb_file_system *>::make(lib);
alias_duckdb_file_system->alias = "duckdb_file_system";
addAlias(alias_duckdb_file_system);

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:870:5
auto alias_duckdb_file_handle = typeFactory<_duckdb_file_handle *>::make(lib);
alias_duckdb_file_handle->alias = "duckdb_file_handle";
addAlias(alias_duckdb_file_handle);

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:880:5
auto alias_duckdb_catalog = typeFactory<_duckdb_catalog *>::make(lib);
alias_duckdb_catalog->alias = "duckdb_catalog";
addAlias(alias_duckdb_catalog);

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:886:5
auto alias_duckdb_catalog_entry = typeFactory<_duckdb_catalog_entry *>::make(lib);
alias_duckdb_catalog_entry->alias = "duckdb_catalog_entry";
addAlias(alias_duckdb_catalog_entry);

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:895:5
auto alias_duckdb_log_storage = typeFactory<_duckdb_log_storage *>::make(lib);
alias_duckdb_log_storage->alias = "duckdb_log_storage";
addAlias(alias_duckdb_log_storage);

// from D:/DASPKG/dasDuckDB/duckdb/duckdb.h:898:16
auto alias_duckdb_logger_write_log_entry_t = typeFactory<void (*)(void *, duckdb_timestamp *, const char *, const char *, const char *)>::make(lib);
alias_duckdb_logger_write_log_entry_t->alias = "duckdb_logger_write_log_entry_t";
addAlias(alias_duckdb_logger_write_log_entry_t);


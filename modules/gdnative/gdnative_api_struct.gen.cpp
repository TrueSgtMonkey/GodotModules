/* THIS FILE IS GENERATED DO NOT EDIT */

#include <gdnative_api_struct.gen.h>

extern const godot_gdnative_ext_nativescript_1_1_api_struct api_extension_nativescript_1_1_struct = {
	GDNATIVE_EXT_NATIVESCRIPT,
	{1, 1},
	NULL,
	godot_nativescript_set_method_argument_information,
	godot_nativescript_set_class_documentation,
	godot_nativescript_set_method_documentation,
	godot_nativescript_set_property_documentation,
	godot_nativescript_set_signal_documentation,
	godot_nativescript_set_global_type_tag,
	godot_nativescript_get_global_type_tag,
	godot_nativescript_set_type_tag,
	godot_nativescript_get_type_tag,
	godot_nativescript_register_instance_binding_data_functions,
	godot_nativescript_unregister_instance_binding_data_functions,
	godot_nativescript_get_instance_binding_data,
	godot_nativescript_profiling_add_data,
};

extern const godot_gdnative_ext_nativescript_api_struct api_extension_nativescript_struct = {
	GDNATIVE_EXT_NATIVESCRIPT,
	{1, 0},
	(const godot_gdnative_api_struct *)&api_extension_nativescript_1_1_struct,
	godot_nativescript_register_class,
	godot_nativescript_register_tool_class,
	godot_nativescript_register_method,
	godot_nativescript_register_property,
	godot_nativescript_register_signal,
	godot_nativescript_get_userdata,
};

extern const godot_gdnative_ext_pluginscript_api_struct api_extension_pluginscript_struct = {
	GDNATIVE_EXT_PLUGINSCRIPT,
	{1, 0},
	NULL,
	godot_pluginscript_register_language,
};

extern const godot_gdnative_ext_android_api_struct api_extension_android_struct = {
	GDNATIVE_EXT_ANDROID,
	{1, 1},
	NULL,
	godot_android_get_env,
	godot_android_get_activity,
	godot_android_get_surface,
	godot_android_is_activity_resumed,
};

extern const godot_gdnative_ext_arvr_1_2_api_struct api_extension_arvr_1_2_struct = {
	GDNATIVE_EXT_ARVR,
	{1, 2},
	NULL,
	godot_arvr_set_interface,
	godot_arvr_get_depthid,
};

extern const godot_gdnative_ext_arvr_api_struct api_extension_arvr_struct = {
	GDNATIVE_EXT_ARVR,
	{1, 1},
	(const godot_gdnative_api_struct *)&api_extension_arvr_1_2_struct,
	godot_arvr_register_interface,
	godot_arvr_get_worldscale,
	godot_arvr_get_reference_frame,
	godot_arvr_blit,
	godot_arvr_get_texid,
	godot_arvr_add_controller,
	godot_arvr_remove_controller,
	godot_arvr_set_controller_transform,
	godot_arvr_set_controller_button,
	godot_arvr_set_controller_axis,
	godot_arvr_get_controller_rumble,
};

extern const godot_gdnative_ext_videodecoder_api_struct api_extension_videodecoder_struct = {
	GDNATIVE_EXT_VIDEODECODER,
	{0, 1},
	NULL,
	godot_videodecoder_file_read,
	godot_videodecoder_file_seek,
	godot_videodecoder_register_decoder,
};

extern const godot_gdnative_ext_net_3_2_api_struct api_extension_net_3_2_struct = {
	GDNATIVE_EXT_NET,
	{3, 2},
	NULL,
	godot_net_set_webrtc_library,
	godot_net_bind_webrtc_peer_connection,
	godot_net_bind_webrtc_data_channel,
};

extern const godot_gdnative_ext_net_api_struct api_extension_net_struct = {
	GDNATIVE_EXT_NET,
	{3, 1},
	(const godot_gdnative_api_struct *)&api_extension_net_3_2_struct,
	godot_net_bind_stream_peer,
	godot_net_bind_packet_peer,
	godot_net_bind_multiplayer_peer,
};


const godot_gdnative_api_struct *gdnative_extensions_pointers[] = {
	(godot_gdnative_api_struct *)&api_extension_nativescript_struct,
	(godot_gdnative_api_struct *)&api_extension_pluginscript_struct,
	(godot_gdnative_api_struct *)&api_extension_android_struct,
	(godot_gdnative_api_struct *)&api_extension_arvr_struct,
	(godot_gdnative_api_struct *)&api_extension_videodecoder_struct,
	(godot_gdnative_api_struct *)&api_extension_net_struct,
};

extern const godot_gdnative_core_1_2_api_struct api_1_2 = {
	GDNATIVE_CORE,
	{1, 2},
	NULL,
	godot_dictionary_duplicate,
	godot_vector3_move_toward,
	godot_vector2_move_toward,
	godot_string_count,
	godot_string_countn,
	godot_vector3_direction_to,
	godot_vector2_direction_to,
	godot_array_slice,
	godot_pool_byte_array_empty,
	godot_pool_int_array_empty,
	godot_pool_real_array_empty,
	godot_pool_string_array_empty,
	godot_pool_vector2_array_empty,
	godot_pool_vector3_array_empty,
	godot_pool_color_array_empty,
	godot_get_class_tag,
	godot_object_cast_to,
	godot_instance_from_id,
};

extern const godot_gdnative_core_1_1_api_struct api_1_1 = {
	GDNATIVE_CORE,
	{1, 1},
	(const godot_gdnative_api_struct *)& api_1_2,
	godot_color_to_abgr32,
	godot_color_to_abgr64,
	godot_color_to_argb64,
	godot_color_to_rgba64,
	godot_color_darkened,
	godot_color_from_hsv,
	godot_color_lightened,
	godot_array_duplicate,
	godot_array_max,
	godot_array_min,
	godot_array_shuffle,
	godot_basis_slerp,
	godot_dictionary_get_with_default,
	godot_dictionary_erase_with_return,
	godot_node_path_get_as_property_path,
	godot_quat_set_axis_angle,
	godot_rect2_grow_individual,
	godot_rect2_grow_margin,
	godot_rect2_abs,
	godot_string_dedent,
	godot_string_trim_prefix,
	godot_string_trim_suffix,
	godot_string_rstrip,
	godot_string_rsplit,
	godot_basis_get_quat,
	godot_basis_set_quat,
	godot_basis_set_axis_angle_scale,
	godot_basis_set_euler_scale,
	godot_basis_set_quat_scale,
	godot_is_instance_valid,
	godot_quat_new_with_basis,
	godot_quat_new_with_euler,
	godot_transform_new_with_quat,
	godot_variant_get_operator_name,
	godot_variant_evaluate,
};

extern const godot_gdnative_core_api_struct api_struct = {
	GDNATIVE_CORE,
	{1, 0},
	(const godot_gdnative_api_struct *)&api_1_1,
	6,
	gdnative_extensions_pointers,
	godot_color_new_rgba,
	godot_color_new_rgb,
	godot_color_get_r,
	godot_color_set_r,
	godot_color_get_g,
	godot_color_set_g,
	godot_color_get_b,
	godot_color_set_b,
	godot_color_get_a,
	godot_color_set_a,
	godot_color_get_h,
	godot_color_get_s,
	godot_color_get_v,
	godot_color_as_string,
	godot_color_to_rgba32,
	godot_color_to_argb32,
	godot_color_gray,
	godot_color_inverted,
	godot_color_contrasted,
	godot_color_linear_interpolate,
	godot_color_blend,
	godot_color_to_html,
	godot_color_operator_equal,
	godot_color_operator_less,
	godot_vector2_new,
	godot_vector2_as_string,
	godot_vector2_normalized,
	godot_vector2_length,
	godot_vector2_angle,
	godot_vector2_length_squared,
	godot_vector2_is_normalized,
	godot_vector2_distance_to,
	godot_vector2_distance_squared_to,
	godot_vector2_angle_to,
	godot_vector2_angle_to_point,
	godot_vector2_linear_interpolate,
	godot_vector2_cubic_interpolate,
	godot_vector2_rotated,
	godot_vector2_tangent,
	godot_vector2_floor,
	godot_vector2_snapped,
	godot_vector2_aspect,
	godot_vector2_dot,
	godot_vector2_slide,
	godot_vector2_bounce,
	godot_vector2_reflect,
	godot_vector2_abs,
	godot_vector2_clamped,
	godot_vector2_operator_add,
	godot_vector2_operator_subtract,
	godot_vector2_operator_multiply_vector,
	godot_vector2_operator_multiply_scalar,
	godot_vector2_operator_divide_vector,
	godot_vector2_operator_divide_scalar,
	godot_vector2_operator_equal,
	godot_vector2_operator_less,
	godot_vector2_operator_neg,
	godot_vector2_set_x,
	godot_vector2_set_y,
	godot_vector2_get_x,
	godot_vector2_get_y,
	godot_quat_new,
	godot_quat_new_with_axis_angle,
	godot_quat_get_x,
	godot_quat_set_x,
	godot_quat_get_y,
	godot_quat_set_y,
	godot_quat_get_z,
	godot_quat_set_z,
	godot_quat_get_w,
	godot_quat_set_w,
	godot_quat_as_string,
	godot_quat_length,
	godot_quat_length_squared,
	godot_quat_normalized,
	godot_quat_is_normalized,
	godot_quat_inverse,
	godot_quat_dot,
	godot_quat_xform,
	godot_quat_slerp,
	godot_quat_slerpni,
	godot_quat_cubic_slerp,
	godot_quat_operator_multiply,
	godot_quat_operator_add,
	godot_quat_operator_subtract,
	godot_quat_operator_divide,
	godot_quat_operator_equal,
	godot_quat_operator_neg,
	godot_basis_new_with_rows,
	godot_basis_new_with_axis_and_angle,
	godot_basis_new_with_euler,
	godot_basis_as_string,
	godot_basis_inverse,
	godot_basis_transposed,
	godot_basis_orthonormalized,
	godot_basis_determinant,
	godot_basis_rotated,
	godot_basis_scaled,
	godot_basis_get_scale,
	godot_basis_get_euler,
	godot_basis_tdotx,
	godot_basis_tdoty,
	godot_basis_tdotz,
	godot_basis_xform,
	godot_basis_xform_inv,
	godot_basis_get_orthogonal_index,
	godot_basis_new,
	godot_basis_new_with_euler_quat,
	godot_basis_get_elements,
	godot_basis_get_axis,
	godot_basis_set_axis,
	godot_basis_get_row,
	godot_basis_set_row,
	godot_basis_operator_equal,
	godot_basis_operator_add,
	godot_basis_operator_subtract,
	godot_basis_operator_multiply_vector,
	godot_basis_operator_multiply_scalar,
	godot_vector3_new,
	godot_vector3_as_string,
	godot_vector3_min_axis,
	godot_vector3_max_axis,
	godot_vector3_length,
	godot_vector3_length_squared,
	godot_vector3_is_normalized,
	godot_vector3_normalized,
	godot_vector3_inverse,
	godot_vector3_snapped,
	godot_vector3_rotated,
	godot_vector3_linear_interpolate,
	godot_vector3_cubic_interpolate,
	godot_vector3_dot,
	godot_vector3_cross,
	godot_vector3_outer,
	godot_vector3_to_diagonal_matrix,
	godot_vector3_abs,
	godot_vector3_floor,
	godot_vector3_ceil,
	godot_vector3_distance_to,
	godot_vector3_distance_squared_to,
	godot_vector3_angle_to,
	godot_vector3_slide,
	godot_vector3_bounce,
	godot_vector3_reflect,
	godot_vector3_operator_add,
	godot_vector3_operator_subtract,
	godot_vector3_operator_multiply_vector,
	godot_vector3_operator_multiply_scalar,
	godot_vector3_operator_divide_vector,
	godot_vector3_operator_divide_scalar,
	godot_vector3_operator_equal,
	godot_vector3_operator_less,
	godot_vector3_operator_neg,
	godot_vector3_set_axis,
	godot_vector3_get_axis,
	godot_pool_byte_array_new,
	godot_pool_byte_array_new_copy,
	godot_pool_byte_array_new_with_array,
	godot_pool_byte_array_append,
	godot_pool_byte_array_append_array,
	godot_pool_byte_array_insert,
	godot_pool_byte_array_invert,
	godot_pool_byte_array_push_back,
	godot_pool_byte_array_remove,
	godot_pool_byte_array_resize,
	godot_pool_byte_array_read,
	godot_pool_byte_array_write,
	godot_pool_byte_array_set,
	godot_pool_byte_array_get,
	godot_pool_byte_array_size,
	godot_pool_byte_array_destroy,
	godot_pool_int_array_new,
	godot_pool_int_array_new_copy,
	godot_pool_int_array_new_with_array,
	godot_pool_int_array_append,
	godot_pool_int_array_append_array,
	godot_pool_int_array_insert,
	godot_pool_int_array_invert,
	godot_pool_int_array_push_back,
	godot_pool_int_array_remove,
	godot_pool_int_array_resize,
	godot_pool_int_array_read,
	godot_pool_int_array_write,
	godot_pool_int_array_set,
	godot_pool_int_array_get,
	godot_pool_int_array_size,
	godot_pool_int_array_destroy,
	godot_pool_real_array_new,
	godot_pool_real_array_new_copy,
	godot_pool_real_array_new_with_array,
	godot_pool_real_array_append,
	godot_pool_real_array_append_array,
	godot_pool_real_array_insert,
	godot_pool_real_array_invert,
	godot_pool_real_array_push_back,
	godot_pool_real_array_remove,
	godot_pool_real_array_resize,
	godot_pool_real_array_read,
	godot_pool_real_array_write,
	godot_pool_real_array_set,
	godot_pool_real_array_get,
	godot_pool_real_array_size,
	godot_pool_real_array_destroy,
	godot_pool_string_array_new,
	godot_pool_string_array_new_copy,
	godot_pool_string_array_new_with_array,
	godot_pool_string_array_append,
	godot_pool_string_array_append_array,
	godot_pool_string_array_insert,
	godot_pool_string_array_invert,
	godot_pool_string_array_push_back,
	godot_pool_string_array_remove,
	godot_pool_string_array_resize,
	godot_pool_string_array_read,
	godot_pool_string_array_write,
	godot_pool_string_array_set,
	godot_pool_string_array_get,
	godot_pool_string_array_size,
	godot_pool_string_array_destroy,
	godot_pool_vector2_array_new,
	godot_pool_vector2_array_new_copy,
	godot_pool_vector2_array_new_with_array,
	godot_pool_vector2_array_append,
	godot_pool_vector2_array_append_array,
	godot_pool_vector2_array_insert,
	godot_pool_vector2_array_invert,
	godot_pool_vector2_array_push_back,
	godot_pool_vector2_array_remove,
	godot_pool_vector2_array_resize,
	godot_pool_vector2_array_read,
	godot_pool_vector2_array_write,
	godot_pool_vector2_array_set,
	godot_pool_vector2_array_get,
	godot_pool_vector2_array_size,
	godot_pool_vector2_array_destroy,
	godot_pool_vector3_array_new,
	godot_pool_vector3_array_new_copy,
	godot_pool_vector3_array_new_with_array,
	godot_pool_vector3_array_append,
	godot_pool_vector3_array_append_array,
	godot_pool_vector3_array_insert,
	godot_pool_vector3_array_invert,
	godot_pool_vector3_array_push_back,
	godot_pool_vector3_array_remove,
	godot_pool_vector3_array_resize,
	godot_pool_vector3_array_read,
	godot_pool_vector3_array_write,
	godot_pool_vector3_array_set,
	godot_pool_vector3_array_get,
	godot_pool_vector3_array_size,
	godot_pool_vector3_array_destroy,
	godot_pool_color_array_new,
	godot_pool_color_array_new_copy,
	godot_pool_color_array_new_with_array,
	godot_pool_color_array_append,
	godot_pool_color_array_append_array,
	godot_pool_color_array_insert,
	godot_pool_color_array_invert,
	godot_pool_color_array_push_back,
	godot_pool_color_array_remove,
	godot_pool_color_array_resize,
	godot_pool_color_array_read,
	godot_pool_color_array_write,
	godot_pool_color_array_set,
	godot_pool_color_array_get,
	godot_pool_color_array_size,
	godot_pool_color_array_destroy,
	godot_pool_byte_array_read_access_copy,
	godot_pool_byte_array_read_access_ptr,
	godot_pool_byte_array_read_access_operator_assign,
	godot_pool_byte_array_read_access_destroy,
	godot_pool_int_array_read_access_copy,
	godot_pool_int_array_read_access_ptr,
	godot_pool_int_array_read_access_operator_assign,
	godot_pool_int_array_read_access_destroy,
	godot_pool_real_array_read_access_copy,
	godot_pool_real_array_read_access_ptr,
	godot_pool_real_array_read_access_operator_assign,
	godot_pool_real_array_read_access_destroy,
	godot_pool_string_array_read_access_copy,
	godot_pool_string_array_read_access_ptr,
	godot_pool_string_array_read_access_operator_assign,
	godot_pool_string_array_read_access_destroy,
	godot_pool_vector2_array_read_access_copy,
	godot_pool_vector2_array_read_access_ptr,
	godot_pool_vector2_array_read_access_operator_assign,
	godot_pool_vector2_array_read_access_destroy,
	godot_pool_vector3_array_read_access_copy,
	godot_pool_vector3_array_read_access_ptr,
	godot_pool_vector3_array_read_access_operator_assign,
	godot_pool_vector3_array_read_access_destroy,
	godot_pool_color_array_read_access_copy,
	godot_pool_color_array_read_access_ptr,
	godot_pool_color_array_read_access_operator_assign,
	godot_pool_color_array_read_access_destroy,
	godot_pool_byte_array_write_access_copy,
	godot_pool_byte_array_write_access_ptr,
	godot_pool_byte_array_write_access_operator_assign,
	godot_pool_byte_array_write_access_destroy,
	godot_pool_int_array_write_access_copy,
	godot_pool_int_array_write_access_ptr,
	godot_pool_int_array_write_access_operator_assign,
	godot_pool_int_array_write_access_destroy,
	godot_pool_real_array_write_access_copy,
	godot_pool_real_array_write_access_ptr,
	godot_pool_real_array_write_access_operator_assign,
	godot_pool_real_array_write_access_destroy,
	godot_pool_string_array_write_access_copy,
	godot_pool_string_array_write_access_ptr,
	godot_pool_string_array_write_access_operator_assign,
	godot_pool_string_array_write_access_destroy,
	godot_pool_vector2_array_write_access_copy,
	godot_pool_vector2_array_write_access_ptr,
	godot_pool_vector2_array_write_access_operator_assign,
	godot_pool_vector2_array_write_access_destroy,
	godot_pool_vector3_array_write_access_copy,
	godot_pool_vector3_array_write_access_ptr,
	godot_pool_vector3_array_write_access_operator_assign,
	godot_pool_vector3_array_write_access_destroy,
	godot_pool_color_array_write_access_copy,
	godot_pool_color_array_write_access_ptr,
	godot_pool_color_array_write_access_operator_assign,
	godot_pool_color_array_write_access_destroy,
	godot_array_new,
	godot_array_new_copy,
	godot_array_new_pool_color_array,
	godot_array_new_pool_vector3_array,
	godot_array_new_pool_vector2_array,
	godot_array_new_pool_string_array,
	godot_array_new_pool_real_array,
	godot_array_new_pool_int_array,
	godot_array_new_pool_byte_array,
	godot_array_set,
	godot_array_get,
	godot_array_operator_index,
	godot_array_operator_index_const,
	godot_array_append,
	godot_array_clear,
	godot_array_count,
	godot_array_empty,
	godot_array_erase,
	godot_array_front,
	godot_array_back,
	godot_array_find,
	godot_array_find_last,
	godot_array_has,
	godot_array_hash,
	godot_array_insert,
	godot_array_invert,
	godot_array_pop_back,
	godot_array_pop_front,
	godot_array_push_back,
	godot_array_push_front,
	godot_array_remove,
	godot_array_resize,
	godot_array_rfind,
	godot_array_size,
	godot_array_sort,
	godot_array_sort_custom,
	godot_array_bsearch,
	godot_array_bsearch_custom,
	godot_array_destroy,
	godot_dictionary_new,
	godot_dictionary_new_copy,
	godot_dictionary_destroy,
	godot_dictionary_size,
	godot_dictionary_empty,
	godot_dictionary_clear,
	godot_dictionary_has,
	godot_dictionary_has_all,
	godot_dictionary_erase,
	godot_dictionary_hash,
	godot_dictionary_keys,
	godot_dictionary_values,
	godot_dictionary_get,
	godot_dictionary_set,
	godot_dictionary_operator_index,
	godot_dictionary_operator_index_const,
	godot_dictionary_next,
	godot_dictionary_operator_equal,
	godot_dictionary_to_json,
	godot_node_path_new,
	godot_node_path_new_copy,
	godot_node_path_destroy,
	godot_node_path_as_string,
	godot_node_path_is_absolute,
	godot_node_path_get_name_count,
	godot_node_path_get_name,
	godot_node_path_get_subname_count,
	godot_node_path_get_subname,
	godot_node_path_get_concatenated_subnames,
	godot_node_path_is_empty,
	godot_node_path_operator_equal,
	godot_plane_new_with_reals,
	godot_plane_new_with_vectors,
	godot_plane_new_with_normal,
	godot_plane_as_string,
	godot_plane_normalized,
	godot_plane_center,
	godot_plane_get_any_point,
	godot_plane_is_point_over,
	godot_plane_distance_to,
	godot_plane_has_point,
	godot_plane_project,
	godot_plane_intersect_3,
	godot_plane_intersects_ray,
	godot_plane_intersects_segment,
	godot_plane_operator_neg,
	godot_plane_operator_equal,
	godot_plane_set_normal,
	godot_plane_get_normal,
	godot_plane_get_d,
	godot_plane_set_d,
	godot_rect2_new_with_position_and_size,
	godot_rect2_new,
	godot_rect2_as_string,
	godot_rect2_get_area,
	godot_rect2_intersects,
	godot_rect2_encloses,
	godot_rect2_has_no_area,
	godot_rect2_clip,
	godot_rect2_merge,
	godot_rect2_has_point,
	godot_rect2_grow,
	godot_rect2_expand,
	godot_rect2_operator_equal,
	godot_rect2_get_position,
	godot_rect2_get_size,
	godot_rect2_set_position,
	godot_rect2_set_size,
	godot_aabb_new,
	godot_aabb_get_position,
	godot_aabb_set_position,
	godot_aabb_get_size,
	godot_aabb_set_size,
	godot_aabb_as_string,
	godot_aabb_get_area,
	godot_aabb_has_no_area,
	godot_aabb_has_no_surface,
	godot_aabb_intersects,
	godot_aabb_encloses,
	godot_aabb_merge,
	godot_aabb_intersection,
	godot_aabb_intersects_plane,
	godot_aabb_intersects_segment,
	godot_aabb_has_point,
	godot_aabb_get_support,
	godot_aabb_get_longest_axis,
	godot_aabb_get_longest_axis_index,
	godot_aabb_get_longest_axis_size,
	godot_aabb_get_shortest_axis,
	godot_aabb_get_shortest_axis_index,
	godot_aabb_get_shortest_axis_size,
	godot_aabb_expand,
	godot_aabb_grow,
	godot_aabb_get_endpoint,
	godot_aabb_operator_equal,
	godot_rid_new,
	godot_rid_get_id,
	godot_rid_new_with_resource,
	godot_rid_operator_equal,
	godot_rid_operator_less,
	godot_transform_new_with_axis_origin,
	godot_transform_new,
	godot_transform_get_basis,
	godot_transform_set_basis,
	godot_transform_get_origin,
	godot_transform_set_origin,
	godot_transform_as_string,
	godot_transform_inverse,
	godot_transform_affine_inverse,
	godot_transform_orthonormalized,
	godot_transform_rotated,
	godot_transform_scaled,
	godot_transform_translated,
	godot_transform_looking_at,
	godot_transform_xform_plane,
	godot_transform_xform_inv_plane,
	godot_transform_new_identity,
	godot_transform_operator_equal,
	godot_transform_operator_multiply,
	godot_transform_xform_vector3,
	godot_transform_xform_inv_vector3,
	godot_transform_xform_aabb,
	godot_transform_xform_inv_aabb,
	godot_transform2d_new,
	godot_transform2d_new_axis_origin,
	godot_transform2d_as_string,
	godot_transform2d_inverse,
	godot_transform2d_affine_inverse,
	godot_transform2d_get_rotation,
	godot_transform2d_get_origin,
	godot_transform2d_get_scale,
	godot_transform2d_orthonormalized,
	godot_transform2d_rotated,
	godot_transform2d_scaled,
	godot_transform2d_translated,
	godot_transform2d_xform_vector2,
	godot_transform2d_xform_inv_vector2,
	godot_transform2d_basis_xform_vector2,
	godot_transform2d_basis_xform_inv_vector2,
	godot_transform2d_interpolate_with,
	godot_transform2d_operator_equal,
	godot_transform2d_operator_multiply,
	godot_transform2d_new_identity,
	godot_transform2d_xform_rect2,
	godot_transform2d_xform_inv_rect2,
	godot_variant_get_type,
	godot_variant_new_copy,
	godot_variant_new_nil,
	godot_variant_new_bool,
	godot_variant_new_uint,
	godot_variant_new_int,
	godot_variant_new_real,
	godot_variant_new_string,
	godot_variant_new_vector2,
	godot_variant_new_rect2,
	godot_variant_new_vector3,
	godot_variant_new_transform2d,
	godot_variant_new_plane,
	godot_variant_new_quat,
	godot_variant_new_aabb,
	godot_variant_new_basis,
	godot_variant_new_transform,
	godot_variant_new_color,
	godot_variant_new_node_path,
	godot_variant_new_rid,
	godot_variant_new_object,
	godot_variant_new_dictionary,
	godot_variant_new_array,
	godot_variant_new_pool_byte_array,
	godot_variant_new_pool_int_array,
	godot_variant_new_pool_real_array,
	godot_variant_new_pool_string_array,
	godot_variant_new_pool_vector2_array,
	godot_variant_new_pool_vector3_array,
	godot_variant_new_pool_color_array,
	godot_variant_as_bool,
	godot_variant_as_uint,
	godot_variant_as_int,
	godot_variant_as_real,
	godot_variant_as_string,
	godot_variant_as_vector2,
	godot_variant_as_rect2,
	godot_variant_as_vector3,
	godot_variant_as_transform2d,
	godot_variant_as_plane,
	godot_variant_as_quat,
	godot_variant_as_aabb,
	godot_variant_as_basis,
	godot_variant_as_transform,
	godot_variant_as_color,
	godot_variant_as_node_path,
	godot_variant_as_rid,
	godot_variant_as_object,
	godot_variant_as_dictionary,
	godot_variant_as_array,
	godot_variant_as_pool_byte_array,
	godot_variant_as_pool_int_array,
	godot_variant_as_pool_real_array,
	godot_variant_as_pool_string_array,
	godot_variant_as_pool_vector2_array,
	godot_variant_as_pool_vector3_array,
	godot_variant_as_pool_color_array,
	godot_variant_call,
	godot_variant_has_method,
	godot_variant_operator_equal,
	godot_variant_operator_less,
	godot_variant_hash_compare,
	godot_variant_booleanize,
	godot_variant_destroy,
	godot_char_string_length,
	godot_char_string_get_data,
	godot_char_string_destroy,
	godot_string_new,
	godot_string_new_copy,
	godot_string_new_with_wide_string,
	godot_string_operator_index,
	godot_string_operator_index_const,
	godot_string_wide_str,
	godot_string_operator_equal,
	godot_string_operator_less,
	godot_string_operator_plus,
	godot_string_length,
	godot_string_casecmp_to,
	godot_string_nocasecmp_to,
	godot_string_naturalnocasecmp_to,
	godot_string_begins_with,
	godot_string_begins_with_char_array,
	godot_string_bigrams,
	godot_string_chr,
	godot_string_ends_with,
	godot_string_find,
	godot_string_find_from,
	godot_string_findmk,
	godot_string_findmk_from,
	godot_string_findmk_from_in_place,
	godot_string_findn,
	godot_string_findn_from,
	godot_string_find_last,
	godot_string_format,
	godot_string_format_with_custom_placeholder,
	godot_string_hex_encode_buffer,
	godot_string_hex_to_int,
	godot_string_hex_to_int_without_prefix,
	godot_string_insert,
	godot_string_is_numeric,
	godot_string_is_subsequence_of,
	godot_string_is_subsequence_ofi,
	godot_string_lpad,
	godot_string_lpad_with_custom_character,
	godot_string_match,
	godot_string_matchn,
	godot_string_md5,
	godot_string_num,
	godot_string_num_int64,
	godot_string_num_int64_capitalized,
	godot_string_num_real,
	godot_string_num_scientific,
	godot_string_num_with_decimals,
	godot_string_pad_decimals,
	godot_string_pad_zeros,
	godot_string_replace_first,
	godot_string_replace,
	godot_string_replacen,
	godot_string_rfind,
	godot_string_rfindn,
	godot_string_rfind_from,
	godot_string_rfindn_from,
	godot_string_rpad,
	godot_string_rpad_with_custom_character,
	godot_string_similarity,
	godot_string_sprintf,
	godot_string_substr,
	godot_string_to_double,
	godot_string_to_float,
	godot_string_to_int,
	godot_string_camelcase_to_underscore,
	godot_string_camelcase_to_underscore_lowercased,
	godot_string_capitalize,
	godot_string_char_to_double,
	godot_string_char_to_int,
	godot_string_wchar_to_int,
	godot_string_char_to_int_with_len,
	godot_string_char_to_int64_with_len,
	godot_string_hex_to_int64,
	godot_string_hex_to_int64_with_prefix,
	godot_string_to_int64,
	godot_string_unicode_char_to_double,
	godot_string_get_slice_count,
	godot_string_get_slice,
	godot_string_get_slicec,
	godot_string_split,
	godot_string_split_allow_empty,
	godot_string_split_floats,
	godot_string_split_floats_allows_empty,
	godot_string_split_floats_mk,
	godot_string_split_floats_mk_allows_empty,
	godot_string_split_ints,
	godot_string_split_ints_allows_empty,
	godot_string_split_ints_mk,
	godot_string_split_ints_mk_allows_empty,
	godot_string_split_spaces,
	godot_string_char_lowercase,
	godot_string_char_uppercase,
	godot_string_to_lower,
	godot_string_to_upper,
	godot_string_get_basename,
	godot_string_get_extension,
	godot_string_left,
	godot_string_ord_at,
	godot_string_plus_file,
	godot_string_right,
	godot_string_strip_edges,
	godot_string_strip_escapes,
	godot_string_erase,
	godot_string_ascii,
	godot_string_ascii_extended,
	godot_string_utf8,
	godot_string_parse_utf8,
	godot_string_parse_utf8_with_len,
	godot_string_chars_to_utf8,
	godot_string_chars_to_utf8_with_len,
	godot_string_hash,
	godot_string_hash64,
	godot_string_hash_chars,
	godot_string_hash_chars_with_len,
	godot_string_hash_utf8_chars,
	godot_string_hash_utf8_chars_with_len,
	godot_string_md5_buffer,
	godot_string_md5_text,
	godot_string_sha256_buffer,
	godot_string_sha256_text,
	godot_string_empty,
	godot_string_get_base_dir,
	godot_string_get_file,
	godot_string_humanize_size,
	godot_string_is_abs_path,
	godot_string_is_rel_path,
	godot_string_is_resource_file,
	godot_string_path_to,
	godot_string_path_to_file,
	godot_string_simplify_path,
	godot_string_c_escape,
	godot_string_c_escape_multiline,
	godot_string_c_unescape,
	godot_string_http_escape,
	godot_string_http_unescape,
	godot_string_json_escape,
	godot_string_word_wrap,
	godot_string_xml_escape,
	godot_string_xml_escape_with_quotes,
	godot_string_xml_unescape,
	godot_string_percent_decode,
	godot_string_percent_encode,
	godot_string_is_valid_float,
	godot_string_is_valid_hex_number,
	godot_string_is_valid_html_color,
	godot_string_is_valid_identifier,
	godot_string_is_valid_integer,
	godot_string_is_valid_ip_address,
	godot_string_destroy,
	godot_string_name_new,
	godot_string_name_new_data,
	godot_string_name_get_name,
	godot_string_name_get_hash,
	godot_string_name_get_data_unique_pointer,
	godot_string_name_operator_equal,
	godot_string_name_operator_less,
	godot_string_name_destroy,
	godot_object_destroy,
	godot_global_get_singleton,
	godot_method_bind_get_method,
	godot_method_bind_ptrcall,
	godot_method_bind_call,
	godot_get_class_constructor,
	godot_get_global_constants,
	godot_register_native_call_type,
	godot_alloc,
	godot_realloc,
	godot_free,
	godot_print_error,
	godot_print_warning,
	godot_print,
};

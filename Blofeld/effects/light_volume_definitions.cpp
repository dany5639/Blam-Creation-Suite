#include <blofeld-private-pch.h>

namespace blofeld
{

TAG_STRUCT(light_volume_system_struct_definition)
{
	FIELD( _field_block, "light_volumes", &light_volume_definition_block ),
	FIELD( _field_terminator )
};

TAG_STRUCT(light_volume_property_real)
{
	FIELD( _field_char_enum, "Input Variable" ),
	FIELD( _field_char_enum, "Range Variable" ),
	FIELD( _field_char_enum, "Output Modifier" ),
	FIELD( _field_char_enum, "Output Modifier Input" ),
	FIELD( _field_custom ),
	FIELD( _field_struct, "Mapping", &mapping_function_struct_definition ),
	FIELD( _field_real, "runtime m_constant_value!" ),
	FIELD( _field_word_integer, "runtime m_flags!" ),
	FIELD( _field_pad, "DSFDSGLKJ", 2 ),
	FIELD( _field_terminator )
};

TAG_STRUCT(light_volume_property_real_rgb_color)
{
	FIELD( _field_char_enum, "Input Variable" ),
	FIELD( _field_char_enum, "Range Variable" ),
	FIELD( _field_char_enum, "Output Modifier" ),
	FIELD( _field_char_enum, "Output Modifier Input" ),
	FIELD( _field_custom ),
	FIELD( _field_struct, "Mapping", &mapping_function_struct_definition ),
	FIELD( _field_real, "runtime m_constant_value!" ),
	FIELD( _field_word_integer, "runtime m_flags!" ),
	FIELD( _field_pad, "DSFDSGLKJ", 2 ),
	FIELD( _field_terminator )
};

TAG_BLOCK(light_volume_definition_block, c_light_volume_system_definition::k_max_light_volume)
{
	FIELD( _field_custom ),
	FIELD( _field_string_id, "light_volume name^" ),
	FIELD( _field_custom, "material" ),
	FIELD( _field_custom ),
	FIELD( _field_struct, "actual material\?", &material_struct_struct_definition ),
	FIELD( _field_custom ),
	FIELD( _field_word_flags, "appearance flags" ),
	FIELD( _field_pad, "SONGWEOINGEW", 2 ),
	FIELD( _field_real, "brightness ratio#avg. brightness head-on/side-view" ),
	FIELD( _field_long_flags, "flags" ),
	FIELD( _field_real, "LOD in distance#defaults to 0.0, ignored if \'lod enabled\' not checked above" ),
	FIELD( _field_real, "LOD feather in delta#defaults to 0.0, ignored if \'lod enabled\' not checked above" ),
	FIELD( _field_real, "inverse LOD feather in!" ),
	FIELD( _field_real, "LOD out distance#defaults to 30.0, ignored if \'lod enabled\' not checked above" ),
	FIELD( _field_real, "LOD feather out delta#defaults to 10.0, ignored if \'lod enabled\' not checked above" ),
	FIELD( _field_real, "inverse LOD feather out!" ),
	FIELD( _field_struct, "length", &light_volume_property_real_struct_definition ),
	FIELD( _field_struct, "offset", &light_volume_property_real_struct_definition ),
	FIELD( _field_struct, "profile_density", &light_volume_property_real_struct_definition ),
	FIELD( _field_struct, "profile_length", &light_volume_property_real_struct_definition ),
	FIELD( _field_struct, "profile_thickness", &light_volume_property_real_struct_definition ),
	FIELD( _field_struct, "profile_color", &light_volume_property_real_rgb_color_struct_definition ),
	FIELD( _field_struct, "profile_alpha", &light_volume_property_real_struct_definition ),
	FIELD( _field_struct, "profile_intensity", &light_volume_property_real_struct_definition ),
	FIELD( _field_custom ),
	FIELD( _field_dword_integer, "runtime m_constant_per_profile_properties!" ),
	FIELD( _field_dword_integer, "runtime m_used_states!" ),
	FIELD( _field_dword_integer, "runtime m_max_profile_count!" ),
	FIELD( _field_struct, "runtime m_gpu_data!", &gpu_property_function_color_struct_struct_definition ),
	FIELD( _field_block, "precompiled vertices", &light_volume_precompiled_vert_block ),
	FIELD( _field_terminator )
};

TAG_BLOCK(light_volume_precompiled_vert_block, c_light_volume_definition::k_max_precompiled_profiles)
{
	FIELD( _field_word_integer, "r" ),
	FIELD( _field_word_integer, "g" ),
	FIELD( _field_word_integer, "b" ),
	FIELD( _field_word_integer, "thickness" ),
	FIELD( _field_terminator )
};

TAG_GROUP(light_volume_system_block, LIGHT_VOLUME_SYSTEM_TAG)
{
	FIELD( _field_block, "light_volumes", &light_volume_definition_block ),
	FIELD( _field_terminator )
};

} // namespace blofeld


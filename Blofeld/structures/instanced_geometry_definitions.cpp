#include <blofeld-private-pch.h>

namespace blofeld
{

	TAG_BLOCK(global_render_model_instance_placement_block, k_maximum_instance_placements_per_render_model)
	{
		FIELD( _field_string_id, "name^*" ),
		FIELD( _field_long_block_index, "node_index*" ),
		FIELD( _field_real, "scale*" ),
		FIELD( _field_real_vector_3d, "forward*" ),
		FIELD( _field_real_vector_3d, "left*" ),
		FIELD( _field_real_vector_3d, "up*" ),
		FIELD( _field_real_point_3d, "position*" ),
		FIELD( _field_terminator )
	};

	TAG_BLOCK(structure_bsp_instanced_geometry_instances_block, k_maximum_instance_geometry_instances_per_structure_bsp)
	{
		FIELD( _field_real, "scale" ),
		FIELD( _field_real_vector_3d, "forward" ),
		FIELD( _field_real_vector_3d, "left" ),
		FIELD( _field_real_vector_3d, "up" ),
		FIELD( _field_real_point_3d, "position" ),
		FIELD( _field_short_block_index, "instance definition*" ),
		FIELD( _field_word_flags, "flags", &instanced_geometry_flags ),
		FIELD( _field_long_flags, "Light Channels:", &channelDefinitionFlags ),
		FIELD( _field_short_integer, "mesh_index" ),
		FIELD( _field_short_integer, "compression_index" ),
		FIELD( _field_long_integer, "seam bit vector 0" ),
		FIELD( _field_long_integer, "seam bit vector 1" ),
		FIELD( _field_long_integer, "seam bit vector 2" ),
		FIELD( _field_long_integer, "seam bit vector 3" ),
		FIELD( _field_real, "bounds x0!" ),
		FIELD( _field_real, "bounds x1!" ),
		FIELD( _field_real, "bounds y0!" ),
		FIELD( _field_real, "bounds y1!" ),
		FIELD( _field_real, "bounds z0!" ),
		FIELD( _field_real, "bounds z1!" ),
		FIELD( _field_real_point_3d, "world bounding sphere center!" ),
		FIELD( _field_real, "world bounding sphere radius!" ),
		FIELD( _field_real, "imposter transition complete distance!" ),
		FIELD( _field_real, "imposter brightness!" ),
		FIELD( _field_long_integer, "checksum*" ),
		FIELD( _field_char_enum, "pathfinding policy*", &instanced_geometry_pathfinding_policy_enum ),
		FIELD( _field_char_enum, "lightmapping policy*", &instanced_geometry_lightmapping_policy_enum ),
		FIELD( _field_char_enum, "imposter policy*", &instanced_geometry_imposter_policy_enum ),
		FIELD( _field_pad, "SDFSDFE", 1 ),
		FIELD( _field_char_enum, "streaming priority*", &instanced_geometry_streamingpriority_enum ),
		FIELD( _field_pad, "strpad", 1 ),
		FIELD( _field_short_integer, "cubemap 0 bitmap index" ),
		FIELD( _field_real, "lightmap resolution scale" ),
		FIELD( _field_short_integer, "group_index!" ),
		FIELD( _field_short_integer, "group_list_index!" ),
		FIELD( _field_string_id, "name*^" ),
		FIELD( _field_long_string, "source file name*" ),
		FIELD( _field_terminator )
	};

	TAG_BLOCK(structure_bsp_instanced_geometry_instances_names_block, k_maximum_instance_geometry_instances_per_structure_bsp)
	{
		FIELD( _field_string_id, "name*^" ),
		FIELD( _field_terminator )
	};

	TAG_BLOCK(structure_bsp_instanced_geometry_definition_block, k_maximum_instance_geometry_definitions_per_structure_bsp)
	{
		FIELD( _field_long_integer, "checksum*" ),
		FIELD( _field_long_flags, "flags*", &instanced_geometry_definition_flags ),
		FIELD( _field_short_integer, "mesh index" ),
		FIELD( _field_short_integer, "compression index" ),
		FIELD( _field_real, "global lightmap resolution scale" ),
		FIELD( _field_short_integer, "external_index" ),
		FIELD( _field_pad, "useme", 2 ),
		FIELD( _field_terminator )
	};

	TAG_BLOCK_FROM_STRUCT(SerializedHavokGeometryDataBlock, 5, SerializedHavokGeometryDataBlock_struct_struct_definition );

	TAG_BLOCK_FROM_STRUCT(structureIOHavokDataBlock, 1, structureIOHavokDataBlock_struct_struct_definition );

	TAG_STRUCT(structureIOHavokDataBlock_struct)
	{
		FIELD( _field_long_integer, "version*" ),
		FIELD( _field_long_integer, "RuntimeDeserializedBody Pointer*!" ),
		FIELD( _field_long_integer, "RuntimeDeserializedData Pointer*!" ),
		FIELD( _field_long_integer, "Prefab Index*!" ),
		FIELD( _field_data, "Serialized Havok Data*" ),
		FIELD( _field_block, "Serialized Per Collision Type Havok Geometry", &SerializedHavokGeometryDataBlock_block ),
		FIELD( _field_real_point_3d, "Shapes bounds min!*" ),
		FIELD( _field_real_point_3d, "Shapes bounds max!*" ),
		FIELD( _field_terminator )
	};

	TAG_STRUCT(SerializedHavokGeometryDataBlock_struct)
	{
		FIELD( _field_data, "Serialized Havok Data*" ),
		FIELD( _field_data, "Serialized Static Havok Data*" ),
		FIELD( _field_long_integer, "collision type" ),
		FIELD( _field_long_integer, "RuntimeDeserializedBody Pointer*!" ),
		FIELD( _field_long_integer, "RuntimeDeserializedData Pointer*!" ),
		FIELD( _field_terminator )
	};

	TAG_ENUM(instanced_geometry_flags, 14)
	{
		OPTION("not in lightprobes"),
		OPTION("render only"),
		OPTION("does not block aoe damage"),
		OPTION("collidable"),
		OPTION("decal spacing"),
		OPTION("rain blocker"),
		OPTION("vertical rain sheet"),
		OPTION("outside map"),
		OPTION("seam colliding"),
		OPTION("(mostly) planar"),
		OPTION("remove from shadow geometry"),
		OPTION("cinema only"),
		OPTION("exclude from cinema"),
		OPTION("disallow object lighting samples"),
	};

	TAG_ENUM(instanced_geometry_imposter_policy_enum, 6)
	{
		OPTION("polygon default"),
		OPTION("polygon high"),
		OPTION("cards medium"),
		OPTION("cards high"),
		OPTION("none"),
		OPTION("rainbow box (runtime only)"),
	};

	TAG_ENUM(instanced_geometry_pathfinding_policy_enum, 3)
	{
		OPTION("cut-out"),
		OPTION("static"),
		OPTION("none"),
	};

	TAG_ENUM(instanced_geometry_lightmapping_policy_enum, 6)
	{
		OPTION("per-pixel shared"),
		OPTION("per-vertex"),
		OPTION("single-probe"),
		OPTION("exclude"),
		OPTION("per-pixel ao"),
		OPTION("per-vertex ao"),
	};

	TAG_ENUM(instanced_geometry_streamingpriority_enum, 3)
	{
		OPTION("default"),
		OPTION("higher"),
		OPTION("highest"),
	};

	TAG_ENUM(instanced_geometry_definition_flags, 6)
	{
		OPTION("miscolored bsp"),
		OPTION("error free"),
		OPTION("surface to triangle remapped"),
		OPTION("external reference mesh"),
		OPTION("no physics"),
		OPTION("stitched physics"),
	};

} // namespace blofeld

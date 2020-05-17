#include <blofeld-private-pch.h>

namespace blofeld
{

	TAG_BLOCK(NavMeshAttachmentBlock, MAXIMUM_STRUCTURE_BSPS_PER_SCENARIO + MAX_NUM_MOBILE_NAVMESHES)
	{
		FIELD( _field_dword_integer, "navMeshUID" ),
		FIELD( _field_terminator )
	};

	TAG_BLOCK(flight_reference_block, k_max_flight_references_per_area)
	{
		FIELD( _field_short_integer, "flight hint index" ),
		FIELD( _field_short_integer, "point index" ),
		FIELD( _field_short_integer, "structure index" ),
		FIELD( _field_pad, "post-structure-index-pad", 2 ),
		FIELD( _field_terminator )
	};

	TAG_BLOCK(area_sector_point_block, k_maximum_points_per_sector)
	{
		FIELD( _field_real_point_3d, "point" ),
		FIELD( _field_custom_long_block_index, "packedKeyOffaceref~!" ),
		FIELD( _field_custom_long_block_index, "navMeshUIDOffaceref~!" ),
		FIELD( _field_real_euler_angles_2d, "normal" ),
		FIELD( _field_terminator )
	};

	TAG_BLOCK(areas_block, k_max_areas_per_zone)
	{
		FIELD( _field_custom ),
		FIELD( _field_custom ),
		FIELD( _field_custom ),
		FIELD( _field_custom ),
		FIELD( _field_long_integer, "hkaiVolume vtable*~!" ),
		FIELD( _field_short_integer, "size*~!" ),
		FIELD( _field_short_integer, "count*~!" ),
		FIELD( _field_string, "name^`" ),
		FIELD( _field_long_flags, "area flags", &area_flags ),
		FIELD( _field_real_point_3d, "runtime relative mean point!" ),
		FIELD( _field_custom_long_block_index, "packedKeyOffaceref~!" ),
		FIELD( _field_custom_long_block_index, "navMeshUIDOffaceref~!" ),
		FIELD( _field_real, "runtime standard deviation!" ),
		FIELD( _field_short_integer, "runtime starting index!" ),
		FIELD( _field_short_integer, "runtime count!" ),
		FIELD( _field_struct, "Nav Mesh Attachments*", &NavMeshAttachmentsStruct_struct_definition ),
		FIELD( _field_array, "cluster occupancy!", &area_cluster_occupancy_bitvector_array_array ),
		FIELD( _field_block, "flight_hints", &flight_reference_block_block ),
		FIELD( _field_block, "points^", &area_sector_point_block_block ),
		FIELD( _field_explanation, "Generation Properties" ),
		FIELD( _field_enum, "preset", &generate_preset_enum ),
		FIELD( _field_short_integer, "runtimeCarverInversion*~!" ),
		FIELD( _field_long_flags, "flags", &generate_flags ),
		FIELD( _field_real, "extrusion" ),
		FIELD( _field_real, "sink" ),
		FIELD( _field_angle, "firing point orientation" ),
		FIELD( _field_angle, "grid orientation" ),
		FIELD( _field_real, "nav volume cell size" ),
		FIELD( _field_real, "spacing*" ),
		FIELD( _field_real, "airborne spacing*" ),
		FIELD( _field_real, "min cover length*" ),
		FIELD( _field_real, "cover spacing*" ),
		FIELD( _field_real, "cover offset distance*" ),
		FIELD( _field_real, "too close distance*" ),
		FIELD( _field_terminator )
	};

	TAG_BLOCK(zone_block, k_max_zones_per_map)
	{
		FIELD( _field_custom ),
		FIELD( _field_custom ),
		FIELD( _field_custom ),
		FIELD( _field_string, "name^" ),
		FIELD( _field_word_flags, "flags", &zone_flags ),
		FIELD( _field_short_block_index, "editor folder index!" ),
		FIELD( _field_block, "firing positions", &firing_positions_block_block ),
		FIELD( _field_block, "areas", &areas_block_block ),
		FIELD( _field_struct, "Nav Mesh Attachments*", &NavMeshAttachmentsStruct_struct_definition ),
		FIELD( _field_struct, "disallowed attachment bsps", &manualBspFlagsReferences_struct_definition ),
		FIELD( _field_terminator )
	};

	TAG_ARRAY(area_cluster_occupancy_bitvector_array, ((((MAXIMUM_CLUSTERS_PER_STRUCTURE)+(k_int32_bits-1))>>k_int32_bits_bits)))
	{
		FIELD( _field_long_integer, "bitvector data!" ),
		FIELD( _field_terminator )
	};

	TAG_STRUCT(NavMeshAttachmentsStruct)
	{
		FIELD( _field_block, "attachments", &NavMeshAttachmentBlock_block ),
		FIELD( _field_terminator )
	};

	TAG_ENUM(area_flags, 7)
	{
		OPTION("vehicle area"),
		OPTION("wall climb"),
		OPTION("manual reference frame"),
		OPTION("turret deployment area"),
		OPTION("invalid sector def!"),
		OPTION("air volume navigation"),
		OPTION("generate wall climb nav mesh"),
	};

	TAG_ENUM(generate_flags, 7)
	{
		OPTION("exclude cover"),
		OPTION("ignore existing"),
		OPTION("generate radial"),
		OPTION("don\'t stagger"),
		OPTION("airborne"),
		OPTION("airborne stagger"),
		OPTION("continue casting"),
	};

	TAG_ENUM(generate_preset_enum, 13)
	{
		OPTION("high density{dense}"),
		OPTION("medium density"),
		OPTION("low density{loose}"),
		OPTION("high density vehicle"),
		OPTION("medium density vehicle{vehicle}"),
		OPTION("airborne"),
		OPTION("engineer"),
		OPTION("dogfight"),
		OPTION("dropship"),
		OPTION("orbital"),
		OPTION("bishop high density"),
		OPTION("bishop medium density"),
		OPTION("bishop low density"),
	};

	TAG_ENUM(zone_flags, 1)
	{
		OPTION("giants zone"),
	};

} // namespace blofeld

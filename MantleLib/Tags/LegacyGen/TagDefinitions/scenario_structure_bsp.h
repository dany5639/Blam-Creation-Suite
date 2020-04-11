#pragma once

struct nicename("scenario_structure_bsp") tag_group('sbsp') s_scenario_structure_bsp_definition_legacy
{
	struct nicename("Structure Seams") s_structure_seams_definition_legacy
	{
		struct nicename("Unknown") s_unknown_definition_legacy
		{
			int32_t __unknown0;
		};

		struct nicename("Seam Clusters") s_seam_clusters_definition_legacy
		{
			int32_t nicename("Cluster Index") cluster_index;
			float nicename("Centroid X") centroid_x;
			float nicename("Centroid Y") centroid_y;
			float nicename("Centroid Z") centroid_z;
		};

		uint32_t __unknown0;
		uint32_t __unknown1;
		uint32_t __unknown2;
		uint32_t __unknown3;
		s_tag_block_legacy<s_unknown_definition_legacy> __unknown4;
		s_tag_block_legacy<s_seam_clusters_definition_legacy> nicename("Seam Clusters") seam_clusters_block;
	};

	struct nicename("Collision Materials") s_collision_materials_definition_legacy
	{
		s_tag_reference_legacy nicename("Shader") shader_reference;
		int16_t nicename("Global Material Index") global_material_index;
		int16_t nicename("Conveyor Surface Index") conveyor_surface_index;
		int16_t nicename("Seam Index") seam_index;
		int16_t __unknown0;
	};

	struct nicename("Unknown 2") s_unknown_2_definition_legacy
	{
		uint8_t __unknown0;
	};

	struct nicename("Unknown 3") s_unknown_3_definition_legacy
	{
		float __unknown0;
		float __unknown1;
		float __unknown2;
		float __unknown3;
		float __unknown4;
		float __unknown5;
	};

	struct nicename("Cluster Portals") s_cluster_portals_definition_legacy
	{
		enum nicename("Flags") b_flags : uint32_t /* bitfield */
		{
			/*nicename("Bit 0")*/ _flags_bit_0 = 1ui32 << 0ui32,
			/*nicename("Bit 1")*/ _flags_bit_1 = 1ui32 << 1ui32,
			/*nicename("Bit 2")*/ _flags_bit_2 = 1ui32 << 2ui32,
			/*nicename("Bit 3")*/ _flags_bit_3 = 1ui32 << 3ui32,
			/*nicename("Bit 4")*/ _flags_bit_4 = 1ui32 << 4ui32,
			/*nicename("Bit 5")*/ _flags_bit_5 = 1ui32 << 5ui32,
			/*nicename("Bit 6")*/ _flags_bit_6 = 1ui32 << 6ui32,
			/*nicename("Bit 7")*/ _flags_bit_7 = 1ui32 << 7ui32,
			/*nicename("Bit 8")*/ _flags_bit_8 = 1ui32 << 8ui32,
			/*nicename("Bit 9")*/ _flags_bit_9 = 1ui32 << 9ui32,
			/*nicename("Bit 10")*/ _flags_bit_10 = 1ui32 << 10ui32,
			/*nicename("Bit 11")*/ _flags_bit_11 = 1ui32 << 11ui32,
			/*nicename("Bit 12")*/ _flags_bit_12 = 1ui32 << 12ui32,
			/*nicename("Bit 13")*/ _flags_bit_13 = 1ui32 << 13ui32,
			/*nicename("Bit 14")*/ _flags_bit_14 = 1ui32 << 14ui32,
			/*nicename("Bit 15")*/ _flags_bit_15 = 1ui32 << 15ui32,
			/*nicename("Bit 16")*/ _flags_bit_16 = 1ui32 << 16ui32,
			/*nicename("Bit 17")*/ _flags_bit_17 = 1ui32 << 17ui32,
			/*nicename("Bit 18")*/ _flags_bit_18 = 1ui32 << 18ui32,
			/*nicename("Bit 19")*/ _flags_bit_19 = 1ui32 << 19ui32,
			/*nicename("Bit 20")*/ _flags_bit_20 = 1ui32 << 20ui32,
			/*nicename("Bit 21")*/ _flags_bit_21 = 1ui32 << 21ui32,
			/*nicename("Bit 22")*/ _flags_bit_22 = 1ui32 << 22ui32,
			/*nicename("Bit 23")*/ _flags_bit_23 = 1ui32 << 23ui32,
			/*nicename("Bit 24")*/ _flags_bit_24 = 1ui32 << 24ui32,
			/*nicename("Bit 25")*/ _flags_bit_25 = 1ui32 << 25ui32,
			/*nicename("Bit 26")*/ _flags_bit_26 = 1ui32 << 26ui32,
			/*nicename("Bit 27")*/ _flags_bit_27 = 1ui32 << 27ui32,
			/*nicename("Bit 28")*/ _flags_bit_28 = 1ui32 << 28ui32,
			/*nicename("Bit 29")*/ _flags_bit_29 = 1ui32 << 29ui32,
			/*nicename("Bit 30")*/ _flags_bit_30 = 1ui32 << 30ui32,
			/*nicename("Bit 31")*/ _flags_bit_31 = 1ui32 << 31ui32,
		};

		struct nicename("Vertices") s_vertices_definition_legacy
		{
			float nicename("X") x;
			float nicename("Y") y;
			float nicename("Z") z;
		};

		float nicename("X") x;
		float nicename("Y") y;
		float nicename("Z") z;
		float __unknown0;
		float __unknown1;
		float __unknown2;
		float __unknown3;
		float __unknown4;
		float __unknown5;
		float __unknown6;
		int16_t nicename("Back Cluster") back_cluster;
		int16_t nicename("Front Cluster") front_cluster;
		int32_t nicename("Plane Index") plane_index;
		float nicename("Centroid X") centroid_x;
		float nicename("Centroid Y") centroid_y;
		float nicename("Centroid Z") centroid_z;
		float nicename("Bounding Radius") bounding_radius;
		b_flags nicename("Flags") flags;
		s_tag_block_legacy<s_vertices_definition_legacy> nicename("Vertices") vertices_block;
	};

	struct nicename("Detail Objects") s_detail_objects_definition_legacy
	{
		s_undefined32_legacy __unknown0;
		s_undefined32_legacy __unknown1;
		s_undefined32_legacy __unknown2;
		s_undefined32_legacy __unknown3;
		s_undefined32_legacy __unknown4;
		s_undefined32_legacy __unknown5;
		s_undefined32_legacy __unknown6;
		s_undefined32_legacy __unknown7;
		s_undefined32_legacy __unknown8;
		s_undefined32_legacy __unknown9;
		s_undefined32_legacy __unknown10;
		s_undefined32_legacy __unknown11;
		s_undefined32_legacy __unknown12;
	};

	struct nicename("Clusters") s_clusters_definition_legacy
	{
		struct nicename("Portals") s_portals_definition_legacy
		{
			int16_t nicename("Portal Index") portal_index;
		};

		struct nicename("Seams") s_seams_definition_legacy
		{
			int8_t nicename("Seam Index") seam_index;
		};

		struct nicename("Decorator Grids") s_decorator_grids_definition_legacy
		{
			struct nicename("Unknown") s_unknown1_definition_legacy
			{
				s_undefined32_legacy __unknown0;
				s_undefined32_legacy __unknown1;
			};

			int16_t nicename("Amount") amount;
			int8_t nicename("Decorator Index") decorator_index;
			int8_t nicename("Decorator Index - Scattering") decorator_index___scattering;
			int32_t __unknown0;
			float nicename("Position X") position_x;
			float nicename("Position Y") position_y;
			float nicename("Position Z") position_z;
			float nicename("Radius") radius;
			float nicename("Grid Size X") grid_size_x;
			float nicename("Grid Size Y") grid_size_y;
			float nicename("Grid Size Z") grid_size_z;
			float nicename("Bounding Sphere X") bounding_sphere_x;
			float nicename("Bounding Sphere Y") bounding_sphere_y;
			float nicename("Bounding Sphere Z") bounding_sphere_z;
			s_tag_block_legacy<s_unknown1_definition_legacy> __unknown1;
		};

		struct nicename("Unknown 10") s_unknown_10_definition_legacy
		{
			s_undefined32_legacy __unknown0;
		};

		struct nicename("Unknown 11") s_unknown_11_definition_legacy
		{
			struct nicename("Unknown 12") s_unknown_12_definition_legacy
			{
				float __unknown0;
				float __unknown1;
				float __unknown2;
				s_undefined32_legacy __unknown3;
			};

			int16_t __unknown0;
			int16_t __unknown1;
			s_tag_block_legacy<s_unknown_12_definition_legacy> nicename("Unknown 12") unknown_12_block;
		};

		float nicename("Bounds X min") bounds_x_min;
		float nicename("Bounds X max") bounds_x_max;
		float nicename("Bounds Y min") bounds_y_min;
		float nicename("Bounds Y max") bounds_y_max;
		float nicename("Bounds Z min") bounds_z_min;
		float nicename("Bounds Z max") bounds_z_max;
		int8_t __unknown0;
		int8_t __unknown1;
		int8_t __unknown2;
		int8_t __unknown3;
		int16_t __unknown4;
		int16_t __unknown5;
		int16_t nicename("Runtime Decal Start Index") runtime_decal_start_index;
		int16_t nicename("Runtime Decal Entry Count") runtime_decal_entry_count;
		int16_t __unknown6;
		int16_t __unknown7;
		int16_t __unknown8;
		int16_t __unknown9;
		int16_t __unknown10;
		int16_t __unknown11;
		s_undefined32_legacy __unknown12;
		s_tag_block_legacy<s_portals_definition_legacy> nicename("Portals") portals_block;
		int16_t nicename("Mesh Index") mesh_index;
		int16_t __unknown13;
		s_tag_block_legacy<s_seams_definition_legacy> nicename("Seams") seams_block;
		s_tag_block_legacy<s_decorator_grids_definition_legacy> nicename("Decorator Grids") decorator_grids_block;
		s_undefined32_legacy __unknown14;
		s_undefined32_legacy __unknown15;
		s_undefined32_legacy __unknown16;
		s_undefined32_legacy __unknown17;
		s_undefined32_legacy __unknown18;
		s_undefined32_legacy __unknown19;
		s_tag_block_legacy<s_unknown_10_definition_legacy> nicename("Unknown 10") unknown_10_block;
		s_tag_block_legacy<s_unknown_11_definition_legacy> nicename("Unknown 11") unknown_11_block;
	};

	struct nicename("Materials") s_materials_definition_legacy
	{
		s_tag_reference_legacy nicename("Shader") shader_reference;
		int32_t __unknown0;
		float __unknown1;
		s_undefined32_legacy __unknown2;
		int8_t __unknown3;
		int8_t __unknown4;
		int8_t __unknown5;
		int8_t __unknown6;
		float __unknown7;
		float __unknown8;
		int8_t __unknown9;
		int8_t nicename("Breakable Surface Index") breakable_surface_index;
		int8_t __unknown10;
		int8_t __unknown11;
	};

	struct nicename("Sky Owner Cluster") s_sky_owner_cluster_definition_legacy
	{
		int16_t nicename("Cluster Owner") cluster_owner;
	};

	struct nicename("Background Sound Environment Palette") s_background_sound_environment_palette_definition_legacy
	{
		enum nicename("Scale Flags") b_scale_flags : uint32_t /* bitfield */
		{
			/*nicename("Bit 0")*/ _scale_flags_bit_0 = 1ui32 << 0ui32,
			/*nicename("Bit 1")*/ _scale_flags_bit_1 = 1ui32 << 1ui32,
			/*nicename("Bit 2")*/ _scale_flags_bit_2 = 1ui32 << 2ui32,
			/*nicename("Bit 3")*/ _scale_flags_bit_3 = 1ui32 << 3ui32,
			/*nicename("Bit 4")*/ _scale_flags_bit_4 = 1ui32 << 4ui32,
			/*nicename("Bit 5")*/ _scale_flags_bit_5 = 1ui32 << 5ui32,
			/*nicename("Bit 6")*/ _scale_flags_bit_6 = 1ui32 << 6ui32,
			/*nicename("Bit 7")*/ _scale_flags_bit_7 = 1ui32 << 7ui32,
			/*nicename("Bit 8")*/ _scale_flags_bit_8 = 1ui32 << 8ui32,
			/*nicename("Bit 9")*/ _scale_flags_bit_9 = 1ui32 << 9ui32,
			/*nicename("Bit 10")*/ _scale_flags_bit_10 = 1ui32 << 10ui32,
			/*nicename("Bit 11")*/ _scale_flags_bit_11 = 1ui32 << 11ui32,
			/*nicename("Bit 12")*/ _scale_flags_bit_12 = 1ui32 << 12ui32,
			/*nicename("Bit 13")*/ _scale_flags_bit_13 = 1ui32 << 13ui32,
			/*nicename("Bit 14")*/ _scale_flags_bit_14 = 1ui32 << 14ui32,
			/*nicename("Bit 15")*/ _scale_flags_bit_15 = 1ui32 << 15ui32,
			/*nicename("Bit 16")*/ _scale_flags_bit_16 = 1ui32 << 16ui32,
			/*nicename("Bit 17")*/ _scale_flags_bit_17 = 1ui32 << 17ui32,
			/*nicename("Bit 18")*/ _scale_flags_bit_18 = 1ui32 << 18ui32,
			/*nicename("Bit 19")*/ _scale_flags_bit_19 = 1ui32 << 19ui32,
			/*nicename("Bit 20")*/ _scale_flags_bit_20 = 1ui32 << 20ui32,
			/*nicename("Bit 21")*/ _scale_flags_bit_21 = 1ui32 << 21ui32,
			/*nicename("Bit 22")*/ _scale_flags_bit_22 = 1ui32 << 22ui32,
			/*nicename("Bit 23")*/ _scale_flags_bit_23 = 1ui32 << 23ui32,
			/*nicename("Bit 24")*/ _scale_flags_bit_24 = 1ui32 << 24ui32,
			/*nicename("Bit 25")*/ _scale_flags_bit_25 = 1ui32 << 25ui32,
			/*nicename("Bit 26")*/ _scale_flags_bit_26 = 1ui32 << 26ui32,
			/*nicename("Bit 27")*/ _scale_flags_bit_27 = 1ui32 << 27ui32,
			/*nicename("Bit 28")*/ _scale_flags_bit_28 = 1ui32 << 28ui32,
			/*nicename("Bit 29")*/ _scale_flags_bit_29 = 1ui32 << 29ui32,
			/*nicename("Bit 30")*/ _scale_flags_bit_30 = 1ui32 << 30ui32,
			/*nicename("Bit 31")*/ _scale_flags_bit_31 = 1ui32 << 31ui32,
		};

		string_id_legacy nicename("Name") name;
		s_tag_reference_legacy nicename("Sound Environment") sound_environment_reference;
		int32_t __unknown0;
		float nicename("Cutoff Distance") cutoff_distance;
		float nicename("Interpolation Speed") interpolation_speed;
		s_tag_reference_legacy nicename("Background Sound") background_sound_reference;
		s_tag_reference_legacy nicename("Inside Cluster Sound") inside_cluster_sound_reference;
		s_tag_reference_legacy nicename("Transition In") transition_in_reference;
		s_tag_reference_legacy nicename("Transition Out") transition_out_reference;
		float nicename("Cutoff Distance") cutoff_distance1;
		b_scale_flags nicename("Scale Flags") scale_flags;
		float nicename("Interior Scale") interior_scale;
		float nicename("Portal Scale") portal_scale;
		float nicename("Exterior Scale") exterior_scale;
		float nicename("Interpolation Speed") interpolation_speed1;
	};

	struct nicename("Markers") s_markers_definition_legacy
	{
		int16_t __unknown0;
		int16_t __unknown1;
		char nicename("Name") name[32];
		float nicename("Rotation i") rotation_i;
		float nicename("Rotation j") rotation_j;
		float nicename("Rotation k") rotation_k;
		float nicename("Rotation w") rotation_w;
		float nicename("Position x") position_x;
		float nicename("Position y") position_y;
		float nicename("Position z") position_z;
	};

	struct nicename("Unknown 11") s_unknown_111_definition_legacy
	{
		int16_t __unknown0;
	};

	struct nicename("Runtime Decals") s_runtime_decals_definition_legacy
	{
		int16_t nicename("Palette Index") palette_index;
		int8_t nicename("Yaw") yaw;
		int8_t nicename("Pitch") pitch;
		float nicename("i") i;
		float nicename("j") j;
		float nicename("k") k;
		float nicename("w") w;
		float nicename("X") x;
		float nicename("Y") y;
		float nicename("Z") z;
		float nicename("Scale min") scale_min;
		float nicename("Scale max") scale_max;
	};

	struct nicename("Environment Object Palette") s_environment_object_palette_definition_legacy
	{
		enum nicename("Object Type") b_object_type : uint32_t /* bitfield */
		{
			/*nicename("Biped")*/ _object_type_biped = 1ui32 << 0ui32,
			/*nicename("Vehicle")*/ _object_type_vehicle = 1ui32 << 1ui32,
			/*nicename("Weapon")*/ _object_type_weapon = 1ui32 << 2ui32,
			/*nicename("Equipment")*/ _object_type_equipment = 1ui32 << 3ui32,
			/*nicename("Terminal")*/ _object_type_terminal = 1ui32 << 4ui32,
			/*nicename("Projectile")*/ _object_type_projectile = 1ui32 << 5ui32,
			/*nicename("Scenery")*/ _object_type_scenery = 1ui32 << 6ui32,
			/*nicename("Machine")*/ _object_type_machine = 1ui32 << 7ui32,
			/*nicename("Control")*/ _object_type_control = 1ui32 << 8ui32,
			/*nicename("Sound Scenery")*/ _object_type_sound_scenery = 1ui32 << 9ui32,
			/*nicename("Crate")*/ _object_type_crate = 1ui32 << 10ui32,
			/*nicename("Creature")*/ _object_type_creature = 1ui32 << 11ui32,
			/*nicename("Giant")*/ _object_type_giant = 1ui32 << 12ui32,
			/*nicename("Effect Scenery")*/ _object_type_effect_scenery = 1ui32 << 13ui32,
			/*nicename("Bit 14")*/ _object_type_bit_14 = 1ui32 << 14ui32,
			/*nicename("Bit 15")*/ _object_type_bit_15 = 1ui32 << 15ui32,
			/*nicename("Bit 16")*/ _object_type_bit_16 = 1ui32 << 16ui32,
			/*nicename("Bit 17")*/ _object_type_bit_17 = 1ui32 << 17ui32,
			/*nicename("Bit 18")*/ _object_type_bit_18 = 1ui32 << 18ui32,
			/*nicename("Bit 19")*/ _object_type_bit_19 = 1ui32 << 19ui32,
			/*nicename("Bit 20")*/ _object_type_bit_20 = 1ui32 << 20ui32,
			/*nicename("Bit 21")*/ _object_type_bit_21 = 1ui32 << 21ui32,
			/*nicename("Bit 22")*/ _object_type_bit_22 = 1ui32 << 22ui32,
			/*nicename("Bit 23")*/ _object_type_bit_23 = 1ui32 << 23ui32,
			/*nicename("Bit 24")*/ _object_type_bit_24 = 1ui32 << 24ui32,
			/*nicename("Bit 25")*/ _object_type_bit_25 = 1ui32 << 25ui32,
			/*nicename("Bit 26")*/ _object_type_bit_26 = 1ui32 << 26ui32,
			/*nicename("Bit 27")*/ _object_type_bit_27 = 1ui32 << 27ui32,
			/*nicename("Bit 28")*/ _object_type_bit_28 = 1ui32 << 28ui32,
			/*nicename("Bit 29")*/ _object_type_bit_29 = 1ui32 << 29ui32,
			/*nicename("Bit 30")*/ _object_type_bit_30 = 1ui32 << 30ui32,
			/*nicename("Bit 31")*/ _object_type_bit_31 = 1ui32 << 31ui32,
		};

		s_tag_reference_legacy nicename("Definition") definition_reference;
		s_tag_reference_legacy nicename("Model") model_reference;
		b_object_type nicename("Object Type") object_type;
	};

	struct nicename("Environment Objects") s_environment_objects_definition_legacy
	{
		char nicename("Name String") name_string[32];
		float nicename("Rotation i") rotation_i;
		float nicename("Rotation j") rotation_j;
		float nicename("Rotation k") rotation_k;
		float nicename("Rotation w") rotation_w;
		float nicename("Position x") position_x;
		float nicename("Position y") position_y;
		float nicename("Position z") position_z;
		float nicename("Scale") scale;
		int16_t nicename("Palette Index") palette_index;
		int16_t __unknown0;
		int32_t nicename("Unique ID") unique_id;
		char nicename("Scenario Object Name") scenario_object_name[4];
		string_id_legacy nicename("Name") name;
		int32_t __unknown1;
	};

	struct nicename("Instanced Geometry Groups") s_instanced_geometry_groups_definition_legacy
	{
		enum b_unknown2 : uint32_t /* bitfield */
		{
			/*nicename("Visible Something")*/ _unknown2_visible_something = 1ui32 << 0ui32,
			/*nicename("Bit 1")*/ _unknown2_bit_1 = 1ui32 << 1ui32,
			/*nicename("Bit 2")*/ _unknown2_bit_2 = 1ui32 << 2ui32,
			/*nicename("Bit 3")*/ _unknown2_bit_3 = 1ui32 << 3ui32,
			/*nicename("Bit 4")*/ _unknown2_bit_4 = 1ui32 << 4ui32,
			/*nicename("Bit 5")*/ _unknown2_bit_5 = 1ui32 << 5ui32,
			/*nicename("Bit 6")*/ _unknown2_bit_6 = 1ui32 << 6ui32,
			/*nicename("Bit 7")*/ _unknown2_bit_7 = 1ui32 << 7ui32,
			/*nicename("Bit 8")*/ _unknown2_bit_8 = 1ui32 << 8ui32,
			/*nicename("Bit 9")*/ _unknown2_bit_9 = 1ui32 << 9ui32,
			/*nicename("Bit 10")*/ _unknown2_bit_10 = 1ui32 << 10ui32,
			/*nicename("Bit 11")*/ _unknown2_bit_11 = 1ui32 << 11ui32,
			/*nicename("Bit 12")*/ _unknown2_bit_12 = 1ui32 << 12ui32,
			/*nicename("Bit 13")*/ _unknown2_bit_13 = 1ui32 << 13ui32,
			/*nicename("Bit 14")*/ _unknown2_bit_14 = 1ui32 << 14ui32,
			/*nicename("Bit 15")*/ _unknown2_bit_15 = 1ui32 << 15ui32,
			/*nicename("Bit 16")*/ _unknown2_bit_16 = 1ui32 << 16ui32,
			/*nicename("Bit 17")*/ _unknown2_bit_17 = 1ui32 << 17ui32,
			/*nicename("Bit 18")*/ _unknown2_bit_18 = 1ui32 << 18ui32,
			/*nicename("Bit 19")*/ _unknown2_bit_19 = 1ui32 << 19ui32,
			/*nicename("Bit 20")*/ _unknown2_bit_20 = 1ui32 << 20ui32,
			/*nicename("Bit 21")*/ _unknown2_bit_21 = 1ui32 << 21ui32,
			/*nicename("Bit 22")*/ _unknown2_bit_22 = 1ui32 << 22ui32,
			/*nicename("Bit 23")*/ _unknown2_bit_23 = 1ui32 << 23ui32,
			/*nicename("Bit 24")*/ _unknown2_bit_24 = 1ui32 << 24ui32,
			/*nicename("Bit 25")*/ _unknown2_bit_25 = 1ui32 << 25ui32,
			/*nicename("Bit 26")*/ _unknown2_bit_26 = 1ui32 << 26ui32,
			/*nicename("Bit 27")*/ _unknown2_bit_27 = 1ui32 << 27ui32,
			/*nicename("Bit 28")*/ _unknown2_bit_28 = 1ui32 << 28ui32,
			/*nicename("Bit 29")*/ _unknown2_bit_29 = 1ui32 << 29ui32,
			/*nicename("Bit 30")*/ _unknown2_bit_30 = 1ui32 << 30ui32,
			/*nicename("Bit 31")*/ _unknown2_bit_31 = 1ui32 << 31ui32,
		};

		struct nicename("Members") s_members_definition_legacy
		{
			int16_t nicename("Sub Group Index") sub_group_index;
		};

		b_unknown2 __unknown0;
		s_tag_block_legacy<s_members_definition_legacy> nicename("Members") members_block;
	};

	struct nicename("Instanced Geometry Sub Groups") s_instanced_geometry_sub_groups_definition_legacy
	{
		struct nicename("Members") s_members1_definition_legacy
		{
			int16_t nicename("Name Index") name_index;
		};

		float nicename("X") x;
		float nicename("Y") y;
		float nicename("Z") z;
		float __unknown0;
		int16_t __unknown1;
		int16_t __unknown2;
		float __unknown3;
		float __unknown4;
		s_tag_block_legacy<s_members1_definition_legacy> nicename("Members") members_block;
	};

	struct nicename("Instanced Geometry Instances") s_instanced_geometry_instances_definition_legacy
	{
		string_id_legacy nicename("Name") name;
	};

	struct nicename("Decorators") s_decorators_definition_legacy
	{
		s_tag_reference_legacy nicename("Decorator") decorator_reference;
	};

	struct nicename("Meshes") s_meshes_definition_legacy
	{
		enum nicename("Vertex Type") e_vertex_type : uint8_t
		{
			/*nicename("World")*/ _vertex_type_world = 0ui8,
			/*nicename("Rigid")*/ _vertex_type_rigid = 1ui8,
			/*nicename("Skinned")*/ _vertex_type_skinned = 2ui8,
			/*nicename("Particle Model")*/ _vertex_type_particle_model = 3ui8,
			/*nicename("Flat World")*/ _vertex_type_flat_world = 4ui8,
			/*nicename("Flat Rigid")*/ _vertex_type_flat_rigid = 5ui8,
			/*nicename("Flat Skinned")*/ _vertex_type_flat_skinned = 6ui8,
			/*nicename("Screen")*/ _vertex_type_screen = 7ui8,
			/*nicename("Debug")*/ _vertex_type_debug = 8ui8,
			/*nicename("Transparent")*/ _vertex_type_transparent = 9ui8,
			/*nicename("Particle")*/ _vertex_type_particle = 10ui8,
			/*nicename("Contrail")*/ _vertex_type_contrail = 11ui8,
			/*nicename("Light Volume")*/ _vertex_type_light_volume = 12ui8,
			/*nicename("Chud Simple")*/ _vertex_type_chud_simple = 13ui8,
			/*nicename("Chud Fancy")*/ _vertex_type_chud_fancy = 14ui8,
			/*nicename("Decorator")*/ _vertex_type_decorator = 15ui8,
			/*nicename("Tiny Position")*/ _vertex_type_tiny_position = 16ui8,
			/*nicename("Patchy Fog")*/ _vertex_type_patchy_fog = 17ui8,
			/*nicename("Water")*/ _vertex_type_water = 18ui8,
			/*nicename("Ripple")*/ _vertex_type_ripple = 19ui8,
			/*nicename("Implicit")*/ _vertex_type_implicit = 20ui8,
			/*nicename("Beam")*/ _vertex_type_beam = 21ui8,
			/*nicename("World Tessellated")*/ _vertex_type_world_tessellated = 22ui8,
			/*nicename("Rigid Tessellated")*/ _vertex_type_rigid_tessellated = 23ui8,
			/*nicename("Skinned Tessellated")*/ _vertex_type_skinned_tessellated = 24ui8,
			/*nicename("Shader Cache")*/ _vertex_type_shader_cache = 25ui8,
			/*nicename("Structure Instance Imposter")*/ _vertex_type_structure_instance_imposter = 26ui8,
			/*nicename("Object Imposter")*/ _vertex_type_object_imposter = 27ui8,
			/*nicename("Rigid Compressed")*/ _vertex_type_rigid_compressed = 28ui8,
			/*nicename("Skinned Compressed")*/ _vertex_type_skinned_compressed = 29ui8,
			/*nicename("Light Volume Precompiled")*/ _vertex_type_light_volume_precompiled = 30ui8,
		};

		enum nicename("PRT Type") e_prt_type : uint8_t
		{
			/*nicename("None")*/ _prt_type_none = 0ui8,
			/*nicename("Ambient")*/ _prt_type_ambient = 1ui8,
			/*nicename("Linear")*/ _prt_type_linear = 2ui8,
			/*nicename("Quadratic")*/ _prt_type_quadratic = 3ui8,
		};

		enum nicename("Index Buffer Type") e_index_buffer_type : uint8_t
		{
			/*nicename("Point List")*/ _index_buffer_type_point_list = 0ui8,
			/*nicename("Line List")*/ _index_buffer_type_line_list = 1ui8,
			/*nicename("Line Strip")*/ _index_buffer_type_line_strip = 2ui8,
			/*nicename("Triange List")*/ _index_buffer_type_triange_list = 3ui8,
			/*nicename("Triange Fan")*/ _index_buffer_type_triange_fan = 4ui8,
			/*nicename("Triange Strip")*/ _index_buffer_type_triange_strip = 5ui8,
		};

		enum nicename("Flags") b_flags : uint16_t /* bitfield */
		{
			/*nicename("Has Vertex Colors")*/ _flags_has_vertex_colors = 1ui16 << 0ui16,
			/*nicename("Bit 1")*/ _flags_bit_1 = 1ui16 << 1ui16,
			/*nicename("Bit 2")*/ _flags_bit_2 = 1ui16 << 2ui16,
			/*nicename("Bit 3")*/ _flags_bit_3 = 1ui16 << 3ui16,
			/*nicename("Bit 4")*/ _flags_bit_4 = 1ui16 << 4ui16,
			/*nicename("Bit 5")*/ _flags_bit_5 = 1ui16 << 5ui16,
			/*nicename("Bit 6")*/ _flags_bit_6 = 1ui16 << 6ui16,
			/*nicename("Bit 7")*/ _flags_bit_7 = 1ui16 << 7ui16,
			/*nicename("Bit 8")*/ _flags_bit_8 = 1ui16 << 8ui16,
			/*nicename("Bit 9")*/ _flags_bit_9 = 1ui16 << 9ui16,
			/*nicename("Bit 10")*/ _flags_bit_10 = 1ui16 << 10ui16,
			/*nicename("Bit 11")*/ _flags_bit_11 = 1ui16 << 11ui16,
			/*nicename("Bit 12")*/ _flags_bit_12 = 1ui16 << 12ui16,
			/*nicename("Bit 13")*/ _flags_bit_13 = 1ui16 << 13ui16,
			/*nicename("Bit 14")*/ _flags_bit_14 = 1ui16 << 14ui16,
			/*nicename("Bit 15")*/ _flags_bit_15 = 1ui16 << 15ui16,
		};

		struct nicename("Parts") s_parts_definition_legacy
		{
			int16_t nicename("Material Index") material_index;
			int16_t nicename("'Unknown Nodey' Index") unknown_nodey_index;
			int32_t nicename("Index Buffer Start") index_buffer_start;
			int32_t nicename("Index Buffer Count") index_buffer_count;
			int16_t nicename("Subpart Start") subpart_start;
			int16_t nicename("Subpart Count") subpart_count;
			int8_t nicename("Unknown Enum?") unknown_enum;
			int8_t __unknown0;
			int8_t __unknown1;
			int8_t __unknown2;
			int16_t nicename("Vertex Count") vertex_count;
			int16_t __unknown3;
		};

		struct nicename("Subparts") s_subparts_definition_legacy
		{
			int32_t nicename("Index Buffer Start") index_buffer_start;
			int32_t nicename("Index Buffer Count") index_buffer_count;
			int16_t nicename("Part Index") part_index;
			int16_t nicename("Vertex Count") vertex_count;
			int32_t __unknown0;
		};

		struct nicename("Instanced Geometry Indices") s_instanced_geometry_indices_definition_legacy
		{
			struct nicename("Instanced Geometry Mesh Contents") s_instanced_geometry_mesh_contents_definition_legacy
			{
				int16_t nicename("Instanced Geometry Index") instanced_geometry_index;
			};

			int16_t nicename("Instanced Geometry Mesh Index 1") instanced_geometry_mesh_index_1;
			int16_t nicename("Instanced Geometry Mesh Index 2") instanced_geometry_mesh_index_2;
			s_tag_block_legacy<s_instanced_geometry_mesh_contents_definition_legacy> nicename("Instanced Geometry Mesh Contents") instanced_geometry_mesh_contents_block;
		};

		struct nicename("Unknown Water") s_unknown_water_definition_legacy
		{
			int16_t __unknown0;
		};

		s_tag_block_legacy<s_parts_definition_legacy> nicename("Parts") parts_block;
		s_tag_block_legacy<s_subparts_definition_legacy> nicename("Subparts") subparts_block;
		int16_t nicename("Vertex Buffer Index 1") vertex_buffer_index_1;
		int16_t nicename("Vertex Buffer Index 2") vertex_buffer_index_2;
		int16_t nicename("Vertex Buffer Index 3") vertex_buffer_index_3;
		int16_t nicename("Vertex Buffer Index 4") vertex_buffer_index_4;
		int16_t nicename("Vertex Buffer Index 5") vertex_buffer_index_5;
		int16_t nicename("Vertex Buffer Index 6") vertex_buffer_index_6;
		int16_t nicename("Vertex Buffer Index 7") vertex_buffer_index_7;
		int16_t nicename("Vertex Buffer Index 8") vertex_buffer_index_8;
		int16_t nicename("Index Buffer Index 1") index_buffer_index_1;
		int16_t nicename("Index Buffer Index 2") index_buffer_index_2;
		b_flags nicename("Flags") flags;
		int8_t nicename("Rigid Node") rigid_node;
		e_vertex_type nicename("Vertex Type") vertex_type;
		e_prt_type nicename("PRT Type") prt_type;
		int8_t __unknown0;
		e_index_buffer_type nicename("Index Buffer Type") index_buffer_type;
		int8_t __unknown1;
		s_tag_block_legacy<s_instanced_geometry_indices_definition_legacy> nicename("Instanced Geometry Indices") instanced_geometry_indices_block;
		s_tag_block_legacy<s_unknown_water_definition_legacy> nicename("Unknown Water") unknown_water_block;
		s_undefined32_legacy __unknown2;
		s_undefined32_legacy __unknown3;
		s_undefined32_legacy __unknown4;
		s_undefined32_legacy __unknown5;
	};

	struct nicename("Compression Info") s_compression_info_definition_legacy
	{
		int16_t __unknown0;
		int16_t __unknown1;
		float nicename("Position Bounds X min") position_bounds_x_min;
		float nicename("Position Bounds X max") position_bounds_x_max;
		float nicename("Position Bounds Y min") position_bounds_y_min;
		float nicename("Position Bounds Y max") position_bounds_y_max;
		float nicename("Position Bounds Z min") position_bounds_z_min;
		float nicename("Position Bounds Z max") position_bounds_z_max;
		float nicename("Texcoord Bounds X min") texcoord_bounds_x_min;
		float nicename("Texcoord Bounds X max") texcoord_bounds_x_max;
		float nicename("Texcoord Bounds Y min") texcoord_bounds_y_min;
		float nicename("Texcoord Bounds Y max") texcoord_bounds_y_max;
		s_undefined32_legacy __unknown2;
		s_undefined32_legacy __unknown3;
	};

	struct nicename("Unknown Nodey") s_unknown_nodey_definition_legacy
	{
		float __unknown0;
		float __unknown1;
		float __unknown2;
		float __unknown3;
		float __unknown4;
		float __unknown5;
		float __unknown6;
		float __unknown7;
		int8_t nicename("Node Index") node_index;
		int8_t nicename("Node Index") node_index1;
		int8_t nicename("Node Index") node_index2;
		int8_t nicename("Node Index") node_index3;
		float __unknown8;
		float __unknown9;
		float __unknown10;
	};

	struct nicename("Unknown 30") s_unknown_30_definition_legacy
	{
		int16_t __unknown0;
		int16_t __unknown1;
		s_data_reference_legacy __unknown2;
	};

	struct nicename("Node Maps") s_node_maps_definition_legacy
	{
		struct nicename("Unknown") s_unknown2_definition_legacy
		{
			uint8_t nicename("Node Index") node_index;
		};

		s_tag_block_legacy<s_unknown2_definition_legacy> __unknown0;
	};

	struct nicename("Unknown Yo") s_unknown_yo_definition_legacy
	{
		int16_t nicename("Unknown Index") unknown_index;
	};

	struct nicename("Water Meshes") s_water_meshes_definition_legacy
	{
		int16_t nicename("Mesh Index") mesh_index;
		int16_t __unknown0;
		float nicename("X Min") x_min;
		float nicename("X Max") x_max;
		float nicename("Y Min") y_min;
		float nicename("Y Max") y_max;
		float nicename("Z Min") z_min;
		float nicename("Z Max") z_max;
	};

	struct nicename("Unknown Compression Info") s_unknown_compression_info_definition_legacy
	{
		uint32_t nicename("Polyart Asset Address") polyart_asset_address;
		s_undefined32_legacy __unknown0;
		s_undefined32_legacy __unknown1;
	};

	struct nicename("Decals") s_decals_definition_legacy
	{
		s_tag_reference_legacy nicename("Decal") decal_reference;
		int16_t __unknown0;
		int16_t __unknown1;
		int16_t __unknown2;
		int16_t __unknown3;
		float nicename("X") x;
		float nicename("Y") y;
		float nicename("Z") z;
		int16_t nicename("Decal Property Index") decal_property_index;
		int16_t __unknown4;
	};

	struct nicename("Decal Properties") s_decal_properties_definition_legacy
	{
		int16_t __unknown0;
		int16_t __unknown1;
		int16_t __unknown2;
		int16_t __unknown3;
		s_undefined32_legacy __unknown4;
		float nicename("X") x;
		float nicename("Y") y;
		float nicename("Tile X") tile_x;
		float nicename("Tile Y") tile_y;
	};

	struct nicename("Meshes") s_meshes1_definition_legacy
	{
		enum nicename("Vertex Type") e_vertex_type : uint8_t
		{
			/*nicename("World")*/ _vertex_type_world = 0ui8,
			/*nicename("Rigid")*/ _vertex_type_rigid = 1ui8,
			/*nicename("Skinned")*/ _vertex_type_skinned = 2ui8,
			/*nicename("Particle Model")*/ _vertex_type_particle_model = 3ui8,
			/*nicename("Flat World")*/ _vertex_type_flat_world = 4ui8,
			/*nicename("Flat Rigid")*/ _vertex_type_flat_rigid = 5ui8,
			/*nicename("Flat Skinned")*/ _vertex_type_flat_skinned = 6ui8,
			/*nicename("Screen")*/ _vertex_type_screen = 7ui8,
			/*nicename("Debug")*/ _vertex_type_debug = 8ui8,
			/*nicename("Transparent")*/ _vertex_type_transparent = 9ui8,
			/*nicename("Particle")*/ _vertex_type_particle = 10ui8,
			/*nicename("Contrail")*/ _vertex_type_contrail = 11ui8,
			/*nicename("Light Volume")*/ _vertex_type_light_volume = 12ui8,
			/*nicename("Chud Simple")*/ _vertex_type_chud_simple = 13ui8,
			/*nicename("Chud Fancy")*/ _vertex_type_chud_fancy = 14ui8,
			/*nicename("Decorator")*/ _vertex_type_decorator = 15ui8,
			/*nicename("Tiny Position")*/ _vertex_type_tiny_position = 16ui8,
			/*nicename("Patchy Fog")*/ _vertex_type_patchy_fog = 17ui8,
			/*nicename("Water")*/ _vertex_type_water = 18ui8,
			/*nicename("Ripple")*/ _vertex_type_ripple = 19ui8,
			/*nicename("Implicit")*/ _vertex_type_implicit = 20ui8,
			/*nicename("Beam")*/ _vertex_type_beam = 21ui8,
			/*nicename("World Tessellated")*/ _vertex_type_world_tessellated = 22ui8,
			/*nicename("Rigid Tessellated")*/ _vertex_type_rigid_tessellated = 23ui8,
			/*nicename("Skinned Tessellated")*/ _vertex_type_skinned_tessellated = 24ui8,
			/*nicename("Shader Cache")*/ _vertex_type_shader_cache = 25ui8,
			/*nicename("Structure Instance Imposter")*/ _vertex_type_structure_instance_imposter = 26ui8,
			/*nicename("Object Imposter")*/ _vertex_type_object_imposter = 27ui8,
			/*nicename("Rigid Compressed")*/ _vertex_type_rigid_compressed = 28ui8,
			/*nicename("Skinned Compressed")*/ _vertex_type_skinned_compressed = 29ui8,
			/*nicename("Light Volume Precompiled")*/ _vertex_type_light_volume_precompiled = 30ui8,
		};

		enum nicename("PRT Type") e_prt_type : uint8_t
		{
			/*nicename("None")*/ _prt_type_none = 0ui8,
			/*nicename("Ambient")*/ _prt_type_ambient = 1ui8,
			/*nicename("Linear")*/ _prt_type_linear = 2ui8,
			/*nicename("Quadratic")*/ _prt_type_quadratic = 3ui8,
		};

		enum nicename("Index Buffer Type") e_index_buffer_type : uint8_t
		{
			/*nicename("Point List")*/ _index_buffer_type_point_list = 0ui8,
			/*nicename("Line List")*/ _index_buffer_type_line_list = 1ui8,
			/*nicename("Line Strip")*/ _index_buffer_type_line_strip = 2ui8,
			/*nicename("Triange List")*/ _index_buffer_type_triange_list = 3ui8,
			/*nicename("Triange Fan")*/ _index_buffer_type_triange_fan = 4ui8,
			/*nicename("Triange Strip")*/ _index_buffer_type_triange_strip = 5ui8,
		};

		enum nicename("Flags") b_flags : uint16_t /* bitfield */
		{
			/*nicename("Has Vertex Colors")*/ _flags_has_vertex_colors = 1ui16 << 0ui16,
			/*nicename("Bit 1")*/ _flags_bit_1 = 1ui16 << 1ui16,
			/*nicename("Bit 2")*/ _flags_bit_2 = 1ui16 << 2ui16,
			/*nicename("Bit 3")*/ _flags_bit_3 = 1ui16 << 3ui16,
			/*nicename("Bit 4")*/ _flags_bit_4 = 1ui16 << 4ui16,
			/*nicename("Bit 5")*/ _flags_bit_5 = 1ui16 << 5ui16,
			/*nicename("Bit 6")*/ _flags_bit_6 = 1ui16 << 6ui16,
			/*nicename("Bit 7")*/ _flags_bit_7 = 1ui16 << 7ui16,
			/*nicename("Bit 8")*/ _flags_bit_8 = 1ui16 << 8ui16,
			/*nicename("Bit 9")*/ _flags_bit_9 = 1ui16 << 9ui16,
			/*nicename("Bit 10")*/ _flags_bit_10 = 1ui16 << 10ui16,
			/*nicename("Bit 11")*/ _flags_bit_11 = 1ui16 << 11ui16,
			/*nicename("Bit 12")*/ _flags_bit_12 = 1ui16 << 12ui16,
			/*nicename("Bit 13")*/ _flags_bit_13 = 1ui16 << 13ui16,
			/*nicename("Bit 14")*/ _flags_bit_14 = 1ui16 << 14ui16,
			/*nicename("Bit 15")*/ _flags_bit_15 = 1ui16 << 15ui16,
		};

		struct nicename("Parts") s_parts1_definition_legacy
		{
			int16_t nicename("Material Index") material_index;
			int16_t nicename("'Unknown Nodey' Index") unknown_nodey_index;
			int32_t nicename("Index Buffer Start") index_buffer_start;
			int32_t nicename("Index Buffer Count") index_buffer_count;
			int16_t nicename("Subpart Start") subpart_start;
			int16_t nicename("Subpart Count") subpart_count;
			int8_t nicename("Unknown Enum?") unknown_enum;
			int8_t __unknown0;
			int8_t __unknown1;
			int8_t __unknown2;
			int16_t nicename("Vertex Count") vertex_count;
			int16_t __unknown3;
		};

		struct nicename("Subparts") s_subparts1_definition_legacy
		{
			int32_t nicename("Index Buffer Start") index_buffer_start;
			int32_t nicename("Index Buffer Count") index_buffer_count;
			int16_t nicename("Part Index") part_index;
			int16_t nicename("Vertex Count") vertex_count;
			int32_t __unknown0;
		};

		struct nicename("Instanced Geometry Indices") s_instanced_geometry_indices1_definition_legacy
		{
			struct nicename("Instanced Geometry Mesh Contents") s_instanced_geometry_mesh_contents1_definition_legacy
			{
				int16_t nicename("Instanced Geometry Index") instanced_geometry_index;
			};

			int16_t nicename("Instanced Geometry Mesh Index 1") instanced_geometry_mesh_index_1;
			int16_t nicename("Instanced Geometry Mesh Index 2") instanced_geometry_mesh_index_2;
			s_tag_block_legacy<s_instanced_geometry_mesh_contents1_definition_legacy> nicename("Instanced Geometry Mesh Contents") instanced_geometry_mesh_contents_block;
		};

		struct nicename("Unknown Water") s_unknown_water1_definition_legacy
		{
			int16_t __unknown0;
		};

		s_tag_block_legacy<s_parts1_definition_legacy> nicename("Parts") parts_block;
		s_tag_block_legacy<s_subparts1_definition_legacy> nicename("Subparts") subparts_block;
		int16_t nicename("Vertex Buffer Index 1") vertex_buffer_index_1;
		int16_t nicename("Vertex Buffer Index 2") vertex_buffer_index_2;
		int16_t nicename("Vertex Buffer Index 3") vertex_buffer_index_3;
		int16_t nicename("Vertex Buffer Index 4") vertex_buffer_index_4;
		int16_t nicename("Vertex Buffer Index 5") vertex_buffer_index_5;
		int16_t nicename("Vertex Buffer Index 6") vertex_buffer_index_6;
		int16_t nicename("Vertex Buffer Index 7") vertex_buffer_index_7;
		int16_t nicename("Vertex Buffer Index 8") vertex_buffer_index_8;
		int16_t nicename("Index Buffer Index 1") index_buffer_index_1;
		int16_t nicename("Index Buffer Index 2") index_buffer_index_2;
		b_flags nicename("Flags") flags;
		int8_t nicename("Rigid Node") rigid_node;
		e_vertex_type nicename("Vertex Type") vertex_type;
		e_prt_type nicename("PRT Type") prt_type;
		int8_t __unknown0;
		e_index_buffer_type nicename("Index Buffer Type") index_buffer_type;
		int8_t __unknown1;
		s_tag_block_legacy<s_instanced_geometry_indices1_definition_legacy> nicename("Instanced Geometry Indices") instanced_geometry_indices_block;
		s_tag_block_legacy<s_unknown_water1_definition_legacy> nicename("Unknown Water") unknown_water_block;
		s_undefined32_legacy __unknown2;
		s_undefined32_legacy __unknown3;
		s_undefined32_legacy __unknown4;
		s_undefined32_legacy __unknown5;
	};

	struct nicename("Compression Info") s_compression_info1_definition_legacy
	{
		int16_t __unknown0;
		int16_t __unknown1;
		float nicename("Position Bounds X min") position_bounds_x_min;
		float nicename("Position Bounds X max") position_bounds_x_max;
		float nicename("Position Bounds Y min") position_bounds_y_min;
		float nicename("Position Bounds Y max") position_bounds_y_max;
		float nicename("Position Bounds Z min") position_bounds_z_min;
		float nicename("Position Bounds Z max") position_bounds_z_max;
		float nicename("Texcoord Bounds X min") texcoord_bounds_x_min;
		float nicename("Texcoord Bounds X max") texcoord_bounds_x_max;
		float nicename("Texcoord Bounds Y min") texcoord_bounds_y_min;
		float nicename("Texcoord Bounds Y max") texcoord_bounds_y_max;
		s_undefined32_legacy __unknown2;
		s_undefined32_legacy __unknown3;
	};

	struct nicename("Unknown Nodey") s_unknown_nodey1_definition_legacy
	{
		float __unknown0;
		float __unknown1;
		float __unknown2;
		float __unknown3;
		float __unknown4;
		float __unknown5;
		float __unknown6;
		float __unknown7;
		int8_t nicename("Node Index") node_index;
		int8_t nicename("Node Index") node_index1;
		int8_t nicename("Node Index") node_index2;
		int8_t nicename("Node Index") node_index3;
		float __unknown8;
		float __unknown9;
		float __unknown10;
	};

	struct nicename("Unknown 30") s_unknown_301_definition_legacy
	{
		int16_t __unknown0;
		int16_t __unknown1;
		s_data_reference_legacy __unknown2;
	};

	struct nicename("Node Maps") s_node_maps1_definition_legacy
	{
		struct nicename("Unknown") s_unknown3_definition_legacy
		{
			uint8_t nicename("Node Index") node_index;
		};

		s_tag_block_legacy<s_unknown3_definition_legacy> __unknown0;
	};

	struct nicename("Unknown Yo") s_unknown_yo1_definition_legacy
	{
		int16_t nicename("Unknown Index") unknown_index;
	};

	struct nicename("Water Meshes") s_water_meshes1_definition_legacy
	{
		int16_t nicename("Mesh Index") mesh_index;
		int16_t __unknown0;
		float nicename("X Min") x_min;
		float nicename("X Max") x_max;
		float nicename("Y Min") y_min;
		float nicename("Y Max") y_max;
		float nicename("Z Min") z_min;
		float nicename("Z Max") z_max;
	};

	struct nicename("Unknown Compression Info") s_unknown_compression_info1_definition_legacy
	{
		uint32_t nicename("Polyart Asset Address") polyart_asset_address;
		s_undefined32_legacy __unknown0;
		s_undefined32_legacy __unknown1;
	};

	struct nicename("Unknown Sound Clusters A") s_unknown_sound_clusters_a_definition_legacy
	{
		struct nicename("Portal Designators") s_portal_designators_definition_legacy
		{
			int16_t nicename("Portal Designator") portal_designator;
		};

		struct nicename("Interior Cluster Indices") s_interior_cluster_indices_definition_legacy
		{
			int16_t nicename("Interior Cluster Index") interior_cluster_index;
		};

		int16_t nicename("Background Sound Environment Index") background_sound_environment_index;
		int16_t __unknown0;
		s_tag_block_legacy<s_portal_designators_definition_legacy> nicename("Portal Designators") portal_designators_block;
		s_tag_block_legacy<s_interior_cluster_indices_definition_legacy> nicename("Interior Cluster Indices") interior_cluster_indices_block;
	};

	struct nicename("Transparent Planes") s_transparent_planes_definition_legacy
	{
		int16_t nicename("Mesh Index") mesh_index;
		int16_t nicename("Part Index") part_index;
		float nicename("Plane i") plane_i;
		float nicename("Plane j") plane_j;
		float nicename("Plane k") plane_k;
		float nicename("Plane d") plane_d;
	};

	struct nicename("Collision MOPP Codes") s_collision_mopp_codes_definition_legacy
	{
		struct nicename("Data") s_data_definition_legacy
		{
			uint8_t nicename("Data Byte") data_byte;
		};

		int32_t __unknown0;
		s_undefined32_legacy __unknown1;
		int16_t nicename("Size") size;
		int16_t nicename("Count") count;
		int32_t nicename("Offset") offset;
		s_undefined32_legacy __unknown2;
		s_undefined32_legacy __unknown3;
		s_undefined32_legacy __unknown4;
		s_undefined32_legacy __unknown5;
		float nicename("Offset x") offset_x;
		float nicename("Offset y") offset_y;
		float nicename("Offset z") offset_z;
		float nicename("Offset Scale") offset_scale;
		s_undefined32_legacy __unknown6;
		s_undefined32_legacy __unknown7;
		int32_t nicename("Data Size") data_size;
		uint32_t nicename("Data Capacity") data_capacity;
		s_undefined32_legacy __unknown8;
		s_undefined32_legacy __unknown9;
		s_undefined32_legacy __unknown10;
		s_undefined32_legacy __unknown11;
		s_tag_block_legacy<s_data_definition_legacy> nicename("Data") data_block;
		s_undefined32_legacy __unknown12;
	};

	struct nicename("Breakable Surface MOPP Codes") s_breakable_surface_mopp_codes_definition_legacy
	{
		struct nicename("Data") s_data1_definition_legacy
		{
			uint8_t nicename("Data Byte") data_byte;
		};

		int32_t __unknown0;
		s_undefined32_legacy __unknown1;
		int16_t nicename("Size") size;
		int16_t nicename("Count") count;
		int32_t nicename("Offset") offset;
		s_undefined32_legacy __unknown2;
		s_undefined32_legacy __unknown3;
		s_undefined32_legacy __unknown4;
		s_undefined32_legacy __unknown5;
		float nicename("Offset x") offset_x;
		float nicename("Offset y") offset_y;
		float nicename("Offset z") offset_z;
		float nicename("Offset Scale") offset_scale;
		s_undefined32_legacy __unknown6;
		s_undefined32_legacy __unknown7;
		int32_t nicename("Data Size") data_size;
		uint32_t nicename("Data Capacity") data_capacity;
		s_undefined32_legacy __unknown8;
		s_undefined32_legacy __unknown9;
		s_undefined32_legacy __unknown10;
		s_undefined32_legacy __unknown11;
		s_tag_block_legacy<s_data1_definition_legacy> nicename("Data") data_block;
		s_undefined32_legacy __unknown12;
	};

	struct nicename("Breakable Surface Key Table") s_breakable_surface_key_table_definition_legacy
	{
		int16_t nicename("Instanced Geometry Index") instanced_geometry_index;
		int8_t nicename("Breakable Surface Index") breakable_surface_index;
		uint8_t nicename("Breakable Surface Sub-Index") breakable_surface_sub_index;
		int32_t nicename("Seed Surface Index") seed_surface_index;
		float nicename("x0") x0;
		float nicename("x1") x1;
		float nicename("y0") y0;
		float nicename("y1") y1;
		float nicename("z0") z0;
		float nicename("z1") z1;
	};

	struct nicename("Meshes") s_meshes2_definition_legacy
	{
		enum nicename("Vertex Type") e_vertex_type : uint8_t
		{
			/*nicename("World")*/ _vertex_type_world = 0ui8,
			/*nicename("Rigid")*/ _vertex_type_rigid = 1ui8,
			/*nicename("Skinned")*/ _vertex_type_skinned = 2ui8,
			/*nicename("Particle Model")*/ _vertex_type_particle_model = 3ui8,
			/*nicename("Flat World")*/ _vertex_type_flat_world = 4ui8,
			/*nicename("Flat Rigid")*/ _vertex_type_flat_rigid = 5ui8,
			/*nicename("Flat Skinned")*/ _vertex_type_flat_skinned = 6ui8,
			/*nicename("Screen")*/ _vertex_type_screen = 7ui8,
			/*nicename("Debug")*/ _vertex_type_debug = 8ui8,
			/*nicename("Transparent")*/ _vertex_type_transparent = 9ui8,
			/*nicename("Particle")*/ _vertex_type_particle = 10ui8,
			/*nicename("Contrail")*/ _vertex_type_contrail = 11ui8,
			/*nicename("Light Volume")*/ _vertex_type_light_volume = 12ui8,
			/*nicename("Chud Simple")*/ _vertex_type_chud_simple = 13ui8,
			/*nicename("Chud Fancy")*/ _vertex_type_chud_fancy = 14ui8,
			/*nicename("Decorator")*/ _vertex_type_decorator = 15ui8,
			/*nicename("Tiny Position")*/ _vertex_type_tiny_position = 16ui8,
			/*nicename("Patchy Fog")*/ _vertex_type_patchy_fog = 17ui8,
			/*nicename("Water")*/ _vertex_type_water = 18ui8,
			/*nicename("Ripple")*/ _vertex_type_ripple = 19ui8,
			/*nicename("Implicit")*/ _vertex_type_implicit = 20ui8,
			/*nicename("Beam")*/ _vertex_type_beam = 21ui8,
			/*nicename("World Tessellated")*/ _vertex_type_world_tessellated = 22ui8,
			/*nicename("Rigid Tessellated")*/ _vertex_type_rigid_tessellated = 23ui8,
			/*nicename("Skinned Tessellated")*/ _vertex_type_skinned_tessellated = 24ui8,
			/*nicename("Shader Cache")*/ _vertex_type_shader_cache = 25ui8,
			/*nicename("Structure Instance Imposter")*/ _vertex_type_structure_instance_imposter = 26ui8,
			/*nicename("Object Imposter")*/ _vertex_type_object_imposter = 27ui8,
			/*nicename("Rigid Compressed")*/ _vertex_type_rigid_compressed = 28ui8,
			/*nicename("Skinned Compressed")*/ _vertex_type_skinned_compressed = 29ui8,
			/*nicename("Light Volume Precompiled")*/ _vertex_type_light_volume_precompiled = 30ui8,
		};

		enum nicename("PRT Type") e_prt_type : uint8_t
		{
			/*nicename("None")*/ _prt_type_none = 0ui8,
			/*nicename("Ambient")*/ _prt_type_ambient = 1ui8,
			/*nicename("Linear")*/ _prt_type_linear = 2ui8,
			/*nicename("Quadratic")*/ _prt_type_quadratic = 3ui8,
		};

		enum nicename("Index Buffer Type") e_index_buffer_type : uint8_t
		{
			/*nicename("Point List")*/ _index_buffer_type_point_list = 0ui8,
			/*nicename("Line List")*/ _index_buffer_type_line_list = 1ui8,
			/*nicename("Line Strip")*/ _index_buffer_type_line_strip = 2ui8,
			/*nicename("Triange List")*/ _index_buffer_type_triange_list = 3ui8,
			/*nicename("Triange Fan")*/ _index_buffer_type_triange_fan = 4ui8,
			/*nicename("Triange Strip")*/ _index_buffer_type_triange_strip = 5ui8,
		};

		enum nicename("Flags") b_flags : uint16_t /* bitfield */
		{
			/*nicename("Has Vertex Colors")*/ _flags_has_vertex_colors = 1ui16 << 0ui16,
			/*nicename("Bit 1")*/ _flags_bit_1 = 1ui16 << 1ui16,
			/*nicename("Bit 2")*/ _flags_bit_2 = 1ui16 << 2ui16,
			/*nicename("Bit 3")*/ _flags_bit_3 = 1ui16 << 3ui16,
			/*nicename("Bit 4")*/ _flags_bit_4 = 1ui16 << 4ui16,
			/*nicename("Bit 5")*/ _flags_bit_5 = 1ui16 << 5ui16,
			/*nicename("Bit 6")*/ _flags_bit_6 = 1ui16 << 6ui16,
			/*nicename("Bit 7")*/ _flags_bit_7 = 1ui16 << 7ui16,
			/*nicename("Bit 8")*/ _flags_bit_8 = 1ui16 << 8ui16,
			/*nicename("Bit 9")*/ _flags_bit_9 = 1ui16 << 9ui16,
			/*nicename("Bit 10")*/ _flags_bit_10 = 1ui16 << 10ui16,
			/*nicename("Bit 11")*/ _flags_bit_11 = 1ui16 << 11ui16,
			/*nicename("Bit 12")*/ _flags_bit_12 = 1ui16 << 12ui16,
			/*nicename("Bit 13")*/ _flags_bit_13 = 1ui16 << 13ui16,
			/*nicename("Bit 14")*/ _flags_bit_14 = 1ui16 << 14ui16,
			/*nicename("Bit 15")*/ _flags_bit_15 = 1ui16 << 15ui16,
		};

		struct nicename("Parts") s_parts2_definition_legacy
		{
			int16_t nicename("Material Index") material_index;
			int16_t nicename("'Unknown Nodey' Index") unknown_nodey_index;
			int32_t nicename("Index Buffer Start") index_buffer_start;
			int32_t nicename("Index Buffer Count") index_buffer_count;
			int16_t nicename("Subpart Start") subpart_start;
			int16_t nicename("Subpart Count") subpart_count;
			int8_t nicename("Unknown Enum?") unknown_enum;
			int8_t __unknown0;
			int8_t __unknown1;
			int8_t __unknown2;
			int16_t nicename("Vertex Count") vertex_count;
			int16_t __unknown3;
		};

		struct nicename("Subparts") s_subparts2_definition_legacy
		{
			int32_t nicename("Index Buffer Start") index_buffer_start;
			int32_t nicename("Index Buffer Count") index_buffer_count;
			int16_t nicename("Part Index") part_index;
			int16_t nicename("Vertex Count") vertex_count;
			int32_t __unknown0;
		};

		struct nicename("Instanced Geometry Indices") s_instanced_geometry_indices2_definition_legacy
		{
			struct nicename("Instanced Geometry Mesh Contents") s_instanced_geometry_mesh_contents2_definition_legacy
			{
				int16_t nicename("Instanced Geometry Index") instanced_geometry_index;
			};

			int16_t nicename("Instanced Geometry Mesh Index 1") instanced_geometry_mesh_index_1;
			int16_t nicename("Instanced Geometry Mesh Index 2") instanced_geometry_mesh_index_2;
			s_tag_block_legacy<s_instanced_geometry_mesh_contents2_definition_legacy> nicename("Instanced Geometry Mesh Contents") instanced_geometry_mesh_contents_block;
		};

		struct nicename("Unknown Water") s_unknown_water2_definition_legacy
		{
			int16_t __unknown0;
		};

		s_tag_block_legacy<s_parts2_definition_legacy> nicename("Parts") parts_block;
		s_tag_block_legacy<s_subparts2_definition_legacy> nicename("Subparts") subparts_block;
		int16_t nicename("Vertex Buffer Index 1") vertex_buffer_index_1;
		int16_t nicename("Vertex Buffer Index 2") vertex_buffer_index_2;
		int16_t nicename("Vertex Buffer Index 3") vertex_buffer_index_3;
		int16_t nicename("Vertex Buffer Index 4") vertex_buffer_index_4;
		int16_t nicename("Vertex Buffer Index 5") vertex_buffer_index_5;
		int16_t nicename("Vertex Buffer Index 6") vertex_buffer_index_6;
		int16_t nicename("Vertex Buffer Index 7") vertex_buffer_index_7;
		int16_t nicename("Vertex Buffer Index 8") vertex_buffer_index_8;
		int16_t nicename("Index Buffer Index 1") index_buffer_index_1;
		int16_t nicename("Index Buffer Index 2") index_buffer_index_2;
		b_flags nicename("Flags") flags;
		int8_t nicename("Rigid Node") rigid_node;
		e_vertex_type nicename("Vertex Type") vertex_type;
		e_prt_type nicename("PRT Type") prt_type;
		int8_t __unknown0;
		e_index_buffer_type nicename("Index Buffer Type") index_buffer_type;
		int8_t __unknown1;
		s_tag_block_legacy<s_instanced_geometry_indices2_definition_legacy> nicename("Instanced Geometry Indices") instanced_geometry_indices_block;
		s_tag_block_legacy<s_unknown_water2_definition_legacy> nicename("Unknown Water") unknown_water_block;
		s_undefined32_legacy __unknown2;
		s_undefined32_legacy __unknown3;
		s_undefined32_legacy __unknown4;
		s_undefined32_legacy __unknown5;
	};

	struct nicename("Compression Info") s_compression_info2_definition_legacy
	{
		int16_t __unknown0;
		int16_t __unknown1;
		float nicename("Position Bounds X min") position_bounds_x_min;
		float nicename("Position Bounds X max") position_bounds_x_max;
		float nicename("Position Bounds Y min") position_bounds_y_min;
		float nicename("Position Bounds Y max") position_bounds_y_max;
		float nicename("Position Bounds Z min") position_bounds_z_min;
		float nicename("Position Bounds Z max") position_bounds_z_max;
		float nicename("Texcoord Bounds X min") texcoord_bounds_x_min;
		float nicename("Texcoord Bounds X max") texcoord_bounds_x_max;
		float nicename("Texcoord Bounds Y min") texcoord_bounds_y_min;
		float nicename("Texcoord Bounds Y max") texcoord_bounds_y_max;
		s_undefined32_legacy __unknown2;
		s_undefined32_legacy __unknown3;
	};

	struct nicename("Unknown Nodey") s_unknown_nodey2_definition_legacy
	{
		float __unknown0;
		float __unknown1;
		float __unknown2;
		float __unknown3;
		float __unknown4;
		float __unknown5;
		float __unknown6;
		float __unknown7;
		int8_t nicename("Node Index") node_index;
		int8_t nicename("Node Index") node_index1;
		int8_t nicename("Node Index") node_index2;
		int8_t nicename("Node Index") node_index3;
		float __unknown8;
		float __unknown9;
		float __unknown10;
	};

	struct nicename("Unknown 30") s_unknown_302_definition_legacy
	{
		int16_t __unknown0;
		int16_t __unknown1;
		s_data_reference_legacy __unknown2;
	};

	struct nicename("Node Maps") s_node_maps2_definition_legacy
	{
		struct nicename("Unknown") s_unknown4_definition_legacy
		{
			uint8_t nicename("Node Index") node_index;
		};

		s_tag_block_legacy<s_unknown4_definition_legacy> __unknown0;
	};

	struct nicename("Unknown Yo") s_unknown_yo2_definition_legacy
	{
		int16_t nicename("Unknown Index") unknown_index;
	};

	struct nicename("Water Meshes") s_water_meshes2_definition_legacy
	{
		int16_t nicename("Mesh Index") mesh_index;
		int16_t __unknown0;
		float nicename("X Min") x_min;
		float nicename("X Max") x_max;
		float nicename("Y Min") y_min;
		float nicename("Y Max") y_max;
		float nicename("Z Min") z_min;
		float nicename("Z Max") z_max;
	};

	struct nicename("Unknown Compression Info") s_unknown_compression_info2_definition_legacy
	{
		uint32_t nicename("Polyart Asset Address") polyart_asset_address;
		s_undefined32_legacy __unknown0;
		s_undefined32_legacy __unknown1;
	};

	s_undefined32_legacy __unknown0;
	float __unknown1;
	s_undefined32_legacy __unknown2;
	float __unknown3;
	int32_t __unknown4;
	int32_t __unknown5;
	s_undefined32_legacy __unknown6;
	s_undefined32_legacy __unknown7;
	s_undefined32_legacy __unknown8;
	s_undefined32_legacy __unknown9;
	s_undefined32_legacy __unknown10;
	s_undefined32_legacy __unknown11;
	int32_t nicename("BSP Checksum") bsp_checksum;
	int32_t __unknown12;
	int16_t __unknown13;
	int16_t __unknown14;
	int16_t __unknown15;
	int16_t __unknown16;
	s_tag_block_legacy<s_structure_seams_definition_legacy> nicename("Structure Seams") structure_seams_block;
	s_undefined32_legacy __unknown17;
	s_undefined32_legacy __unknown18;
	s_undefined32_legacy __unknown19;
	s_tag_block_legacy<s_collision_materials_definition_legacy> nicename("Collision Materials") collision_materials_block;
	s_tag_block_legacy<s_unknown_2_definition_legacy> nicename("Unknown 2") unknown_2_block;
	s_tag_block_legacy<s_unknown_3_definition_legacy> nicename("Unknown 3") unknown_3_block;
	s_undefined32_legacy __unknown20;
	s_undefined32_legacy __unknown21;
	s_undefined32_legacy __unknown22;
	s_undefined32_legacy __unknown23;
	s_undefined32_legacy __unknown24;
	s_undefined32_legacy __unknown25;
	s_undefined32_legacy __unknown26;
	s_undefined32_legacy __unknown27;
	s_undefined32_legacy __unknown28;
	int32_t __unknown29;
	s_undefined32_legacy __unknown30;
	s_undefined32_legacy __unknown31;
	s_undefined32_legacy __unknown32;
	s_undefined32_legacy __unknown33;
	s_undefined32_legacy __unknown34;
	s_undefined32_legacy __unknown35;
	s_undefined32_legacy __unknown36;
	s_undefined32_legacy __unknown37;
	s_undefined32_legacy __unknown38;
	s_undefined32_legacy __unknown39;
	s_undefined32_legacy __unknown40;
	s_undefined32_legacy __unknown41;
	s_undefined32_legacy __unknown42;
	s_undefined32_legacy __unknown43;
	s_undefined32_legacy __unknown44;
	s_undefined32_legacy __unknown45;
	s_undefined32_legacy __unknown46;
	s_undefined32_legacy __unknown47;
	s_undefined32_legacy __unknown48;
	float nicename("World Bounds X min") world_bounds_x_min;
	float nicename("World Bounds X max") world_bounds_x_max;
	float nicename("World Bounds Y min") world_bounds_y_min;
	float nicename("World Bounds Y max") world_bounds_y_max;
	float nicename("World Bounds Z min") world_bounds_z_min;
	float nicename("World Bounds Z max") world_bounds_z_max;
	s_undefined32_legacy __unknown49;
	s_undefined32_legacy __unknown50;
	s_undefined32_legacy __unknown51;
	s_undefined32_legacy __unknown52;
	s_undefined32_legacy __unknown53;
	s_undefined32_legacy __unknown54;
	s_tag_block_legacy<s_cluster_portals_definition_legacy> nicename("Cluster Portals") cluster_portals_block;
	s_tag_block_legacy<s_detail_objects_definition_legacy> nicename("Detail Objects") detail_objects_block;
	s_tag_block_legacy<s_clusters_definition_legacy> nicename("Clusters") clusters_block;
	s_tag_block_legacy<s_materials_definition_legacy> nicename("Materials") materials_block;
	s_tag_block_legacy<s_sky_owner_cluster_definition_legacy> nicename("Sky Owner Cluster") sky_owner_cluster_block;
	s_undefined32_legacy __unknown55;
	s_undefined32_legacy __unknown56;
	s_undefined32_legacy __unknown57;
	s_undefined32_legacy __unknown58;
	s_undefined32_legacy __unknown59;
	s_undefined32_legacy __unknown60;
	s_undefined32_legacy __unknown61;
	s_undefined32_legacy __unknown62;
	s_undefined32_legacy __unknown63;
	s_undefined32_legacy __unknown64;
	s_undefined32_legacy __unknown65;
	s_undefined32_legacy __unknown66;
	s_undefined32_legacy __unknown67;
	s_undefined32_legacy __unknown68;
	s_undefined32_legacy __unknown69;
	s_tag_block_legacy<s_background_sound_environment_palette_definition_legacy> nicename("Background Sound Environment Palette") background_sound_environment_palette_block;
	s_data_reference_legacy __unknown70;
	s_tag_block_legacy<s_markers_definition_legacy> nicename("Markers") markers_block;
	s_undefined32_legacy __unknown71;
	s_undefined32_legacy __unknown72;
	s_undefined32_legacy __unknown73;
	s_tag_block_legacy<s_unknown_111_definition_legacy> nicename("Unknown 11") unknown_11_block;
	s_tag_block_legacy<s_runtime_decals_definition_legacy> nicename("Runtime Decals") runtime_decals_block;
	s_tag_block_legacy<s_environment_object_palette_definition_legacy> nicename("Environment Object Palette") environment_object_palette_block;
	s_tag_block_legacy<s_environment_objects_definition_legacy> nicename("Environment Objects") environment_objects_block;
	s_undefined32_legacy __unknown74;
	s_undefined32_legacy __unknown75;
	s_undefined32_legacy __unknown76;
	s_undefined32_legacy __unknown77;
	s_undefined32_legacy __unknown78;
	s_undefined32_legacy __unknown79;
	s_undefined32_legacy __unknown80;
	s_undefined32_legacy __unknown81;
	s_undefined32_legacy __unknown82;
	s_undefined32_legacy __unknown83;
	s_undefined32_legacy __unknown84;
	s_undefined32_legacy __unknown85;
	s_undefined32_legacy __unknown86;
	s_undefined32_legacy __unknown87;
	s_undefined32_legacy __unknown88;
	s_undefined32_legacy __unknown89;
	s_tag_block_legacy<s_instanced_geometry_groups_definition_legacy> nicename("Instanced Geometry Groups") instanced_geometry_groups_block;
	s_tag_block_legacy<s_instanced_geometry_sub_groups_definition_legacy> nicename("Instanced Geometry Sub Groups") instanced_geometry_sub_groups_block;
	s_undefined32_legacy __unknown90;
	s_undefined32_legacy __unknown91;
	s_undefined32_legacy __unknown92;
	s_tag_block_legacy<s_instanced_geometry_instances_definition_legacy> nicename("Instanced Geometry Instances") instanced_geometry_instances_block;
	s_tag_reference_legacy nicename("Instance Geometry Impostors") instance_geometry_impostors_reference;
	s_tag_block_legacy<s_decorators_definition_legacy> nicename("Decorators") decorators_block;
	int32_t __unknown93;
	s_tag_block_legacy<s_meshes_definition_legacy> nicename("Meshes") meshes_block;
	s_tag_block_legacy<s_compression_info_definition_legacy> nicename("Compression Info") compression_info_block;
	s_tag_block_legacy<s_unknown_nodey_definition_legacy> nicename("Unknown Nodey") unknown_nodey_block;
	s_tag_block_legacy<s_unknown_30_definition_legacy> nicename("Unknown 30") unknown_30_block;
	s_undefined32_legacy __unknown94;
	s_undefined32_legacy __unknown95;
	s_undefined32_legacy __unknown96;
	s_undefined32_legacy __unknown97;
	s_undefined32_legacy __unknown98;
	s_undefined32_legacy __unknown99;
	s_tag_block_legacy<s_node_maps_definition_legacy> nicename("Node Maps") node_maps_block;
	s_undefined32_legacy __unknown100;
	s_undefined32_legacy __unknown101;
	s_undefined32_legacy __unknown102;
	s_undefined32_legacy __unknown103;
	s_undefined32_legacy __unknown104;
	s_undefined32_legacy __unknown105;
	s_undefined32_legacy __unknown106;
	s_undefined32_legacy __unknown107;
	s_undefined32_legacy __unknown108;
	s_tag_block_legacy<s_unknown_yo_definition_legacy> nicename("Unknown Yo") unknown_yo_block;
	s_tag_block_legacy<s_water_meshes_definition_legacy> nicename("Water Meshes") water_meshes_block;
	uint32_t nicename("[zone] Asset Datum 1") zone_asset_datum_1;
	uint16_t nicename("[easy read] Index 1") easy_read_index_1;
	uint16_t nicename("[easy read] Salt 1") easy_read_salt_1;
	int32_t nicename("Useless Padding") useless_padding;
	s_tag_block_legacy<s_unknown_compression_info_definition_legacy> nicename("Unknown Compression Info") unknown_compression_info_block;
	s_tag_block_legacy<s_decals_definition_legacy> nicename("Decals") decals_block;
	s_tag_block_legacy<s_decal_properties_definition_legacy> nicename("Decal Properties") decal_properties_block;
	int32_t __unknown109;
	s_tag_block_legacy<s_meshes1_definition_legacy> nicename("Meshes") meshes1_block;
	s_tag_block_legacy<s_compression_info1_definition_legacy> nicename("Compression Info") compression_info1_block;
	s_tag_block_legacy<s_unknown_nodey1_definition_legacy> nicename("Unknown Nodey") unknown_nodey1_block;
	s_tag_block_legacy<s_unknown_301_definition_legacy> nicename("Unknown 30") unknown_301_block;
	s_undefined32_legacy __unknown110;
	s_undefined32_legacy __unknown111;
	s_undefined32_legacy __unknown112;
	s_undefined32_legacy __unknown113;
	s_undefined32_legacy __unknown114;
	s_undefined32_legacy __unknown115;
	s_tag_block_legacy<s_node_maps1_definition_legacy> nicename("Node Maps") node_maps1_block;
	s_undefined32_legacy __unknown116;
	s_undefined32_legacy __unknown117;
	s_undefined32_legacy __unknown118;
	s_undefined32_legacy __unknown119;
	s_undefined32_legacy __unknown120;
	s_undefined32_legacy __unknown121;
	s_undefined32_legacy __unknown122;
	s_undefined32_legacy __unknown123;
	s_undefined32_legacy __unknown124;
	s_tag_block_legacy<s_unknown_yo1_definition_legacy> nicename("Unknown Yo") unknown_yo1_block;
	s_tag_block_legacy<s_water_meshes1_definition_legacy> nicename("Water Meshes") water_meshes1_block;
	uint32_t nicename("[zone] Asset Datum 2") zone_asset_datum_2;
	uint16_t nicename("[easy read] Index 2") easy_read_index_2;
	uint16_t nicename("[easy read] Salt 2") easy_read_salt_2;
	int32_t nicename("Useless Padding") useless_padding1;
	s_tag_block_legacy<s_unknown_compression_info1_definition_legacy> nicename("Unknown Compression Info") unknown_compression_info1_block;
	s_tag_block_legacy<s_unknown_sound_clusters_a_definition_legacy> nicename("Unknown Sound Clusters A") unknown_sound_clusters_a_block;
	s_tag_block_legacy<s_transparent_planes_definition_legacy> nicename("Transparent Planes") transparent_planes_block;
	s_undefined32_legacy __unknown125;
	s_undefined32_legacy __unknown126;
	s_undefined32_legacy __unknown127;
	s_tag_block_legacy<s_collision_mopp_codes_definition_legacy> nicename("Collision MOPP Codes") collision_mopp_codes_block;
	s_undefined32_legacy __unknown128;
	float nicename("Collision Bounds Min X") collision_bounds_min_x;
	float nicename("Collision Bounds Min Y") collision_bounds_min_y;
	float nicename("Collision Bounds Min Z") collision_bounds_min_z;
	float nicename("Collision Bounds Max X") collision_bounds_max_x;
	float nicename("Collision Bounds Max Y") collision_bounds_max_y;
	float nicename("Collision Bounds Max Z") collision_bounds_max_z;
	s_tag_block_legacy<s_breakable_surface_mopp_codes_definition_legacy> nicename("Breakable Surface MOPP Codes") breakable_surface_mopp_codes_block;
	s_tag_block_legacy<s_breakable_surface_key_table_definition_legacy> nicename("Breakable Surface Key Table") breakable_surface_key_table_block;
	s_undefined32_legacy __unknown129;
	s_undefined32_legacy __unknown130;
	s_undefined32_legacy __unknown131;
	int32_t __unknown132;
	s_tag_block_legacy<s_meshes2_definition_legacy> nicename("Meshes") meshes2_block;
	s_tag_block_legacy<s_compression_info2_definition_legacy> nicename("Compression Info") compression_info2_block;
	s_tag_block_legacy<s_unknown_nodey2_definition_legacy> nicename("Unknown Nodey") unknown_nodey2_block;
	s_tag_block_legacy<s_unknown_302_definition_legacy> nicename("Unknown 30") unknown_302_block;
	s_undefined32_legacy __unknown133;
	s_undefined32_legacy __unknown134;
	s_undefined32_legacy __unknown135;
	s_undefined32_legacy __unknown136;
	s_undefined32_legacy __unknown137;
	s_undefined32_legacy __unknown138;
	s_tag_block_legacy<s_node_maps2_definition_legacy> nicename("Node Maps") node_maps2_block;
	s_undefined32_legacy __unknown139;
	s_undefined32_legacy __unknown140;
	s_undefined32_legacy __unknown141;
	s_undefined32_legacy __unknown142;
	s_undefined32_legacy __unknown143;
	s_undefined32_legacy __unknown144;
	s_undefined32_legacy __unknown145;
	s_undefined32_legacy __unknown146;
	s_undefined32_legacy __unknown147;
	s_tag_block_legacy<s_unknown_yo2_definition_legacy> nicename("Unknown Yo") unknown_yo2_block;
	s_tag_block_legacy<s_water_meshes2_definition_legacy> nicename("Water Meshes") water_meshes2_block;
	uint32_t nicename("[zone] Asset Datum 3") zone_asset_datum_3;
	uint16_t nicename("[easy read] Index 3") easy_read_index_3;
	uint16_t nicename("[easy read] Salt 3") easy_read_salt_3;
	int32_t nicename("Useless Padding") useless_padding2;
	s_tag_block_legacy<s_unknown_compression_info2_definition_legacy> nicename("Unknown Compression Info") unknown_compression_info2_block;
	s_undefined32_legacy __unknown148;
	s_undefined32_legacy __unknown149;
	s_undefined32_legacy __unknown150;
	s_undefined32_legacy __unknown151;
	s_undefined32_legacy __unknown152;
	s_undefined32_legacy __unknown153;
	s_undefined32_legacy __unknown154;
	s_undefined32_legacy __unknown155;
	s_undefined32_legacy __unknown156;
	uint32_t nicename("[zone] Asset Datum 4") zone_asset_datum_4;
	uint16_t nicename("[easy read] Index 4") easy_read_index_4;
	uint16_t nicename("[easy read] Salt 4") easy_read_salt_4;
	int32_t nicename("Useless Padding") useless_padding3;
	uint32_t nicename("[zone] Asset Datum 5") zone_asset_datum_5;
	uint16_t nicename("[easy read] Index 5") easy_read_index_5;
	uint16_t nicename("[easy read] Salt 5") easy_read_salt_5;
	int32_t nicename("Useless Padding") useless_padding4;
	int32_t __unknown157;
	s_undefined32_legacy __unknown158;
};


#pragma once

struct nicename("Model") group('hlmt') s_model_definition
{
	struct nicename("Variants") s_variant_block_definition;
	struct s_unknown_block_definition;
	struct nicename("Instance Groups") s_instance_group_block_definition;
	struct nicename("Materials") s_material_block_definition;
	struct nicename("Omaha Materials") s_omaha_material_block_definition;
	struct nicename("New Damage Info") s_new_damage_info_block_definition;
	struct nicename("Omaha Damage Sections") s_omaha_damage_section_block_definition;
	struct nicename("Omaha Damage Constraints") s_omaha_damage_constraint_block_definition;
	struct nicename("Omaha Nodes") s_omaha_node_block_definition;
	struct nicename("Targets") s_target_block_definition;
	struct nicename("Omaha Targets") s_omaha_target_block_definition;
	struct nicename("Collision Regions") s_collision_region_block_definition;
	struct nicename("Nodes") s_node_block_definition;
	struct s_unknown_12_block_definition;
	struct s_unknown_13_block_definition;
	struct s_unknown_14_block_definition;

	TagReference nicename("Model") model_reference; 
	TagReference nicename("Collision Model") collision_model_reference; 
	TagReference nicename("Animation") animation_reference; 
	TagReference nicename("Physics Model") physics_model_reference; 
	TagReference nicename("Imposter Model") imposter_model_reference; 
	int32_t nicename("Model Checksum") model_checksum; 
	int32_t nicename("Collision Model Checksum") collision_model_checksum; 
	float nicename("Reduce To L1 (super low)") reduce_to_l1_super_low; 
	float nicename("Reduce To L2 (low)") reduce_to_l2_low; 
	float nicename("Reduce To L3 (medium)") reduce_to_l3_medium; 
	float nicename("Reduce To L4 (high)") reduce_to_l4_high; 
	float nicename("Reduce To L5 (super high)") reduce_to_l5_super_high; 
	int16_t __unknown; 
	int16_t __unknown2; 
	float nicename("Decal Reduce To L1 (super low)") decal_reduce_to_l1_super_low; 
	float nicename("Decal Reduce To L2 (low)") decal_reduce_to_l2_low; 
	float nicename("Decal Reduce To L3 (medium)") decal_reduce_to_l3_medium; 
	float nicename("Decal Reduce To L4 (high)") decal_reduce_to_l4_high; 
	float nicename("Decal Reduce To L5 (super high)") decal_reduce_to_l5_super_high; 
	s_tag_block_definition<s_variant_block_definition> nicename("Variants") variants_block; 
	s_tag_block_definition<s_unknown_block_definition> __unknown3_block; 
	s_tag_block_definition<s_instance_group_block_definition> nicename("Instance Groups") instance_groups_block; 
	s_tag_block_definition<s_material_block_definition> nicename("Materials") materials_block; 
	s_tag_block_definition<s_omaha_material_block_definition> nicename("Omaha Materials") omaha_materials_block; 
	s_tag_block_definition<s_new_damage_info_block_definition> nicename("New Damage Info") new_damage_info_block; 
	// comment
	int32_t nicename("Flags") flags; 
	float nicename("Base Vitality") base_vitality; 
	string_id nicename("Base Global Material") base_global_material; 
	int16_t __unknown4; 
	int16_t __unknown5; 
	int8_t nicename("Collision Damage Reporting Type") collision_damage_reporting_type; 
	int8_t nicename("Response Damage Reporting Type") response_damage_reporting_type; 
	int16_t __unknown6; 
	s_tag_block_definition<s_omaha_damage_section_block_definition> nicename("Omaha Damage Sections") omaha_damage_sections_block; 
	s_tag_block_definition<s_omaha_damage_constraint_block_definition> nicename("Omaha Damage Constraints") omaha_damage_constraints_block; 
	s_tag_block_definition<s_omaha_node_block_definition> nicename("Omaha Nodes") omaha_nodes_block; 
	int16_t nicename("Base Global Materal Index") base_global_materal_index; 
	int16_t __unknown7; 
	s_tag_block_definition<s_target_block_definition> nicename("Targets") targets_block; 
	s_tag_block_definition<s_omaha_target_block_definition> nicename("Omaha Targets") omaha_targets_block; 
	s_tag_block_definition<s_collision_region_block_definition> nicename("Collision Regions") collision_regions_block; 
	s_tag_block_definition<s_node_block_definition> nicename("Nodes") nodes_block; 
	Undefined32 __unknown8; 
	TagReference nicename("Primary Dialogue") primary_dialogue_reference; 
	TagReference nicename("Secondary Dialogue") secondary_dialogue_reference; 
	int32_t nicename("Flags") flags2; 
	string_id nicename("Default Dialogue Effect") default_dialogue_effect; 
	int32_t nicename("Render-Only Node Flags 1") render_only_node_flags_1; 
	int32_t nicename("Render-Only Node Flags 2") render_only_node_flags_2; 
	int32_t nicename("Render-Only Node Flags 3") render_only_node_flags_3; 
	int32_t nicename("Render-Only Node Flags 4") render_only_node_flags_4; 
	int32_t nicename("Render-Only Node Flags 5") render_only_node_flags_5; 
	int32_t nicename("Render-Only Node Flags 6") render_only_node_flags_6; 
	int32_t nicename("Render-Only Node Flags 7") render_only_node_flags_7; 
	int32_t nicename("Render-Only Node Flags 8") render_only_node_flags_8; 
	int32_t nicename("Render-Only Section Flags 1") render_only_section_flags_1; 
	int32_t nicename("Render-Only Section Flags 2") render_only_section_flags_2; 
	int32_t nicename("Render-Only Section Flags 3") render_only_section_flags_3; 
	int32_t nicename("Render-Only Section Flags 4") render_only_section_flags_4; 
	int32_t nicename("Render-Only Section Flags 5") render_only_section_flags_5; 
	int32_t nicename("Render-Only Section Flags 6") render_only_section_flags_6; 
	int32_t nicename("Render-Only Section Flags 7") render_only_section_flags_7; 
	int32_t nicename("Render-Only Section Flags 8") render_only_section_flags_8; 
	int32_t nicename("Runtime Flags") runtime_flags; 
	Undefined32 __scenario_load_parameters_block; 
	Undefined32 __scenario_load_parameters_block2; 
	Undefined32 __scenario_load_parameters_block3; 
	Undefined32 __unknown9; 
	float __unknown10; 
	float __unknown11; 
	float __unknown12; 
	float __unknown13; 
	int16_t __unknown14; 
	int16_t __unknown15; 
	s_tag_block_definition<s_unknown_12_block_definition> __unknown_12_block; 
	s_tag_block_definition<s_unknown_13_block_definition> __unknown_13_block; 
	s_tag_block_definition<s_unknown_14_block_definition> __unknown_14_block; 
	TagReference nicename("Shield Impact Third Person") shield_impact_third_person_reference; 
	TagReference nicename("Shield Impact First Person") shield_impact_first_person_reference; 
	// comment
	float nicename("Radius") radius; 
	float nicename("Offset X") offset_x; 
	float nicename("Offset Y") offset_y; 
	float nicename("Offset Z") offset_z; 

	struct nicename("variant") s_variant_block_definition
	{
		struct nicename("Regions") s_region_block_definition;
		struct nicename("Objects") s_object_block_definition;

		string_id nicename("Name") name; 
		int8_t nicename("Model Region 0 Index") model_region_0_index; 
		int8_t nicename("Model Region 1 Index") model_region_1_index; 
		int8_t nicename("Model Region 2 Index") model_region_2_index; 
		int8_t nicename("Model Region 3 Index") model_region_3_index; 
		int8_t nicename("Model Region 4 Index") model_region_4_index; 
		int8_t nicename("Model Region 5 Index") model_region_5_index; 
		int8_t nicename("Model Region 6 Index") model_region_6_index; 
		int8_t nicename("Model Region 7 Index") model_region_7_index; 
		int8_t nicename("Model Region 8 Index") model_region_8_index; 
		int8_t nicename("Model Region 9 Index") model_region_9_index; 
		int8_t nicename("Model Region 10 Index") model_region_10_index; 
		int8_t nicename("Model Region 11 Index") model_region_11_index; 
		int8_t nicename("Model Region 12 Index") model_region_12_index; 
		int8_t nicename("Model Region 13 Index") model_region_13_index; 
		int8_t nicename("Model Region 14 Index") model_region_14_index; 
		int8_t nicename("Model Region 15 Index") model_region_15_index; 
		s_tag_block_definition<s_region_block_definition> nicename("Regions") regions_block; 
		s_tag_block_definition<s_object_block_definition> nicename("Objects") objects_block; 
		int32_t nicename("Instance Group Index") instance_group_index; 
		Undefined32 __unknown; 
		Undefined32 __unknown2; 

		struct nicename("region") s_region_block_definition
		{
			struct nicename("Permutation") s_permutation_block_definition;

			string_id nicename("Name") name; 
			int8_t nicename("Model Region Index") model_region_index; 
			int8_t __unknown; 
			int16_t nicename("Parent Variant Index") parent_variant_index; 
			s_tag_block_definition<s_permutation_block_definition> nicename("Permutation") permutation_block; 
			int32_t nicename("Sort Order") sort_order; 

			struct nicename("permutation") s_permutation_block_definition
			{
				struct nicename("States") s_state_block_definition;

				string_id nicename("Name") name; 
				int8_t nicename("Model Permutation Index") model_permutation_index; 
				uint8_t nicename("Flags") flags; 
				int8_t __unknown; 
				int8_t __unknown2; 
				float nicename("Probability") probability; 
				s_tag_block_definition<s_state_block_definition> nicename("States") states_block; 
				Undefined32 __unknown3; 
				Undefined32 __unknown4; 
				Undefined32 __unknown5; 

				struct nicename("state") s_state_block_definition
				{
					string_id nicename("Name") name; 
					int8_t nicename("Model Permutation Index") model_permutation_index; 
					uint8_t nicename("Property Flags") property_flags; 
					int16_t nicename("State") state; 
					float nicename("Initial Probability") initial_probability; 
				};
			};
		};

		struct nicename("object") s_object_block_definition
		{
			string_id nicename("Parent Marker") parent_marker; 
			string_id nicename("Child Marker") child_marker; 
			string_id nicename("Object Variant") object_variant; 
			TagReference nicename("Child Object") child_object_reference; 
			int16_t __unknown; 
			int8_t __unknown2; 
			int8_t __unknown3; 
		};
	};

	struct s_unknown_block_definition
	{
		string_id __unknown; 
	};

	struct nicename("instance_group") s_instance_group_block_definition
	{
		string_id nicename("Name") name; 
		int32_t __unknown; 
		Undefined32 __unknown2; 
		Undefined32 __unknown3; 
		Undefined32 __unknown4; 
		float nicename("Probability") probability; 
	};

	struct nicename("material") s_material_block_definition
	{
		string_id nicename("Material Name") material_name; 
		int16_t __unknown; 
		int16_t nicename("Damage Section Index") damage_section_index; 
		int16_t __unknown2; 
		int16_t __unknown3; 
		string_id nicename("Material Name") material_name2; 
		int16_t nicename("Global Material Index") global_material_index; 
		int16_t __unknown4; 
	};

	struct nicename("omaha_material") s_omaha_material_block_definition
	{
		string_id nicename("Material Name") material_name; 
		int16_t __unknown; 
		int16_t nicename("Damage Section Index") damage_section_index; 
		int16_t __unknown2; 
		int16_t __unknown3; 
		string_id nicename("Material Name") material_name2; 
		int16_t nicename("Global Material Index") global_material_index; 
		int16_t __unknown4; 
	};

	struct nicename("new_damage_info") s_new_damage_info_block_definition
	{
		struct nicename("Damage Sections") s_damage_section_block_definition;
		struct nicename("Nodes") s_node_block_definition;
		struct nicename("Damage Seats") s_damage_seat_block_definition;
		struct nicename("Damage Constraints") s_damage_constraint_block_definition;

		int32_t nicename("Flags") flags; 
		string_id nicename("Global Indirect Material") global_indirect_material; 
		int16_t nicename("Indirect Damage Section") indirect_damage_section; 
		int16_t __unknown; 
		Undefined32 __unknown2; 
		int8_t nicename("Collision Damage Reporting Type") collision_damage_reporting_type; 
		int8_t nicename("Response Damage Reporting Type") response_damage_reporting_type; 
		int16_t __unknown3; 
		Undefined32 __unknown4; 
		Undefined32 __unknown5; 
		Undefined32 __unknown6; 
		Undefined32 __unknown7; 
		Undefined32 __unknown8; 
		float nicename("Maximum Vitality") maximum_vitality; 
		float nicename("Minimum Stun Damage") minimum_stun_damage; 
		float nicename("Stun Time") stun_time; 
		float nicename("Recharge Time") recharge_time; 
		float nicename("Recharge Fraction") recharge_fraction; 
		Undefined32 __unknown9; 
		Undefined32 __unknown10; 
		Undefined32 __unknown11; 
		Undefined32 __unknown12; 
		Undefined32 __unknown13; 
		Undefined32 __unknown14; 
		Undefined32 __unknown15; 
		Undefined32 __unknown16; 
		Undefined32 __unknown17; 
		Undefined32 __unknown18; 
		Undefined32 __unknown19; 
		Undefined32 __unknown20; 
		Undefined32 __unknown21; 
		Undefined32 __unknown22; 
		Undefined32 __unknown23; 
		Undefined32 __unknown24; 
		float nicename("Maximum Shield Vitality") maximum_shield_vitality; 
		string_id nicename("Global Shield Material Name") global_shield_material_name; 
		float nicename("Minimum Stun Damage") minimum_stun_damage2; 
		float nicename("Stun Time") stun_time2; 
		float nicename("Recharge Time") recharge_time2; 
		Undefined32 __unknown25; 
		Undefined32 __unknown26; 
		Undefined32 __unknown27; 
		TagReference nicename("Shield Damaged Effect") shield_damaged_effect_reference; 
		TagReference nicename("Shield Depletion Effect") shield_depletion_effect_reference; 
		TagReference nicename("Shield Recharge Effect") shield_recharge_effect_reference; 
		s_tag_block_definition<s_damage_section_block_definition> nicename("Damage Sections") damage_sections_block; 
		s_tag_block_definition<s_node_block_definition> nicename("Nodes") nodes_block; 
		int16_t nicename("Global Shield Material Index") global_shield_material_index; 
		int16_t nicename("Global Indirect Material Index") global_indirect_material_index; 
		float __unknown28; 
		Undefined32 __unknown29; 
		Undefined32 __unknown30; 
		s_tag_block_definition<s_damage_seat_block_definition> nicename("Damage Seats") damage_seats_block; 
		s_tag_block_definition<s_damage_constraint_block_definition> nicename("Damage Constraints") damage_constraints_block; 

		struct nicename("damage_section") s_damage_section_block_definition
		{
			struct nicename("Instant Responses") s_instant_respons_block_definition;

			string_id nicename("Name") name; 
			int32_t nicename("Flags") flags; 
			float nicename("Vitality Percentage") vitality_percentage; 
			s_tag_block_definition<s_instant_respons_block_definition> nicename("Instant Responses") instant_responses_block; 
			Undefined32 __unknown; 
			Undefined32 __unknown2; 
			Undefined32 __unknown3; 
			Undefined32 __unknown4; 
			Undefined32 __unknown5; 
			Undefined32 __unknown6; 
			float nicename("Stun Time") stun_time; 
			float nicename("Recharge Time") recharge_time; 
			float __unknown7; 
			string_id nicename("Resurrection Region Name") resurrection_region_name; 
			int16_t nicename("Ressurection Region Runtime Index") ressurection_region_runtime_index; 
			int16_t __unknown8; 

			struct nicename("instant_respons") s_instant_respons_block_definition
			{
				int16_t nicename("Response Type") response_type; 
				int16_t nicename("Constraint Damage Type") constraint_damage_type; 
				string_id nicename("Trigger") trigger; 
				int32_t nicename("Flags") flags; 
				float nicename("Damage Threshold") damage_threshold; 
				int32_t __unknown; 
				float __unknown2; 
				TagReference nicename("Primary Transition Effect") primary_transition_effect_reference; 
				TagReference nicename("Secondary Transition Effect") secondary_transition_effect_reference; 
				TagReference nicename("Transition Damage Effect") transition_damage_effect_reference; 
				string_id nicename("Region") region; 
				int16_t nicename("New State") new_state; 
				int16_t nicename("Runtime Region Index") runtime_region_index; 
				string_id nicename("Secondary Region") secondary_region; 
				int16_t nicename("Secondary New State") secondary_new_state; 
				int16_t nicename("Secondary Runtime Region Index") secondary_runtime_region_index; 
				int16_t __unknown3; 
				int16_t __unknown_special_damage; 
				string_id nicename("Special Damage Case") special_damage_case; 
				string_id nicename("Effect Marker Name") effect_marker_name; 
				string_id nicename("Damage Effect Marker Name") damage_effect_marker_name; 
				float nicename("Response Delay") response_delay; 
				TagReference nicename("Delay Effect") delay_effect_reference; 
				string_id nicename("Delay Effect Marker Name") delay_effect_marker_name; 
				string_id nicename("Ejecting Seat Label") ejecting_seat_label; 
				float nicename("Skip Fraction") skip_fraction; 
				string_id nicename("Destroyed Child Object Marker Name") destroyed_child_object_marker_name; 
				float nicename("Total Damage Threshold") total_damage_threshold; 
			};
		};

		struct nicename("node") s_node_block_definition
		{
			int16_t __unknown; 
			int16_t __unknown2; 
			Undefined32 __unknown3; 
			Undefined32 __unknown4; 
			Undefined32 __unknown5; 
		};

		struct nicename("damage_seat") s_damage_seat_block_definition
		{
			struct s_unknown_block_definition;

			string_id nicename("Seat Label") seat_label; 
			float nicename("Direct Damage Scale") direct_damage_scale; 
			float nicename("Damage Transfer Fall-Off Radius") damage_transfer_fall_off_radius; 
			float nicename("Maximum Transfer Damage Scale") maximum_transfer_damage_scale; 
			float nicename("Minimum Transfer-Damage Scale") minimum_transfer_damage_scale; 
			s_tag_block_definition<s_unknown_block_definition> __unknown_block; 

			struct s_unknown_block_definition
			{
				string_id nicename("Node") node; 
				int16_t __unknown; 
				int16_t __unknown2; 
				Undefined32 __unknown3; 
				Undefined32 __unknown4; 
				Undefined32 __unknown5; 
				Undefined32 __unknown6; 
				Undefined32 __unknown7; 
				Undefined32 __unknown8; 
				Undefined32 __unknown9; 
				Undefined32 __unknown10; 
				Undefined32 __unknown11; 
			};
		};

		struct nicename("damage_constraint") s_damage_constraint_block_definition
		{
			string_id nicename("Physics Model Constraint Name") physics_model_constraint_name; 
			string_id nicename("Damage Constraint Name") damage_constraint_name; 
			string_id nicename("Damage Constraint Group Name") damage_constraint_group_name; 
			float nicename("Group Probability Scale") group_probability_scale; 
			int16_t nicename("Type") type; 
			int16_t nicename("Index") index; 
		};
	};

	struct nicename("omaha_damage_section") s_omaha_damage_section_block_definition
	{
		struct nicename("Health Functions") s_health_function_block_definition;
		struct nicename("Health Levels") s_health_level_block_definition;
		struct nicename("Omaha Instant Responses") s_omaha_instant_respons_block_definition;
		struct s_unknown_block_definition;
		struct s_unknown2_block_definition;
		struct nicename("Shield Impact") s_shield_impact_block_definition;

		string_id nicename("Name") name; 
		int32_t nicename("Flags") flags; 
		float nicename("Vitality Percentage") vitality_percentage; 
		string_id nicename("Global Material") global_material; 
		float nicename("Health Recharge Delay") health_recharge_delay; 
		Undefined32 __unknown; 
		float __unknown2; 
		s_tag_block_definition<s_health_function_block_definition> nicename("Health Functions") health_functions_block; 
		s_tag_block_definition<s_health_level_block_definition> nicename("Health Levels") health_levels_block; 
		TagReference nicename("Recharge Effect") recharge_effect_reference; 
		float __unknown3; 
		TagReference nicename("Precharge Effect") precharge_effect_reference; 
		float __unknown4; 
		TagReference __unknown5_reference; 
		float __unknown6; 
		Undefined32 __unknown7; 
		Undefined32 __unknown8; 
		float __unknown9; 
		float __unknown10; 
		Undefined32 __unknown11; 
		s_tag_block_definition<s_omaha_instant_respons_block_definition> nicename("Omaha Instant Responses") omaha_instant_responses_block; 
		s_tag_block_definition<s_unknown_block_definition> __unknown12_block; 
		s_tag_block_definition<s_unknown2_block_definition> __unknown13_block; 
		s_tag_block_definition<s_shield_impact_block_definition> nicename("Shield Impact") shield_impact_block; 
		float nicename("Recharge Time") recharge_time; 
		string_id nicename("Resurrection Region Name") resurrection_region_name; 
		int16_t nicename("Ressurection Region Runtime Index") ressurection_region_runtime_index; 
		int16_t nicename("Global Material Index") global_material_index; 

		struct nicename("health_function") s_health_function_block_definition
		{
			DataReference nicename("Function") function_data_reference; 
		};

		struct nicename("health_level") s_health_level_block_definition
		{
			float nicename("Percentage") percentage; 
		};

		struct nicename("omaha_instant_respons") s_omaha_instant_respons_block_definition
		{
			struct nicename("Region State Changes") s_region_state_change_block_definition;
			struct s_unknown_block_definition;
			struct nicename("Seat Ejaculation") s_seat_ejaculation_block_definition;

			int32_t nicename("Flags") flags; 
			string_id nicename("Trigger") trigger; 
			float nicename("Damage Threshold") damage_threshold; 
			TagReference nicename("Primary Transition Effect") primary_transition_effect_reference; 
			string_id nicename("Primary Transition Effect Marker Name") primary_transition_effect_marker_name; 
			TagReference nicename("Secondary Transition Effect") secondary_transition_effect_reference; 
			string_id nicename("Secondary Transition Effect Marker Name") secondary_transition_effect_marker_name; 
			TagReference nicename("Transition Damage Effect") transition_damage_effect_reference; 
			string_id nicename("Transition Damage Effect Marker Name") transition_damage_effect_marker_name; 
			TagReference nicename("Constant Effect") constant_effect_reference; 
			s_tag_block_definition<s_region_state_change_block_definition> nicename("Region State Changes") region_state_changes_block; 
			s_tag_block_definition<s_unknown_block_definition> __unknown_block; 
			int16_t __unknown2; 
			int16_t __unknown_special_damage; 
			string_id nicename("Special Damage Case") special_damage_case; 
			float nicename("Response Delay") response_delay; 
			TagReference nicename("Delay Effect") delay_effect_reference; 
			string_id nicename("Delay Effect Marker Name") delay_effect_marker_name; 
			s_tag_block_definition<s_seat_ejaculation_block_definition> nicename("Seat Ejaculation") seat_ejaculation_block; 
			float nicename("Skip Fraction") skip_fraction; 
			string_id nicename("Destroyed Child Object Marker Name") destroyed_child_object_marker_name; 
			float nicename("Total Damage Threshold") total_damage_threshold; 
			string_id nicename("Constraint Group Name") constraint_group_name; 
			int16_t nicename("Constraint Damage Type") constraint_damage_type; 
			int16_t __unknown3; 

			struct nicename("region_state_change") s_region_state_change_block_definition
			{
				string_id nicename("Region") region; 
				int16_t nicename("New State") new_state; 
				int16_t nicename("Runtime Region Index") runtime_region_index; 
			};

			struct s_unknown_block_definition
			{
				int32_t __unknown; 
				float __unknown2; 
				int16_t __unknown3; 
				int16_t __unknown4; 
				string_id nicename("Seat Label") seat_label; 
			};

			struct nicename("seat_ejaculation") s_seat_ejaculation_block_definition
			{
				string_id nicename("Ejecting Seat Label") ejecting_seat_label; 
			};
		};

		struct s_unknown_block_definition
		{
			int32_t __unknown; 
			float __unknown2; 
			int16_t __unknown3; 
			int16_t __unknown4; 
			string_id nicename("Seat Label") seat_label; 
		};

		struct s_unknown2_block_definition
		{
			int32_t __unknown; 
			float __unknown2; 
			int16_t __unknown3; 
			int16_t __unknown4; 
			string_id nicename("Seat Label") seat_label; 
		};

		struct nicename("shield_impact") s_shield_impact_block_definition
		{
			TagReference nicename("Third Person") third_person_reference; 
			TagReference nicename("First Person") first_person_reference; 
		};
	};

	struct nicename("omaha_damage_constraint") s_omaha_damage_constraint_block_definition
	{
		string_id nicename("Physics Model Constraint Name") physics_model_constraint_name; 
		string_id nicename("Damage Constraint Name") damage_constraint_name; 
		string_id nicename("Damage Constraint Group Name") damage_constraint_group_name; 
		float nicename("Group Probability Scale") group_probability_scale; 
		int16_t nicename("Type") type; 
		int16_t nicename("Index") index; 
	};

	struct nicename("omaha_node") s_omaha_node_block_definition
	{
		int16_t __unknown; 
		int16_t __unknown2; 
		Undefined32 __unknown3; 
		Undefined32 __unknown4; 
		Undefined32 __unknown5; 
	};

	struct nicename("target") s_target_block_definition
	{
		string_id nicename("Marker Name") marker_name; 
		float nicename("Size") size; 
		float nicename("Cone Angle") cone_angle; 
		int16_t nicename("Damage Section") damage_section; 
		int16_t nicename("Variant") variant; 
		float nicename("Targeting Relevance") targeting_relevance; 
		Undefined32 __unknown; 
		int32_t nicename("Flags") flags; 
		float nicename("Lock-On Distance") lock_on_distance; 
		string_id nicename("Target Filter") target_filter; 
	};

	struct nicename("omaha_target") s_omaha_target_block_definition
	{
		int8_t __unknown; 
		int8_t __unknown2; 
		int8_t __unknown3; 
		int8_t __unknown4; 
		string_id nicename("Marker Name") marker_name; 
		float nicename("Size") size; 
		float nicename("Cone Angle") cone_angle; 
		int16_t nicename("Damage Section") damage_section; 
		int16_t nicename("Variant") variant; 
		float nicename("Targeting Relevance") targeting_relevance; 
		Undefined32 __unknown5; 
		int32_t nicename("Flags") flags; 
		float nicename("Lock-On Distance") lock_on_distance; 
		string_id nicename("Target Filter") target_filter; 
	};

	struct nicename("collision_region") s_collision_region_block_definition
	{
		struct nicename("Permutations") s_permutation_block_definition;

		string_id nicename("Name") name; 
		int8_t nicename("Collision Region Index") collision_region_index; 
		int8_t nicename("Physics Region Index") physics_region_index; 
		int8_t __unknown; 
		int8_t __unknown2; 
		s_tag_block_definition<s_permutation_block_definition> nicename("Permutations") permutations_block; 

		struct nicename("permutation") s_permutation_block_definition
		{
			string_id nicename("Name") name; 
			uint8_t nicename("Flags") flags; 
			int8_t nicename("Collision Permutation Index") collision_permutation_index; 
			int8_t nicename("Physics Permutation Index") physics_permutation_index; 
			int8_t __unknown; 
		};
	};

	struct nicename("node") s_node_block_definition
	{
		string_id nicename("Name") name; 
		int16_t nicename("Parent Node") parent_node; 
		int16_t nicename("First Child Node") first_child_node; 
		int16_t nicename("Next Sibling Node") next_sibling_node; 
		int16_t nicename("Import Node Index") import_node_index; 
		float nicename("Default Translation x") default_translation_x; 
		float nicename("Default Translation y") default_translation_y; 
		float nicename("Default Translation z") default_translation_z; 
		float nicename("Default Rotation i") default_rotation_i; 
		float nicename("Default Rotation j") default_rotation_j; 
		float nicename("Default Rotation k") default_rotation_k; 
		float nicename("Default Rotation w") default_rotation_w; 
		float nicename("Default Scale") default_scale; 
		float nicename("Inverse Forward i") inverse_forward_i; 
		float nicename("Inverse Forward j") inverse_forward_j; 
		float nicename("Inverse Forward k") inverse_forward_k; 
		float nicename("Inverse Left i") inverse_left_i; 
		float nicename("Inverse Left j") inverse_left_j; 
		float nicename("Inverse Left k") inverse_left_k; 
		float nicename("Inverse Up i") inverse_up_i; 
		float nicename("Inverse Up j") inverse_up_j; 
		float nicename("Inverse Up k") inverse_up_k; 
		float nicename("Inverse Position x") inverse_position_x; 
		float nicename("Inverse Position y") inverse_position_y; 
		float nicename("Inverse Position z") inverse_position_z; 
	};

	struct s_unknown_12_block_definition
	{
		string_id nicename("Region") region; 
		string_id nicename("Permutation") permutation; 
	};

	struct s_unknown_13_block_definition
	{
		string_id __unknown; 
		int32_t __unknown2; 
	};

	struct s_unknown_14_block_definition
	{
		string_id nicename("Marker") marker; 
		Undefined32 __unknown; 
		string_id nicename("Marker") marker2; 
		Undefined32 __unknown2; 
		Undefined32 __unknown3; 
	};
};
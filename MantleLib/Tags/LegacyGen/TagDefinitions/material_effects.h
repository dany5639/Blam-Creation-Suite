#pragma once

struct nicename("material_effects") tag_group('foot') s_material_effects_definition_legacy
{
	struct nicename("Effects") s_effects_definition_legacy
	{
		struct nicename("Old Materials") s_old_materials_definition_legacy
		{
			enum nicename("Sweetener Mode") e_sweetener_mode : uint8_t
			{
				/*nicename("Sweetener Default")*/ _sweetener_mode_sweetener_default = 0ui8,
				/*nicename("Sweetener Enabled")*/ _sweetener_mode_sweetener_enabled = 1ui8,
				/*nicename("Sweetener Disabled")*/ _sweetener_mode_sweetener_disabled = 2ui8,
			};

			s_tag_reference_legacy nicename("Effect") effect_reference;
			s_tag_reference_legacy nicename("Sound") sound_reference;
			string_id_legacy nicename("Material Name") material_name;
			int16_t nicename("Global Material Index") global_material_index;
			e_sweetener_mode nicename("Sweetener Mode") sweetener_mode;
			int8_t __unknown0;
			s_undefined32_legacy __unknown1;
		};

		struct nicename("Sounds") s_sounds_definition_legacy
		{
			enum nicename("Sweetener Mode") e_sweetener_mode : uint8_t
			{
				/*nicename("Sweetener Default")*/ _sweetener_mode_sweetener_default = 0ui8,
				/*nicename("Sweetener Enabled")*/ _sweetener_mode_sweetener_enabled = 1ui8,
				/*nicename("Sweetener Disabled")*/ _sweetener_mode_sweetener_disabled = 2ui8,
			};

			s_tag_reference_legacy nicename("Tag") tag_reference;
			s_tag_reference_legacy nicename("Secondary Tag") secondary_tag_reference;
			string_id_legacy nicename("Material Name") material_name;
			int16_t nicename("Global Material Index") global_material_index;
			e_sweetener_mode nicename("Sweetener Mode") sweetener_mode;
			int8_t __unknown0;
			s_undefined32_legacy __unknown1;
		};

		struct nicename("Effects") s_effects1_definition_legacy
		{
			enum nicename("Sweetener Mode") e_sweetener_mode : uint8_t
			{
				/*nicename("Sweetener Default")*/ _sweetener_mode_sweetener_default = 0ui8,
				/*nicename("Sweetener Enabled")*/ _sweetener_mode_sweetener_enabled = 1ui8,
				/*nicename("Sweetener Disabled")*/ _sweetener_mode_sweetener_disabled = 2ui8,
			};

			s_tag_reference_legacy nicename("Tag") tag_reference;
			s_tag_reference_legacy nicename("Secondary Tag") secondary_tag_reference;
			string_id_legacy nicename("Material Name") material_name;
			int16_t nicename("Global Material Index") global_material_index;
			e_sweetener_mode nicename("Sweetener Mode") sweetener_mode;
			int8_t __unknown0;
			s_undefined32_legacy __unknown1;
		};

		s_tag_block_legacy<s_old_materials_definition_legacy> nicename("Old Materials") old_materials_block;
		s_tag_block_legacy<s_sounds_definition_legacy> nicename("Sounds") sounds_block;
		s_tag_block_legacy<s_effects1_definition_legacy> nicename("Effects") effects_block;
	};

	s_tag_block_legacy<s_effects_definition_legacy> nicename("Effects") effects_block;
};


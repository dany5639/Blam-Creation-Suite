#include <blofeld-private-pch.h>

namespace blofeld
{

TAG_STRUCT(scenery_group)
{
	FIELD( _field_struct, "object", &object_struct_definition_struct_definition ),
	FIELD( _field_explanation, "Pathfinding" ),
	FIELD( _field_enum, "pathfinding policy" ),
	FIELD( _field_word_flags, "flags" ),
	FIELD( _field_explanation, "Lightmapping" ),
	FIELD( _field_enum, "lightmapping policy" ),
	FIELD( _field_pad, "WGW", 2 ),
	FIELD( _field_tag_reference, "Structure Lighting Tag" ),
	FIELD( _field_useless_pad ),
	FIELD( _field_terminator )
};

TAG_GROUP_INHERIT(scenery_block, SCENERY_TAG, object, OBJECT_TAG)
{
	FIELD( _field_struct, "object", &object_struct_definition_struct_definition ),
	FIELD( _field_explanation, "Pathfinding" ),
	FIELD( _field_enum, "pathfinding policy" ),
	FIELD( _field_word_flags, "flags" ),
	FIELD( _field_explanation, "Lightmapping" ),
	FIELD( _field_enum, "lightmapping policy" ),
	FIELD( _field_pad, "WGW", 2 ),
	FIELD( _field_tag_reference, "Structure Lighting Tag" ),
	FIELD( _field_useless_pad ),
	FIELD( _field_terminator )
};

} // namespace blofeld


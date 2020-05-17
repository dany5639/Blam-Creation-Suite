#include <blofeld-private-pch.h>

namespace blofeld
{

	TAG_GROUP_FROM_BLOCK(NarrativeGlobals, NARRATIVEGLOBALS_TAG, NarrativeGlobals_block_block );

	TAG_BLOCK(NarrativeFlagDefinitionBlock, 64)
	{
		FIELD( _field_long_integer, "Index" ),
		FIELD( _field_char_enum, "Type", &NarrativeFlagTypeEnum ),
		FIELD( _field_pad, "fsarewrsda", 3 ),
		FIELD( _field_terminator )
	};

	TAG_BLOCK_FROM_STRUCT(NarrativeGlobals_block, 1, NarrativeGlobals_struct_definition_struct_definition );

	TAG_STRUCT(NarrativeGlobals_struct_definition)
	{
		FIELD( _field_block, "Narrative Flag Definitions", &NarrativeFlagDefinitionBlock_block ),
		FIELD( _field_terminator )
	};

	TAG_ENUM(NarrativeFlagTypeEnum, 2)
	{
		OPTION("Unknown"),
		OPTION("Terminal"),
	};

} // namespace blofeld

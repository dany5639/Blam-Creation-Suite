#pragma once

namespace blofeld
{

extern s_tag_struct game_globals_ordnance_list_struct_definition_struct_definition;
extern s_tag_struct scenario_ordnance_list_struct_definition_struct_definition;

extern s_tag_struct GameGlobalsOrdnanceBlock_struct_definition;
extern s_tag_block_definition GameGlobalsOrdnanceBlock;
extern s_tag_struct OrdnanceRemappingVariantBlock_struct_definition;
extern s_tag_block_definition OrdnanceRemappingVariantBlock;
extern s_tag_struct OrdnanceRemappingBlock_struct_definition;
extern s_tag_block_definition OrdnanceRemappingBlock;
extern s_tag_struct RandomOrdnanceItemBlock_struct_definition;
extern s_tag_block_definition RandomOrdnanceItemBlock;
extern s_tag_struct PlayerOrdnanceGroupBlock_struct_definition;
extern s_tag_block_definition PlayerOrdnanceGroupBlock;
extern s_tag_struct PlayerOrdnanceItemBlock_struct_definition;
extern s_tag_block_definition PlayerOrdnanceItemBlock;

constexpr unsigned long GAME_GLOBALS_ORDNANCE_LIST_TAG = 'ggol';

extern s_tag_block_definition game_globals_ordnance_list_block;
extern s_tag_group game_globals_ordnance_list_group;
constexpr unsigned long SCENARIO_ORDNANCE_LIST_TAG = 'scol';

extern s_tag_block_definition scenario_ordnance_list_block;
extern s_tag_group scenario_ordnance_list_group;
} // namespace blofeld


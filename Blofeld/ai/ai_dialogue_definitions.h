#pragma once

namespace blofeld
{

extern s_tag_struct ai_dialogue_globals_struct_definition_struct_definition;

extern s_tag_struct default_stimulus_suppressor_block_struct_struct_definition;
extern s_tag_block_definition default_stimulus_suppressor_block;
extern s_tag_struct vocalization_definitions_block_struct_definition;
extern s_tag_block_definition vocalization_definitions_block;
extern s_tag_struct response_block_struct_definition;
extern s_tag_block_definition response_block;
extern s_tag_struct vocalization_patterns_block_struct_definition;
extern s_tag_block_definition vocalization_patterns_block;
extern s_tag_struct dialogue_data_block_struct_definition;
extern s_tag_block_definition dialogue_data_block;
extern s_tag_struct involuntary_data_block_struct_definition;
extern s_tag_block_definition involuntary_data_block;
extern s_tag_struct predicted_data_block_struct_definition;
extern s_tag_block_definition predicted_data_block;

constexpr unsigned long AI_DIALOGUE_GLOBALS_TAG = 'adlg';

extern s_tag_block_definition ai_dialogue_globals_block;
extern s_tag_group ai_dialogue_globals_group;
} // namespace blofeld


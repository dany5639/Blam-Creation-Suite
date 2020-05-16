#pragma once

namespace blofeld
{

extern s_tag_struct sound_response_struct_definition_struct_definition;
extern s_tag_struct sound_incident_response_struct_definition_struct_definition;

extern s_tag_struct sound_response_data_block_struct_struct_definition;
extern s_tag_block_definition sound_response_data_block;
extern s_tag_struct sound_response_permutation_block_struct_definition;
extern s_tag_block_definition sound_response_permutation_block;
extern s_tag_struct sound_combine_response_block_struct_definition;
extern s_tag_block_definition sound_combine_response_block;
extern s_tag_struct sound_incident_response_data_block_struct_definition;
extern s_tag_block_definition sound_incident_response_data_block;

constexpr unsigned long SOUND_RESPONSE_TAG = 'sgrp';

extern s_tag_block_definition sound_response_block;
extern s_tag_group sound_response_group;
constexpr unsigned long SOUND_INCIDENT_RESPONSE_TAG = 'sirg';

extern s_tag_block_definition sound_incident_response_block;
extern s_tag_group sound_incident_response_group;
} // namespace blofeld


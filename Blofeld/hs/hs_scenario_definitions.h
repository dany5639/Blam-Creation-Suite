#pragma once

namespace blofeld
{


extern s_tag_struct hs_source_files_block_struct_definition;
extern s_tag_block_definition hs_source_files_block;
extern s_tag_struct hs_references_block_struct_definition;
extern s_tag_block_definition hs_references_block;
extern s_tag_struct hs_scripts_block_struct_definition;
extern s_tag_block_definition hs_scripts_block;
extern s_tag_struct hs_script_parameters_block_struct_definition;
extern s_tag_block_definition hs_script_parameters_block;
extern s_tag_struct hs_globals_block_struct_definition;
extern s_tag_block_definition hs_globals_block;
extern s_tag_struct HSInstancedVariablesBlock_struct_definition;
extern s_tag_block_definition HSInstancedVariablesBlock;
extern s_tag_struct hs_unit_seat_block_struct_definition;
extern s_tag_block_definition hs_unit_seat_block;
extern s_tag_struct hs_syntax_datum_block_struct_definition;
extern s_tag_block_definition hs_syntax_datum_block;
extern s_tag_struct HSImportManifestBlock_struct_definition;
extern s_tag_block_definition HSImportManifestBlock;
extern s_tag_struct HSImportManifestEntryBlock_struct_definition;
extern s_tag_block_definition HSImportManifestEntryBlock;

constexpr unsigned long HSC_TAG = 'hsc*';

extern s_tag_group hsc_group;
} // namespace blofeld


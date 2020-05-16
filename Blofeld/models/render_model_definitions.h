#pragma once

namespace blofeld
{

extern s_tag_struct imposter_model_struct_definition_struct_definition;
extern s_tag_struct render_model_lightmap_atlas_struct_definition_struct_definition;

extern s_tag_struct imposter_mode_node_block_struct_definition;
extern s_tag_block_definition imposter_mode_node_block;
extern s_tag_struct render_model_region_block_struct_definition;
extern s_tag_block_definition render_model_region_block;
extern s_tag_struct render_model_permutation_block_struct_definition;
extern s_tag_block_definition render_model_permutation_block;
extern s_tag_struct render_model_node_block_struct_definition;
extern s_tag_block_definition render_model_node_block;
extern s_tag_struct render_model_marker_group_block_struct_definition;
extern s_tag_block_definition render_model_marker_group_block;
extern s_tag_struct render_model_marker_block_struct_definition;
extern s_tag_block_definition render_model_marker_block;
extern s_tag_struct instance_node_map_mapping_block_struct_definition;
extern s_tag_block_definition instance_node_map_mapping_block;
extern s_tag_struct volume_samples_block_struct_definition;
extern s_tag_block_definition volume_samples_block;
extern s_tag_struct default_node_orientations_block_struct_definition;
extern s_tag_block_definition default_node_orientations_block;
extern s_tag_struct RenderModelBoneGroupBlock_struct_definition;
extern s_tag_block_definition RenderModelBoneGroupBlock;
extern s_tag_struct RenderModelNodeIndexBlock_struct_definition;
extern s_tag_block_definition RenderModelNodeIndexBlock;

constexpr unsigned long IMPOSTER_MODEL_TAG = 'impo';

extern s_tag_block_definition imposter_model_block;
extern s_tag_group imposter_model_group;
constexpr unsigned long RENDER_MODEL_TAG = 'mode';

extern s_tag_block_definition render_model_block;
extern s_tag_group render_model_group;
constexpr unsigned long RENDER_MODEL_LIGHTMAP_ATLAS_TAG = 'rmla';

extern s_tag_block_definition render_model_lightmap_atlas_block;
extern s_tag_group render_model_lightmap_atlas_group;
} // namespace blofeld


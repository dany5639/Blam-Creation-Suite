#pragma once

namespace blofeld
{

extern s_tag_struct vision_mode_struct_definition_struct_definition;

extern s_tag_struct visionModeScreenPassBlock_struct_definition;
extern s_tag_block_definition visionModeScreenPassBlock;
extern s_tag_struct visionModeEnvironmentPassBlock_struct_definition;
extern s_tag_block_definition visionModeEnvironmentPassBlock;
extern s_tag_struct visionModeBipedPassesBlock_struct_definition;
extern s_tag_block_definition visionModeBipedPassesBlock;
extern s_tag_struct visionModeBipedPassBlock_struct_definition;
extern s_tag_block_definition visionModeBipedPassBlock;
extern s_tag_struct visionModeBipedThreatBlock_struct_definition;
extern s_tag_block_definition visionModeBipedThreatBlock;
extern s_tag_struct visionModeOrdnanceVehiclePassBlock_struct_definition;
extern s_tag_block_definition visionModeOrdnanceVehiclePassBlock;
extern s_tag_struct visionModeOrdnanceVehicleTypeBlock_struct_definition;
extern s_tag_block_definition visionModeOrdnanceVehicleTypeBlock;
extern s_tag_struct visionModeOrdnanceCrosshairBlock_struct_definition;
extern s_tag_block_definition visionModeOrdnanceCrosshairBlock;

constexpr unsigned long VISION_MODE_TAG = 'vmdx';

extern s_tag_block_definition vision_mode_block;
extern s_tag_group vision_mode_group;
} // namespace blofeld


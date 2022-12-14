#include "src/game/envfx_snow.h"

const GeoLayout katalina_ed_ArmatureObj_halfclosed[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, katalina_ed_000_switch_000_displaylist_mesh_layer_1),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout katalina_ed_ArmatureObj_closed_001[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, katalina_ed_001_switch_000_displaylist_mesh_layer_1),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout katalina_ed_002_switch_opt0_001_switch_opt1_jump_katalina_ed_ArmatureObj_halfclosed[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, katalina_ed_000_switch_000_displaylist_mesh_layer_1),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout katalina_ed_002_switch_opt0_001_switch_opt1_jump_katalina_ed_ArmatureObj_closed_001[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, katalina_ed_001_switch_000_displaylist_mesh_layer_1),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout katalina_ed_002_switch_opt0_001_switch_opt1[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_OPAQUE, 36, 22, 0, NULL),
		GEO_OPEN_NODE(),
			GEO_ANIMATED_PART(LAYER_TRANSPARENT, 0, 0, 0, katalina_ed_000_offset_mesh_layer_1),
			GEO_OPEN_NODE(),
				GEO_ROTATION_NODE(LAYER_FORCE, 0, 0, 0),
				GEO_OPEN_NODE(),
					GEO_ANIMATED_PART(LAYER_TRANSPARENT, 70, 0, 0, katalina_ed_000_offset_001_mesh_layer_1),
					GEO_OPEN_NODE(),
						GEO_ANIMATED_PART(LAYER_OPAQUE, 53, 0, 0, NULL),
						GEO_OPEN_NODE(),
							GEO_ROTATION_NODE(LAYER_FORCE, 0, 0, 0),
							GEO_OPEN_NODE(),
								GEO_SWITCH_CASE(0, geo_switch_mario_cap_on_off),
								GEO_OPEN_NODE(),
									GEO_NODE_START(),
									GEO_OPEN_NODE(),
										GEO_SWITCH_CASE(0, geo_switch_mario_eyes),
										GEO_OPEN_NODE(),
											GEO_NODE_START(),
											GEO_OPEN_NODE(),
												GEO_DISPLAY_LIST(LAYER_TRANSPARENT, katalina_ed_000_displaylist_mesh_layer_1),
											GEO_CLOSE_NODE(),
											GEO_BRANCH(1, katalina_ed_002_switch_opt0_001_switch_opt1_jump_katalina_ed_ArmatureObj_halfclosed),
											GEO_BRANCH(1, katalina_ed_002_switch_opt0_001_switch_opt1_jump_katalina_ed_ArmatureObj_closed_001),
										GEO_CLOSE_NODE(),
									GEO_CLOSE_NODE(),
								GEO_CLOSE_NODE(),
								GEO_TRANSLATE_ROTATE(LAYER_FORCE, 145, -52, -129, 15, -33, -133),
								GEO_OPEN_NODE(),
									GEO_ASM(0, geo_mario_rotate_wing_cap_wings),
									GEO_ROTATION_NODE(LAYER_FORCE, 0, 0, 0),
									GEO_OPEN_NODE(),
									GEO_CLOSE_NODE(),
								GEO_CLOSE_NODE(),
								GEO_TRANSLATE_ROTATE(LAYER_FORCE, 145, -52, 129, -15, 33, -133),
								GEO_OPEN_NODE(),
									GEO_ASM(1, geo_mario_rotate_wing_cap_wings),
									GEO_ROTATION_NODE(LAYER_FORCE, 0, 0, 0),
									GEO_OPEN_NODE(),
									GEO_CLOSE_NODE(),
								GEO_CLOSE_NODE(),
							GEO_CLOSE_NODE(),
						GEO_CLOSE_NODE(),
						GEO_ANIMATED_PART(LAYER_OPAQUE, 32, -10, 31, NULL),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(LAYER_TRANSPARENT, 0, 0, 0, katalina_ed_000_offset_003_mesh_layer_1),
							GEO_OPEN_NODE(),
								GEO_ANIMATED_PART(LAYER_TRANSPARENT, 83, 0, 0, katalina_ed_000_offset_004_mesh_layer_1),
								GEO_OPEN_NODE(),
									GEO_SWITCH_CASE(1, geo_switch_mario_hand),
									GEO_OPEN_NODE(),
										GEO_NODE_START(),
										GEO_OPEN_NODE(),
											GEO_ANIMATED_PART(LAYER_OPAQUE, 85, 0, 0, NULL),
											GEO_OPEN_NODE(),
												GEO_SCALE(LAYER_FORCE, 65536),
												GEO_OPEN_NODE(),
													GEO_DISPLAY_LIST(LAYER_TRANSPARENT, katalina_ed_000_displaylist_003_mesh_layer_4),
												GEO_CLOSE_NODE(),
											GEO_CLOSE_NODE(),
										GEO_CLOSE_NODE(),
									GEO_CLOSE_NODE(),
								GEO_CLOSE_NODE(),
							GEO_CLOSE_NODE(),
						GEO_CLOSE_NODE(),
						GEO_ANIMATED_PART(LAYER_OPAQUE, 33, -10, -35, NULL),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(LAYER_TRANSPARENT, 0, 0, 0, katalina_ed_000_offset_006_mesh_layer_1),
							GEO_OPEN_NODE(),
								GEO_ANIMATED_PART(LAYER_TRANSPARENT, 85, 0, 0, katalina_ed_000_offset_007_mesh_layer_1),
								GEO_OPEN_NODE(),
									GEO_SWITCH_CASE(0, geo_switch_mario_hand),
									GEO_OPEN_NODE(),
										GEO_NODE_START(),
										GEO_OPEN_NODE(),
											GEO_ANIMATED_PART(LAYER_OPAQUE, 83, 0, 0, NULL),
											GEO_OPEN_NODE(),
												GEO_SCALE(LAYER_FORCE, 65536),
												GEO_OPEN_NODE(),
													GEO_DISPLAY_LIST(LAYER_TRANSPARENT, katalina_ed_000_displaylist_004_mesh_layer_4),
												GEO_CLOSE_NODE(),
												GEO_HELD_OBJECT(0, 0, 0, 0, geo_switch_mario_hand_grab_pos),
											GEO_CLOSE_NODE(),
										GEO_CLOSE_NODE(),
									GEO_CLOSE_NODE(),
								GEO_CLOSE_NODE(),
							GEO_CLOSE_NODE(),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
				GEO_ANIMATED_PART(LAYER_OPAQUE, 13, -8, 37, NULL),
				GEO_OPEN_NODE(),
					GEO_ANIMATED_PART(LAYER_TRANSPARENT, 0, 0, 0, katalina_ed_000_offset_009_mesh_layer_1),
					GEO_OPEN_NODE(),
						GEO_ANIMATED_PART(LAYER_TRANSPARENT, 82, 0, 8, katalina_ed_000_offset_010_mesh_layer_1),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(LAYER_TRANSPARENT, 84, 0, 7, katalina_ed_000_offset_011_mesh_layer_1),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
				GEO_ANIMATED_PART(LAYER_OPAQUE, 13, -8, -42, NULL),
				GEO_OPEN_NODE(),
					GEO_ANIMATED_PART(LAYER_TRANSPARENT, 0, 0, 0, katalina_ed_000_offset_012_mesh_layer_1),
					GEO_OPEN_NODE(),
						GEO_ANIMATED_PART(LAYER_TRANSPARENT, 82, 0, -7, katalina_ed_000_offset_013_mesh_layer_1),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(LAYER_OPAQUE, 84, 0, -6, NULL),
							GEO_OPEN_NODE(),
								GEO_SCALE(LAYER_FORCE, 65536),
								GEO_OPEN_NODE(),
									GEO_DISPLAY_LIST(LAYER_TRANSPARENT, katalina_ed_000_displaylist_005_mesh_layer_4),
								GEO_CLOSE_NODE(),
							GEO_CLOSE_NODE(),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout katalina_ed_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_SHADOW(0, 180, 100),
		GEO_OPEN_NODE(),
			GEO_SCALE(LAYER_FORCE, 16384),
			GEO_OPEN_NODE(),
				GEO_SWITCH_CASE(0, geo_switch_mario_stand_run),
				GEO_OPEN_NODE(),
					GEO_NODE_START(),
					GEO_OPEN_NODE(),
						GEO_SWITCH_CASE(0, geo_switch_mario_cap_effect),
						GEO_OPEN_NODE(),
							GEO_NODE_START(),
							GEO_OPEN_NODE(),
								GEO_ANIMATED_PART(LAYER_OPAQUE, 36, 22, 0, NULL),
								GEO_OPEN_NODE(),
									GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, katalina_ed_000_offset_mesh_layer_1),
									GEO_OPEN_NODE(),
										GEO_ROTATION_NODE(LAYER_FORCE, 0, 0, 0),
										GEO_OPEN_NODE(),
											GEO_ANIMATED_PART(LAYER_OPAQUE, 70, 0, 0, katalina_ed_000_offset_001_mesh_layer_1),
											GEO_OPEN_NODE(),
												GEO_ANIMATED_PART(LAYER_OPAQUE, 53, 0, 0, NULL),
												GEO_OPEN_NODE(),
													GEO_ROTATION_NODE(LAYER_FORCE, 0, 0, 0),
													GEO_OPEN_NODE(),
														GEO_SWITCH_CASE(0, geo_switch_mario_cap_on_off),
														GEO_OPEN_NODE(),
															GEO_NODE_START(),
															GEO_OPEN_NODE(),
																GEO_SWITCH_CASE(0, geo_switch_mario_eyes),
																GEO_OPEN_NODE(),
																	GEO_NODE_START(),
																	GEO_OPEN_NODE(),
																		GEO_DISPLAY_LIST(LAYER_OPAQUE, katalina_ed_000_displaylist_mesh_layer_1),
																	GEO_CLOSE_NODE(),
																	GEO_BRANCH(1, katalina_ed_ArmatureObj_halfclosed),
																	GEO_BRANCH(1, katalina_ed_ArmatureObj_closed_001),
																GEO_CLOSE_NODE(),
															GEO_CLOSE_NODE(),
														GEO_CLOSE_NODE(),
														GEO_TRANSLATE_ROTATE(LAYER_FORCE, 145, -52, -129, 15, -33, -133),
														GEO_OPEN_NODE(),
															GEO_ASM(0, geo_mario_rotate_wing_cap_wings),
															GEO_ROTATION_NODE(LAYER_FORCE, 0, 0, 0),
															GEO_OPEN_NODE(),
															GEO_CLOSE_NODE(),
														GEO_CLOSE_NODE(),
														GEO_TRANSLATE_ROTATE(LAYER_FORCE, 145, -52, 129, -15, 33, -133),
														GEO_OPEN_NODE(),
															GEO_ASM(1, geo_mario_rotate_wing_cap_wings),
															GEO_ROTATION_NODE(LAYER_FORCE, 0, 0, 0),
															GEO_OPEN_NODE(),
															GEO_CLOSE_NODE(),
														GEO_CLOSE_NODE(),
													GEO_CLOSE_NODE(),
												GEO_CLOSE_NODE(),
												GEO_ANIMATED_PART(LAYER_OPAQUE, 32, -10, 31, NULL),
												GEO_OPEN_NODE(),
													GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, katalina_ed_000_offset_003_mesh_layer_1),
													GEO_OPEN_NODE(),
														GEO_ANIMATED_PART(LAYER_OPAQUE, 83, 0, 0, katalina_ed_000_offset_004_mesh_layer_1),
														GEO_OPEN_NODE(),
															GEO_SWITCH_CASE(1, geo_switch_mario_hand),
															GEO_OPEN_NODE(),
																GEO_NODE_START(),
																GEO_OPEN_NODE(),
																	GEO_ANIMATED_PART(LAYER_OPAQUE, 85, 0, 0, NULL),
																	GEO_OPEN_NODE(),
																		GEO_SCALE(LAYER_FORCE, 65536),
																		GEO_OPEN_NODE(),
																			GEO_DISPLAY_LIST(LAYER_ALPHA, katalina_ed_000_displaylist_003_mesh_layer_4),
																		GEO_CLOSE_NODE(),
																	GEO_CLOSE_NODE(),
																GEO_CLOSE_NODE(),
															GEO_CLOSE_NODE(),
														GEO_CLOSE_NODE(),
													GEO_CLOSE_NODE(),
												GEO_CLOSE_NODE(),
												GEO_ANIMATED_PART(LAYER_OPAQUE, 33, -10, -35, NULL),
												GEO_OPEN_NODE(),
													GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, katalina_ed_000_offset_006_mesh_layer_1),
													GEO_OPEN_NODE(),
														GEO_ANIMATED_PART(LAYER_OPAQUE, 85, 0, 0, katalina_ed_000_offset_007_mesh_layer_1),
														GEO_OPEN_NODE(),
															GEO_SWITCH_CASE(0, geo_switch_mario_hand),
															GEO_OPEN_NODE(),
																GEO_NODE_START(),
																GEO_OPEN_NODE(),
																	GEO_ANIMATED_PART(LAYER_OPAQUE, 83, 0, 0, NULL),
																	GEO_OPEN_NODE(),
																		GEO_SCALE(LAYER_FORCE, 65536),
																		GEO_OPEN_NODE(),
																			GEO_DISPLAY_LIST(LAYER_ALPHA, katalina_ed_000_displaylist_004_mesh_layer_4),
																		GEO_CLOSE_NODE(),
																		GEO_HELD_OBJECT(0, 0, 0, 0, geo_switch_mario_hand_grab_pos),
																	GEO_CLOSE_NODE(),
																GEO_CLOSE_NODE(),
															GEO_CLOSE_NODE(),
														GEO_CLOSE_NODE(),
													GEO_CLOSE_NODE(),
												GEO_CLOSE_NODE(),
											GEO_CLOSE_NODE(),
										GEO_CLOSE_NODE(),
										GEO_ANIMATED_PART(LAYER_OPAQUE, 13, -8, 37, NULL),
										GEO_OPEN_NODE(),
											GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, katalina_ed_000_offset_009_mesh_layer_1),
											GEO_OPEN_NODE(),
												GEO_ANIMATED_PART(LAYER_OPAQUE, 82, 0, 8, katalina_ed_000_offset_010_mesh_layer_1),
												GEO_OPEN_NODE(),
													GEO_ANIMATED_PART(LAYER_OPAQUE, 84, 0, 7, katalina_ed_000_offset_011_mesh_layer_1),
												GEO_CLOSE_NODE(),
											GEO_CLOSE_NODE(),
										GEO_CLOSE_NODE(),
										GEO_ANIMATED_PART(LAYER_OPAQUE, 13, -8, -42, NULL),
										GEO_OPEN_NODE(),
											GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, katalina_ed_000_offset_012_mesh_layer_1),
											GEO_OPEN_NODE(),
												GEO_ANIMATED_PART(LAYER_OPAQUE, 82, 0, -7, katalina_ed_000_offset_013_mesh_layer_1),
												GEO_OPEN_NODE(),
													GEO_ANIMATED_PART(LAYER_OPAQUE, 84, 0, -6, NULL),
													GEO_OPEN_NODE(),
														GEO_SCALE(LAYER_FORCE, 65536),
														GEO_OPEN_NODE(),
															GEO_DISPLAY_LIST(LAYER_ALPHA, katalina_ed_000_displaylist_005_mesh_layer_4),
														GEO_CLOSE_NODE(),
													GEO_CLOSE_NODE(),
												GEO_CLOSE_NODE(),
											GEO_CLOSE_NODE(),
										GEO_CLOSE_NODE(),
									GEO_CLOSE_NODE(),
								GEO_CLOSE_NODE(),
							GEO_CLOSE_NODE(),
							GEO_BRANCH(1, katalina_ed_002_switch_opt0_001_switch_opt1),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, katalina_ed_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_ALPHA, katalina_ed_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, katalina_ed_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};

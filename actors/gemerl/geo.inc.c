#include "src/game/envfx_snow.h"

const GeoLayout gemerl_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_SHADOW(0, 180, 60),
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
								GEO_ANIMATED_PART(LAYER_OPAQUE, -7, -24, 0, NULL),
								GEO_OPEN_NODE(),
									GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, gemerl_000_offset_mesh_layer_1),
									GEO_OPEN_NODE(),
										GEO_ROTATION_NODE(LAYER_FORCE, 0, 0, 0),
										GEO_OPEN_NODE(),
											GEO_ANIMATED_PART(LAYER_OPAQUE, 24, 0, 0, gemerl_000_offset_001_mesh_layer_1),
											GEO_OPEN_NODE(),
												GEO_ANIMATED_PART(LAYER_OPAQUE, 47, 0, 0, NULL),
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
																		GEO_DISPLAY_LIST(LAYER_OPAQUE, gemerl_000_displaylist_mesh_layer_1),
																	GEO_CLOSE_NODE(),
																GEO_CLOSE_NODE(),
															GEO_CLOSE_NODE(),
														GEO_CLOSE_NODE(),
														GEO_TRANSLATE_ROTATE(LAYER_FORCE, 53, -19, -47, 15, -33, -133),
														GEO_OPEN_NODE(),
															GEO_ROTATION_NODE(LAYER_FORCE, 0, 0, 0),
															GEO_OPEN_NODE(),
															GEO_CLOSE_NODE(),
														GEO_CLOSE_NODE(),
														GEO_TRANSLATE_ROTATE(LAYER_FORCE, 53, -19, 47, -15, 33, -133),
														GEO_OPEN_NODE(),
															GEO_ROTATION_NODE(LAYER_FORCE, 0, 0, 0),
															GEO_OPEN_NODE(),
															GEO_CLOSE_NODE(),
														GEO_CLOSE_NODE(),
													GEO_CLOSE_NODE(),
												GEO_CLOSE_NODE(),
												GEO_ANIMATED_PART(LAYER_OPAQUE, 41, -4, 30, NULL),
												GEO_OPEN_NODE(),
													GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, gemerl_000_offset_003_mesh_layer_1),
													GEO_OPEN_NODE(),
														GEO_ANIMATED_PART(LAYER_OPAQUE, 45, 0, 0, gemerl_000_offset_004_mesh_layer_1),
														GEO_OPEN_NODE(),
															GEO_SWITCH_CASE(1, geo_switch_mario_hand),
															GEO_OPEN_NODE(),
																GEO_NODE_START(),
																GEO_OPEN_NODE(),
																	GEO_ANIMATED_PART(LAYER_OPAQUE, 68, 0, 0, NULL),
																	GEO_OPEN_NODE(),
																		GEO_SCALE(LAYER_FORCE, 65536),
																		GEO_OPEN_NODE(),
																			GEO_DISPLAY_LIST(LAYER_OPAQUE, gemerl_000_displaylist_003_mesh_layer_1),
																		GEO_CLOSE_NODE(),
																	GEO_CLOSE_NODE(),
																GEO_CLOSE_NODE(),
															GEO_CLOSE_NODE(),
														GEO_CLOSE_NODE(),
													GEO_CLOSE_NODE(),
												GEO_CLOSE_NODE(),
												GEO_ANIMATED_PART(LAYER_OPAQUE, 41, -4, -30, NULL),
												GEO_OPEN_NODE(),
													GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, gemerl_000_offset_006_mesh_layer_1),
													GEO_OPEN_NODE(),
														GEO_ANIMATED_PART(LAYER_OPAQUE, 44, 0, 0, gemerl_000_offset_007_mesh_layer_1),
														GEO_OPEN_NODE(),
															GEO_SWITCH_CASE(0, geo_switch_mario_hand),
															GEO_OPEN_NODE(),
																GEO_NODE_START(),
																GEO_OPEN_NODE(),
																	GEO_ANIMATED_PART(LAYER_OPAQUE, 67, 0, 0, NULL),
																	GEO_OPEN_NODE(),
																		GEO_SCALE(LAYER_FORCE, 65536),
																		GEO_OPEN_NODE(),
																			GEO_DISPLAY_LIST(LAYER_OPAQUE, gemerl_000_displaylist_004_mesh_layer_1),
																		GEO_CLOSE_NODE(),
																	GEO_CLOSE_NODE(),
																GEO_CLOSE_NODE(),
															GEO_CLOSE_NODE(),
														GEO_CLOSE_NODE(),
													GEO_CLOSE_NODE(),
												GEO_CLOSE_NODE(),
											GEO_CLOSE_NODE(),
										GEO_CLOSE_NODE(),
										GEO_ANIMATED_PART(LAYER_OPAQUE, 5, -3, 31, NULL),
										GEO_OPEN_NODE(),
											GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, gemerl_000_offset_009_mesh_layer_1),
											GEO_OPEN_NODE(),
												GEO_ANIMATED_PART(LAYER_OPAQUE, 49, 0, 0, gemerl_000_offset_010_mesh_layer_1),
												GEO_OPEN_NODE(),
													GEO_ANIMATED_PART(LAYER_OPAQUE, 56, 0, 0, gemerl_000_offset_011_mesh_layer_1),
												GEO_CLOSE_NODE(),
											GEO_CLOSE_NODE(),
										GEO_CLOSE_NODE(),
										GEO_ANIMATED_PART(LAYER_OPAQUE, 5, -3, -32, NULL),
										GEO_OPEN_NODE(),
											GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, gemerl_000_offset_012_mesh_layer_1),
											GEO_OPEN_NODE(),
												GEO_ANIMATED_PART(LAYER_OPAQUE, 49, 0, 0, gemerl_000_offset_013_mesh_layer_1),
												GEO_OPEN_NODE(),
													GEO_ANIMATED_PART(LAYER_OPAQUE, 56, 0, 0, NULL),
													GEO_OPEN_NODE(),
														GEO_SCALE(LAYER_FORCE, 65536),
														GEO_OPEN_NODE(),
															GEO_DISPLAY_LIST(LAYER_OPAQUE, gemerl_000_displaylist_005_mesh_layer_1),
														GEO_CLOSE_NODE(),
													GEO_CLOSE_NODE(),
												GEO_CLOSE_NODE(),
											GEO_CLOSE_NODE(),
										GEO_CLOSE_NODE(),
									GEO_CLOSE_NODE(),
								GEO_CLOSE_NODE(),
							GEO_CLOSE_NODE(),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, gemerl_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};

#include "src/game/envfx_snow.h"

const GeoLayout sweet_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_SHADOW(1, 204, 80),
		GEO_OPEN_NODE(),
			GEO_SCALE(LAYER_OPAQUE, 8520),
			GEO_OPEN_NODE(),
				GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 464, 0, sweet_Root_mesh_layer_1),
				GEO_OPEN_NODE(),
					GEO_DISPLAY_LIST(LAYER_OPAQUE, sweet_Chest_skinned_mesh_layer_1),
					GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 144, 0, sweet_Chest_mesh_layer_1),
					GEO_OPEN_NODE(),
						GEO_SWITCH_CASE(0, geo_switch_mario_eyes),
						GEO_OPEN_NODE(),
							GEO_NODE_START(),
							GEO_OPEN_NODE(),
								GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 303, 0, sweet_Head_mesh_layer_1),
								GEO_OPEN_NODE(),
									GEO_DISPLAY_LIST(LAYER_ALPHA, sweet_Head_mesh_layer_4),
								GEO_CLOSE_NODE(),
							GEO_CLOSE_NODE(),
						GEO_CLOSE_NODE(),
						GEO_ANIMATED_PART(LAYER_OPAQUE, 230, 214, 0, sweet_lArm_001_mesh_layer_1),
						GEO_OPEN_NODE(),
							GEO_DISPLAY_LIST(LAYER_OPAQUE, sweet_lArm_002_skinned_mesh_layer_1),
							GEO_ANIMATED_PART(LAYER_OPAQUE, 202, 0, 0, sweet_lArm_002_mesh_layer_1),
							GEO_OPEN_NODE(),
								GEO_ANIMATED_PART(LAYER_OPAQUE, 173, 0, 0, sweet_lArm_003_mesh_layer_1),
							GEO_CLOSE_NODE(),
						GEO_CLOSE_NODE(),
						GEO_ANIMATED_PART(LAYER_OPAQUE, -220, 214, 0, sweet_rArm_001_mesh_layer_1),
						GEO_OPEN_NODE(),
							GEO_DISPLAY_LIST(LAYER_OPAQUE, sweet_rArm_002_skinned_mesh_layer_1),
							GEO_ANIMATED_PART(LAYER_OPAQUE, -204, 0, 0, sweet_rArm_002_mesh_layer_1),
							GEO_OPEN_NODE(),
								GEO_ANIMATED_PART(LAYER_OPAQUE, -179, 0, 0, sweet_rArm_003_mesh_layer_1),
							GEO_CLOSE_NODE(),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
					GEO_ANIMATED_PART(LAYER_OPAQUE, 126, -34, 0, sweet_lLeg_001_mesh_layer_1),
					GEO_OPEN_NODE(),
						GEO_DISPLAY_LIST(LAYER_OPAQUE, sweet_lLeg_002_skinned_mesh_layer_1),
						GEO_ANIMATED_PART(LAYER_OPAQUE, 0, -233, 0, sweet_lLeg_002_mesh_layer_1),
						GEO_OPEN_NODE(),
							GEO_DISPLAY_LIST(LAYER_OPAQUE, sweet_lLeg_003_skinned_mesh_layer_1),
							GEO_ANIMATED_PART(LAYER_OPAQUE, 3, -128, 0, sweet_lLeg_003_mesh_layer_1),
							GEO_OPEN_NODE(),
								GEO_DISPLAY_LIST(LAYER_ALPHA, sweet_lLeg_003_mesh_layer_4),
							GEO_CLOSE_NODE(),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
					GEO_ANIMATED_PART(LAYER_OPAQUE, -125, -34, 0, sweet_rLeg_001_mesh_layer_1),
					GEO_OPEN_NODE(),
						GEO_DISPLAY_LIST(LAYER_OPAQUE, sweet_rLeg_002_skinned_mesh_layer_1),
						GEO_ANIMATED_PART(LAYER_OPAQUE, 1, -230, 0, sweet_rLeg_002_mesh_layer_1),
						GEO_OPEN_NODE(),
							GEO_DISPLAY_LIST(LAYER_OPAQUE, sweet_rLeg_003_skinned_mesh_layer_1),
							GEO_ANIMATED_PART(LAYER_OPAQUE, 2, -132, 0, sweet_rLeg_003_mesh_layer_1),
							GEO_OPEN_NODE(),
								GEO_DISPLAY_LIST(LAYER_ALPHA, sweet_rLeg_003_mesh_layer_4),
							GEO_CLOSE_NODE(),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, sweet_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_ALPHA, sweet_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};

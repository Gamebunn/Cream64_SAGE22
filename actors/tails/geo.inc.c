#include "src/game/envfx_snow.h"

const GeoLayout tails_Head_Switch_opt1[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 161, 0, tails_Head_mesh_layer_1_mat_override_eyes_halfopen_0),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout tails_Head_Switch_opt2[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 161, 0, tails_Head_mesh_layer_1_mat_override_eyes_closed_1),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout tails[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_SHADOW(1, 204, 80),
		GEO_OPEN_NODE(),
			GEO_SCALE(LAYER_OPAQUE, 5898),
			GEO_OPEN_NODE(),
				GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 577, 0, tails_Root_mesh_layer_1),
				GEO_OPEN_NODE(),
					GEO_DISPLAY_LIST(LAYER_OPAQUE, tails_Chest_skinned_mesh_layer_1),
					GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 131, 0, tails_Chest_mesh_layer_1),
					GEO_OPEN_NODE(),
						GEO_SWITCH_CASE(0, geo_switch_tails_face),
						GEO_OPEN_NODE(),
							GEO_NODE_START(),
							GEO_OPEN_NODE(),
								GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 161, 0, tails_Head_mesh_layer_1),
							GEO_CLOSE_NODE(),
							GEO_BRANCH(1, tails_Head_Switch_opt1),
							GEO_BRANCH(1, tails_Head_Switch_opt2),
						GEO_CLOSE_NODE(),
						GEO_ANIMATED_PART(LAYER_OPAQUE, 101, 128, 0, tails_lArm_001_mesh_layer_1),
						GEO_OPEN_NODE(),
							GEO_DISPLAY_LIST(LAYER_OPAQUE, tails_lArm_002_skinned_mesh_layer_1),
							GEO_ANIMATED_PART(LAYER_OPAQUE, 175, 0, 0, tails_lArm_002_mesh_layer_1),
							GEO_OPEN_NODE(),
								GEO_ANIMATED_PART(LAYER_OPAQUE, 232, 0, 0, tails_lArm_003_mesh_layer_1),
							GEO_CLOSE_NODE(),
						GEO_CLOSE_NODE(),
						GEO_ANIMATED_PART(LAYER_OPAQUE, -95, 128, 0, tails_rArm_001_mesh_layer_1),
						GEO_OPEN_NODE(),
							GEO_DISPLAY_LIST(LAYER_OPAQUE, tails_rArm_002_skinned_mesh_layer_1),
							GEO_ANIMATED_PART(LAYER_OPAQUE, -180, 0, 0, tails_rArm_002_mesh_layer_1),
							GEO_OPEN_NODE(),
								GEO_ANIMATED_PART(LAYER_OPAQUE, -225, 0, 0, tails_rArm_003_mesh_layer_1),
							GEO_CLOSE_NODE(),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
					GEO_ANIMATED_PART(LAYER_OPAQUE, 3, 68, -73, NULL),
					GEO_OPEN_NODE(),
						GEO_DISPLAY_LIST(LAYER_OPAQUE, tails_lTail_001_skinned_mesh_layer_1),
						GEO_ANIMATED_PART(LAYER_OPAQUE, 134, 0, -242, tails_lTail_001_mesh_layer_1),
						GEO_OPEN_NODE(),
							GEO_DISPLAY_LIST(LAYER_OPAQUE, tails_lTail_002_skinned_mesh_layer_1),
							GEO_ANIMATED_PART(LAYER_OPAQUE, 158, 0, -272, tails_lTail_002_mesh_layer_1),
							GEO_OPEN_NODE(),
								GEO_DISPLAY_LIST(LAYER_OPAQUE, tails_lTail_003_skinned_mesh_layer_1),
								GEO_ANIMATED_PART(LAYER_OPAQUE, 147, 0, -254, tails_lTail_003_mesh_layer_1),
							GEO_CLOSE_NODE(),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
					GEO_ANIMATED_PART(LAYER_OPAQUE, -2, 68, -73, NULL),
					GEO_OPEN_NODE(),
						GEO_DISPLAY_LIST(LAYER_OPAQUE, tails_rTail_001_skinned_mesh_layer_1),
						GEO_ANIMATED_PART(LAYER_OPAQUE, -132, 0, -236, tails_rTail_001_mesh_layer_1),
						GEO_OPEN_NODE(),
							GEO_DISPLAY_LIST(LAYER_OPAQUE, tails_rTail_002_skinned_mesh_layer_1),
							GEO_ANIMATED_PART(LAYER_OPAQUE, -157, 0, -278, tails_rTail_002_mesh_layer_1),
							GEO_OPEN_NODE(),
								GEO_DISPLAY_LIST(LAYER_OPAQUE, tails_rTail_003_skinned_mesh_layer_1),
								GEO_ANIMATED_PART(LAYER_OPAQUE, -145, 0, -256, tails_rTail_003_mesh_layer_1),
							GEO_CLOSE_NODE(),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
					GEO_ANIMATED_PART(LAYER_OPAQUE, 74, -7, 0, tails_lLeg_001_mesh_layer_1),
					GEO_OPEN_NODE(),
						GEO_DISPLAY_LIST(LAYER_OPAQUE, tails_lLeg_002_skinned_mesh_layer_1),
						GEO_ANIMATED_PART(LAYER_OPAQUE, 1, -147, 0, tails_lLeg_002_mesh_layer_1),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(LAYER_OPAQUE, 4, -216, 0, tails_lLeg_003_mesh_layer_1),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
					GEO_ANIMATED_PART(LAYER_OPAQUE, -73, -7, 0, tails_rLeg_001_mesh_layer_1),
					GEO_OPEN_NODE(),
						GEO_DISPLAY_LIST(LAYER_OPAQUE, tails_rLeg_002_skinned_mesh_layer_1),
						GEO_ANIMATED_PART(LAYER_OPAQUE, 2, -143, 0, tails_rLeg_002_mesh_layer_1),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(LAYER_OPAQUE, 3, -220, 0, tails_rLeg_003_mesh_layer_1),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, tails_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};

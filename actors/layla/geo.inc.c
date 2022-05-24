#include "src/game/envfx_snow.h"

const GeoLayout layla_0_Switch_opt1[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 97, 0, layla_Head_mesh_layer_1_mat_override_eyes_halfopen_f3d_0),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout layla_0_Switch_opt2[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 97, 0, layla_Head_mesh_layer_1_mat_override_eyes_closed_f3d_1),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout layla_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_SCALE(LAYER_OPAQUE, 16384),
		GEO_OPEN_NODE(),
			GEO_SHADOW(1, 191, 80),
			GEO_OPEN_NODE(),
				GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, layla_Root_mesh_layer_1),
				GEO_OPEN_NODE(),
					GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 71, 0, layla_Chest_mesh_layer_1),
					GEO_OPEN_NODE(),
						GEO_SWITCH_CASE(0, geo_switch_mario_eyes),
						GEO_OPEN_NODE(),
							GEO_NODE_START(),
							GEO_OPEN_NODE(),
								GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 97, 0, layla_Head_mesh_layer_1),
							GEO_CLOSE_NODE(),
							GEO_BRANCH(1, layla_0_Switch_opt1),
							GEO_BRANCH(1, layla_0_Switch_opt2),
						GEO_CLOSE_NODE(),
						GEO_ANIMATED_PART(LAYER_OPAQUE, 49, 77, 0, layla_LArm_001_mesh_layer_1),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(LAYER_OPAQUE, 69, 0, 0, layla_LArm_002_mesh_layer_1),
							GEO_OPEN_NODE(),
								GEO_ANIMATED_PART(LAYER_OPAQUE, 65, 0, 0, layla_LArm_003_mesh_layer_1),
							GEO_CLOSE_NODE(),
						GEO_CLOSE_NODE(),
						GEO_ANIMATED_PART(LAYER_OPAQUE, -45, 77, 0, layla_RArm_001_mesh_layer_1),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(LAYER_OPAQUE, -70, 0, 0, layla_RArm_002_mesh_layer_1),
							GEO_OPEN_NODE(),
								GEO_ANIMATED_PART(LAYER_OPAQUE, -74, 0, 0, layla_RArm_003_mesh_layer_1),
							GEO_CLOSE_NODE(),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
					GEO_ANIMATED_PART(LAYER_OPAQUE, 21, 40, 0, layla_LLeg_001_mesh_layer_1),
					GEO_OPEN_NODE(),
						GEO_ANIMATED_PART(LAYER_OPAQUE, 0, -86, 0, layla_LLeg_002_mesh_layer_1),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(LAYER_OPAQUE, 0, -66, 0, layla_LLeg_003_mesh_layer_1),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
					GEO_ANIMATED_PART(LAYER_OPAQUE, -23, 40, 0, layla_RLeg_001_mesh_layer_1),
					GEO_OPEN_NODE(),
						GEO_ANIMATED_PART(LAYER_OPAQUE, 0, -86, 0, layla_RLeg_002_mesh_layer_1),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(LAYER_OPAQUE, 0, -66, 0, layla_RLeg_003_mesh_layer_1),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
					GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 47, -34, NULL),
					GEO_OPEN_NODE(),
						GEO_DISPLAY_LIST(LAYER_OPAQUE, layla_Tail_002_skinned_mesh_layer_1),
						GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, -90, layla_Tail_002_mesh_layer_1),
						GEO_OPEN_NODE(),
							GEO_DISPLAY_LIST(LAYER_OPAQUE, layla_Tail_003_skinned_mesh_layer_1),
							GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, -81, layla_Tail_003_mesh_layer_1),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, layla_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};

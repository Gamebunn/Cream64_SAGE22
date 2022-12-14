#include "src/game/envfx_snow.h"

const GeoLayout scuttlebug_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_SHADOW(0, 150, 100),
		GEO_OPEN_NODE(),
			GEO_SCALE(LAYER_FORCE, 16384),
			GEO_OPEN_NODE(),
				GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
				GEO_OPEN_NODE(),
					GEO_ANIMATED_PART(LAYER_OPAQUE, 0, -29, 0, NULL),
					GEO_OPEN_NODE(),
						GEO_ANIMATED_PART(LAYER_OPAQUE, -1, 113, 112, NULL),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
							GEO_OPEN_NODE(),
								GEO_ANIMATED_PART(LAYER_OPAQUE, 198, 0, 0, NULL),
								GEO_OPEN_NODE(),
									GEO_ANIMATED_PART(LAYER_OPAQUE, 195, 0, 0, NULL),
									GEO_OPEN_NODE(),
										GEO_ANIMATED_PART(LAYER_ALPHA, 0, 0, 0, scuttlebug_000_offset_006_mesh_layer_4),
									GEO_CLOSE_NODE(),
									GEO_ANIMATED_PART(LAYER_ALPHA, 0, 0, 0, scuttlebug_002_offset_mesh_layer_4),
								GEO_CLOSE_NODE(),
								GEO_ANIMATED_PART(LAYER_ALPHA, 0, 0, 0, scuttlebug_002_offset_001_mesh_layer_4),
							GEO_CLOSE_NODE(),
						GEO_CLOSE_NODE(),
						GEO_ANIMATED_PART(LAYER_OPAQUE, -1, 109, -116, NULL),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
							GEO_OPEN_NODE(),
								GEO_ANIMATED_PART(LAYER_OPAQUE, 198, 0, 0, NULL),
								GEO_OPEN_NODE(),
									GEO_ANIMATED_PART(LAYER_OPAQUE, 195, 0, 0, NULL),
									GEO_OPEN_NODE(),
										GEO_ANIMATED_PART(LAYER_ALPHA, 0, 0, 0, scuttlebug_000_offset_010_mesh_layer_4),
									GEO_CLOSE_NODE(),
									GEO_ANIMATED_PART(LAYER_ALPHA, 0, 0, 0, scuttlebug_002_offset_003_mesh_layer_4),
								GEO_CLOSE_NODE(),
								GEO_ANIMATED_PART(LAYER_ALPHA, 0, 0, 0, scuttlebug_002_offset_004_mesh_layer_4),
							GEO_CLOSE_NODE(),
						GEO_CLOSE_NODE(),
						GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
						GEO_OPEN_NODE(),
							GEO_DISPLAY_LIST(LAYER_ALPHA, scuttlebug_000_displaylist_mesh_layer_4),
						GEO_CLOSE_NODE(),
						GEO_ANIMATED_PART(LAYER_OPAQUE, -29, -57, 28, NULL),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
							GEO_OPEN_NODE(),
								GEO_ANIMATED_PART(LAYER_OPAQUE, 158, 0, 0, NULL),
								GEO_OPEN_NODE(),
									GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
									GEO_OPEN_NODE(),
									GEO_CLOSE_NODE(),
									GEO_ANIMATED_PART(LAYER_ALPHA, 0, 0, 0, NULL),
								GEO_CLOSE_NODE(),
							GEO_CLOSE_NODE(),
						GEO_CLOSE_NODE(),
						GEO_ANIMATED_PART(LAYER_OPAQUE, -29, 55, 28, NULL),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
							GEO_OPEN_NODE(),
								GEO_ANIMATED_PART(LAYER_OPAQUE, 157, 0, 0, NULL),
								GEO_OPEN_NODE(),
									GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
									GEO_OPEN_NODE(),
									GEO_CLOSE_NODE(),
									GEO_ANIMATED_PART(LAYER_ALPHA, 0, 0, 0, NULL),
								GEO_CLOSE_NODE(),
							GEO_CLOSE_NODE(),
						GEO_CLOSE_NODE(),
						GEO_ANIMATED_PART(LAYER_OPAQUE, -1, -116, -111, NULL),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
							GEO_OPEN_NODE(),
								GEO_ANIMATED_PART(LAYER_OPAQUE, 198, 0, 0, NULL),
								GEO_OPEN_NODE(),
									GEO_ANIMATED_PART(LAYER_OPAQUE, 195, 0, 0, NULL),
									GEO_OPEN_NODE(),
										GEO_ANIMATED_PART(LAYER_ALPHA, 0, 0, 0, scuttlebug_000_offset_020_mesh_layer_4),
									GEO_CLOSE_NODE(),
									GEO_ANIMATED_PART(LAYER_ALPHA, 0, 0, 0, scuttlebug_002_offset_007_mesh_layer_4),
								GEO_CLOSE_NODE(),
								GEO_ANIMATED_PART(LAYER_ALPHA, 0, 0, 0, scuttlebug_002_offset_008_mesh_layer_4),
							GEO_CLOSE_NODE(),
						GEO_CLOSE_NODE(),
						GEO_ANIMATED_PART(LAYER_OPAQUE, -1, -116, 112, NULL),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
							GEO_OPEN_NODE(),
								GEO_ANIMATED_PART(LAYER_OPAQUE, 195, 0, 0, NULL),
								GEO_OPEN_NODE(),
									GEO_ANIMATED_PART(LAYER_OPAQUE, 199, 0, 0, NULL),
									GEO_OPEN_NODE(),
										GEO_ANIMATED_PART(LAYER_ALPHA, 0, 0, 0, scuttlebug_000_offset_024_mesh_layer_4),
									GEO_CLOSE_NODE(),
									GEO_ANIMATED_PART(LAYER_ALPHA, 0, 0, 0, scuttlebug_002_offset_009_mesh_layer_4),
								GEO_CLOSE_NODE(),
								GEO_ANIMATED_PART(LAYER_ALPHA, 0, 0, 0, scuttlebug_002_offset_010_mesh_layer_4),
							GEO_CLOSE_NODE(),
						GEO_CLOSE_NODE(),
						GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_ALPHA, scuttlebug_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};

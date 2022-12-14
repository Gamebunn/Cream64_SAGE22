#include "src/game/envfx_snow.h"

const GeoLayout spinner_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_SHADOW(0, 150, 100),
		GEO_OPEN_NODE(),
			GEO_SCALE(LAYER_FORCE, 32768),
			GEO_OPEN_NODE(),
				GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
				GEO_OPEN_NODE(),
					GEO_ANIMATED_PART(LAYER_ALPHA, 0, 0, 0, NULL),
					GEO_OPEN_NODE(),
						GEO_ANIMATED_PART(LAYER_OPAQUE, 100, 0, 0, NULL),
						GEO_ANIMATED_PART(LAYER_ALPHA, 100, 0, 0, NULL),
						GEO_ANIMATED_PART(LAYER_ALPHA, 100, 0, 0, NULL),
						GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 28, -12, 0, 0, 0, 8),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
							GEO_OPEN_NODE(),
								GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
								GEO_ANIMATED_PART(LAYER_ALPHA, 0, 0, 0, spinner_001_offset_001_mesh_layer_4),
								GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
								GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
								GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
								GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
							GEO_CLOSE_NODE(),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
					GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
					GEO_OPEN_NODE(),
						GEO_DISPLAY_LIST(LAYER_ALPHA, spinner_000_displaylist_mesh_layer_4),
					GEO_CLOSE_NODE(),
					GEO_ANIMATED_PART(LAYER_ALPHA, 0, 0, 0, NULL),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_ALPHA, spinner_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};

#ifndef WMOTR_HEADER_H
#define WMOTR_HEADER_H

#include "types.h"

// geo
extern const GeoLayout wmotr_geo_0001F0[];

// leveldata
extern const Gfx wmotr_seg7_dl_0700C1F8[];
extern const Gfx wmotr_seg7_dl_0700EFD8[];
extern const Gfx wmotr_seg7_dl_07010608[];
extern const Collision wmotr_seg7_collision[];
extern const MacroObject wmotr_seg7_macro_objs[];

// script
extern const LevelScript level_wmotr_entry[];


#include "levels/wmotr/header.inc.h"

#include "levels/wmotr/golftree/geo_header.h"

#include "levels/wmotr/starflag/geo_header.h"

#include "levels/wmotr/starflag/anim_header.h"

#include "levels/wmotr/johnny/anim_header.h"

#include "levels/wmotr/johnny/geo_header.h"

#include "levels/wmotr/vector/geo_header.h"

#include "levels/wmotr/vector/anim_header.h"

#endif

Lights1 swoop_eye_f3d_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Gfx swoop_eye_ci8_aligner[] = {gsSPEndDisplayList()};
u8 swoop_eye_ci8[] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0x03, 0x04, 
	0x04, 0x03, 0x02, 0x01, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x05, 0x06, 0x07, 0x08, 0x09, 
	0x09, 0x08, 0x07, 0x06, 0x05, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x0a, 0x0b, 0x0c, 0x0d, 0x0d, 0x0d, 
	0x0d, 0x0d, 0x0d, 0x0c, 0x0b, 0x0a, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x0e, 0x0f, 0x10, 0x0d, 0x0d, 0x0d, 0x0d, 
	0x0d, 0x0d, 0x0d, 0x0d, 0x10, 0x0f, 0x0e, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x11, 0x12, 0x13, 0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 
	0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 0x13, 0x12, 0x11, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x0a, 0x14, 0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 
	0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 0x14, 0x0a, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x15, 0x16, 0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 
	0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 0x16, 0x15, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x17, 
	0x18, 0x19, 0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 
	0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 0x19, 0x18, 
	0x17, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1a, 
	0x1b, 0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 
	0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 0x1b, 
	0x1a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1c, 
	0x1d, 0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 
	0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 0x1d, 
	0x1c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 
	0x0c, 0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 
	0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 0x0c, 
	0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 
	0x1f, 0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 
	0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 0x1f, 
	0x1e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 
	0x21, 0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 
	0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 0x21, 
	0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 
	0x21, 0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 
	0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 0x21, 
	0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 
	0x1f, 0x0d, 0x22, 0x23, 0x23, 0x22, 0x0d, 0x0d, 
	0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 0x1f, 
	0x1e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 
	0x0c, 0x0d, 0x23, 0x24, 0x24, 0x23, 0x0d, 0x0d, 
	0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 0x0c, 
	0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1c, 
	0x1d, 0x0d, 0x23, 0x24, 0x24, 0x23, 0x0d, 0x0d, 
	0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 0x1d, 
	0x1c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1a, 
	0x1b, 0x0d, 0x22, 0x23, 0x23, 0x22, 0x0d, 0x0d, 
	0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 0x1b, 
	0x1a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x17, 
	0x18, 0x19, 0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 
	0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 0x19, 0x18, 
	0x17, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x15, 0x16, 0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 
	0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 0x16, 0x15, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x0a, 0x14, 0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 
	0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 0x14, 0x0a, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x11, 0x12, 0x13, 0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 
	0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 0x13, 0x12, 0x11, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x0e, 0x0f, 0x10, 0x0d, 0x0d, 0x0d, 0x0d, 
	0x0d, 0x0d, 0x0d, 0x0d, 0x10, 0x0f, 0x0e, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x0a, 0x0b, 0x0c, 0x0d, 0x0d, 0x0d, 
	0x0d, 0x0d, 0x0d, 0x0c, 0x0b, 0x0a, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x05, 0x06, 0x07, 0x08, 0x09, 
	0x09, 0x08, 0x07, 0x06, 0x05, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0x03, 0x04, 
	0x04, 0x03, 0x02, 0x01, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	
};

Gfx swoop_eye_ci8_pal_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 swoop_eye_ci8_pal_rgba16[] = {
	0x1c, 0xf7, 0x3c, 0xaf, 0x4b, 0x5f, 0x31, 0xd1, 
	0x10, 0x85, 0x43, 0xe5, 0x29, 0x8f, 0x73, 0xdf, 
	0xb5, 0xef, 0xe7, 0x7b, 0x4b, 0xa5, 0x52, 0x97, 
	0xc6, 0x31, 0xff, 0xff, 0x44, 0x29, 0x42, 0x13, 
	0xd6, 0xb7, 0x2c, 0xb5, 0x3a, 0x53, 0xad, 0x6b, 
	0x63, 0x19, 0x3a, 0x13, 0xad, 0xad, 0x3c, 0x6d, 
	0x39, 0xcf, 0xf7, 0xff, 0x4b, 0xa1, 0x6b, 0x9d, 
	0x42, 0x97, 0x9c, 0xe7, 0x18, 0xc7, 0xdf, 0x39, 
	0x08, 0x43, 0xf7, 0xbd, 0xa5, 0x6b, 0x42, 0x11, 
	0x00, 0x01, 
};

Gfx swoop_wing2_ci8_aligner[] = {gsSPEndDisplayList()};
u8 swoop_wing2_ci8[] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0x03, 
	0x04, 0x03, 0x02, 0x01, 0x01, 0x01, 0x01, 0x01, 
	0x05, 0x06, 0x07, 0x05, 0x05, 0x01, 0x01, 0x01, 
	0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x02, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x03, 0x03, 
	0x04, 0x03, 0x02, 0x01, 0x01, 0x01, 0x01, 0x02, 
	0x06, 0x07, 0x06, 0x08, 0x05, 0x05, 0x05, 0x01, 
	0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x03, 0x03, 
	0x04, 0x03, 0x03, 0x01, 0x01, 0x01, 0x02, 0x02, 
	0x07, 0x09, 0x0a, 0x0b, 0x0c, 0x0d, 0x0e, 0x05, 
	0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x03, 0x04, 
	0x04, 0x03, 0x02, 0x01, 0x01, 0x01, 0x02, 0x06, 
	0x07, 0x09, 0x0a, 0x05, 0x0f, 0x10, 0x0b, 0x05, 
	0x05, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x04, 0x04, 
	0x03, 0x03, 0x02, 0x01, 0x01, 0x01, 0x02, 0x07, 
	0x09, 0x0a, 0x11, 0x0a, 0x07, 0x12, 0x13, 0x08, 
	0x06, 0x06, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x04, 0x03, 
	0x02, 0x02, 0x01, 0x01, 0x01, 0x02, 0x06, 0x07, 
	0x09, 0x0a, 0x0a, 0x0a, 0x0a, 0x07, 0x14, 0x14, 
	0x05, 0x07, 0x06, 0x01, 0x01, 0x01, 0x01, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x03, 0x03, 
	0x02, 0x01, 0x01, 0x01, 0x01, 0x02, 0x07, 0x07, 
	0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x09, 0x07, 0x0d, 
	0x15, 0x05, 0x07, 0x02, 0x01, 0x01, 0x01, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x03, 0x02, 
	0x01, 0x01, 0x01, 0x01, 0x01, 0x06, 0x07, 0x09, 
	0x0a, 0x0a, 0x0a, 0x09, 0x09, 0x09, 0x09, 0x08, 
	0x15, 0x15, 0x06, 0x06, 0x01, 0x01, 0x01, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x03, 0x02, 
	0x01, 0x01, 0x01, 0x01, 0x02, 0x07, 0x09, 0x0a, 
	0x0a, 0x0a, 0x09, 0x09, 0x07, 0x07, 0x07, 0x07, 
	0x05, 0x0e, 0x0e, 0x06, 0x01, 0x01, 0x01, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x03, 0x02, 
	0x01, 0x01, 0x02, 0x02, 0x06, 0x09, 0x0a, 0x0a, 
	0x0a, 0x0a, 0x09, 0x09, 0x07, 0x07, 0x07, 0x07, 
	0x07, 0x05, 0x15, 0x08, 0x02, 0x01, 0x01, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x03, 0x02, 
	0x02, 0x02, 0x02, 0x07, 0x07, 0x09, 0x0a, 0x0a, 
	0x0a, 0x0a, 0x09, 0x07, 0x07, 0x07, 0x07, 0x07, 
	0x07, 0x06, 0x08, 0x0e, 0x05, 0x01, 0x01, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x04, 0x03, 
	0x02, 0x07, 0x07, 0x07, 0x09, 0x09, 0x09, 0x09, 
	0x0a, 0x09, 0x09, 0x07, 0x07, 0x07, 0x07, 0x06, 
	0x06, 0x06, 0x05, 0x08, 0x05, 0x01, 0x01, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x16, 0x16, 0x17, 
	0x07, 0x07, 0x07, 0x09, 0x09, 0x09, 0x09, 0x09, 
	0x09, 0x07, 0x07, 0x06, 0x06, 0x06, 0x06, 0x05, 
	0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x01, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x16, 
	0x09, 0x09, 0x09, 0x09, 0x09, 0x07, 0x07, 0x07, 
	0x07, 0x07, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 
	0x05, 0x05, 0x05, 0x08, 0x05, 0x05, 0x01, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x19, 0x1a, 0x16, 
	0x0a, 0x0a, 0x09, 0x09, 0x07, 0x07, 0x07, 0x07, 
	0x07, 0x06, 0x05, 0x05, 0x05, 0x05, 0x05, 0x08, 
	0x08, 0x08, 0x05, 0x05, 0x05, 0x05, 0x05, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x19, 0x19, 0x16, 
	0x09, 0x09, 0x09, 0x09, 0x07, 0x07, 0x06, 0x06, 
	0x06, 0x05, 0x05, 0x05, 0x08, 0x08, 0x05, 0x08, 
	0x08, 0x08, 0x08, 0x05, 0x05, 0x05, 0x05, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x19, 0x18, 0x16, 
	0x09, 0x07, 0x07, 0x07, 0x07, 0x06, 0x06, 0x05, 
	0x05, 0x05, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 
	0x0e, 0x0e, 0x08, 0x05, 0x05, 0x05, 0x05, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x19, 0x18, 0x16, 
	0x07, 0x07, 0x07, 0x07, 0x06, 0x05, 0x05, 0x05, 
	0x05, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x0e, 
	0x0e, 0x0e, 0x08, 0x05, 0x05, 0x05, 0x05, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x16, 
	0x07, 0x06, 0x05, 0x06, 0x06, 0x05, 0x08, 0x08, 
	0x08, 0x08, 0x0e, 0x0e, 0x0e, 0x08, 0x08, 0x0e, 
	0x0e, 0x0e, 0x08, 0x08, 0x05, 0x05, 0x05, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x16, 
	0x05, 0x05, 0x05, 0x05, 0x05, 0x08, 0x08, 0x0e, 
	0x0e, 0x0e, 0x0e, 0x0e, 0x0e, 0x0e, 0x0e, 0x15, 
	0x0e, 0x0e, 0x08, 0x08, 0x05, 0x05, 0x06, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x16, 
	0x05, 0x08, 0x08, 0x05, 0x05, 0x08, 0x08, 0x0e, 
	0x0e, 0x0e, 0x0e, 0x0e, 0x0e, 0x0e, 0x15, 0x15, 
	0x15, 0x0e, 0x0e, 0x08, 0x05, 0x05, 0x06, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x16, 
	0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x0e, 
	0x0e, 0x15, 0x0e, 0x0e, 0x0e, 0x0e, 0x15, 0x15, 
	0x15, 0x0e, 0x0e, 0x08, 0x05, 0x06, 0x02, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x16, 
	0x08, 0x0e, 0x0e, 0x08, 0x08, 0x08, 0x08, 0x0e, 
	0x0e, 0x15, 0x0e, 0x0e, 0x0e, 0x0e, 0x0e, 0x15, 
	0x15, 0x15, 0x0e, 0x0e, 0x05, 0x06, 0x03, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x16, 
	0x0e, 0x0e, 0x0e, 0x08, 0x08, 0x08, 0x08, 0x0e, 
	0x0e, 0x15, 0x0e, 0x0e, 0x0e, 0x0e, 0x08, 0x0e, 
	0x15, 0x15, 0x0e, 0x15, 0x05, 0x02, 0x02, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x19, 0x16, 
	0x0e, 0x0e, 0x0e, 0x08, 0x08, 0x05, 0x08, 0x08, 
	0x0e, 0x15, 0x0e, 0x08, 0x08, 0x08, 0x05, 0x08, 
	0x0e, 0x15, 0x15, 0x15, 0x05, 0x02, 0x02, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x19, 0x16, 
	0x0e, 0x1b, 0x0e, 0x08, 0x05, 0x05, 0x05, 0x08, 
	0x1b, 0x0e, 0x0e, 0x08, 0x05, 0x05, 0x06, 0x08, 
	0x0e, 0x15, 0x15, 0x15, 0x01, 0x01, 0x02, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x1c, 0x16, 
	0x1b, 0x1b, 0x1d, 0x05, 0x05, 0x06, 0x06, 0x01, 
	0x1d, 0x1b, 0x08, 0x05, 0x05, 0x06, 0x03, 0x01, 
	0x15, 0x15, 0x15, 0x15, 0x01, 0x01, 0x01, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x1a, 0x16, 
	0x1b, 0x1b, 0x1d, 0x05, 0x06, 0x07, 0x02, 0x01, 
	0x1d, 0x1b, 0x08, 0x05, 0x06, 0x02, 0x03, 0x1d, 
	0x15, 0x15, 0x15, 0x0e, 0x01, 0x01, 0x01, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x16, 
	0x1b, 0x1d, 0x01, 0x02, 0x06, 0x03, 0x02, 0x01, 
	0x1d, 0x1b, 0x01, 0x05, 0x02, 0x02, 0x02, 0x1b, 
	0x1e, 0x15, 0x0e, 0x1d, 0x01, 0x01, 0x1d, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x16, 0x1f, 
	0x1b, 0x1d, 0x01, 0x02, 0x06, 0x02, 0x01, 0x1d, 
	0x1d, 0x1b, 0x01, 0x01, 0x02, 0x01, 0x01, 0x1b, 
	0x1e, 0x15, 0x1b, 0x1b, 0x1d, 0x1d, 0x1b, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x16, 0x17, 0x17, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	
};

Gfx swoop_wing2_ci8_pal_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 swoop_wing2_ci8_pal_rgba16[] = {
	0xff, 0xfe, 0x73, 0x9c, 0x6b, 0x5a, 0x63, 0x18, 
	0x5a, 0xd6, 0x73, 0x9d, 0x6b, 0x5b, 0x63, 0x19, 
	0x7b, 0xdf, 0x5a, 0xd7, 0x52, 0x95, 0xa5, 0x29, 
	0xde, 0xf7, 0x9c, 0xe7, 0x84, 0x21, 0xce, 0x73, 
	0xc6, 0x31, 0x4a, 0x53, 0xad, 0x6b, 0xbd, 0xef, 
	0x94, 0xa5, 0x8c, 0x63, 0x1b, 0x65, 0x1b, 0x64, 
	0x1c, 0xf7, 0x24, 0xb5, 0x24, 0xb3, 0x84, 0x20, 
	0x2c, 0xb3, 0x7b, 0xde, 0x8c, 0x62, 0x1c, 0xf6, 
	
};

Vtx swoop_000_offset_002_mesh_layer_1_vtx_0[62] = {
	{{{15, -11, 32},0, {853, 1005},{0x0, 0x5A, 0x5A, 0xFF}}},
	{{{68, -14, 27},0, {749, -4},{0x46, 0x4B, 0x4C, 0xFF}}},
	{{{68, -1, -3},0, {183, -4},{0x46, 0x6A, 0x0, 0xFF}}},
	{{{15, 3, -3},0, {183, 1005},{0xFB, 0x7F, 0x0, 0xFF}}},
	{{{68, -14, -33},0, {756, -4},{0x46, 0x4B, 0xB4, 0xFF}}},
	{{{15, -11, -38},0, {865, 1005},{0x0, 0x5A, 0xA6, 0xFF}}},
	{{{75, -25, -1},0, {890, 161},{0x67, 0x45, 0xE3, 0xFF}}},
	{{{101, -52, 27},0, {890, 161},{0x75, 0xE4, 0x2A, 0xFF}}},
	{{{75, -59, -1},0, {890, 161},{0x53, 0xB5, 0xC3, 0xFF}}},
	{{{64, -25, 31},0, {890, 161},{0x3C, 0x45, 0x58, 0xFF}}},
	{{{64, -59, 31},0, {890, 161},{0x19, 0xB5, 0x64, 0xFF}}},
	{{{63, -25, -37},0, {890, 161},{0x36, 0x45, 0xA4, 0xFF}}},
	{{{100, -52, -35},0, {890, 161},{0x72, 0xE4, 0xCF, 0xFF}}},
	{{{63, -59, -37},0, {890, 161},{0x13, 0xB5, 0x9B, 0xFF}}},
	{{{76, -25, -6},0, {890, 161},{0x68, 0x45, 0x17, 0xFF}}},
	{{{76, -59, -6},0, {890, 161},{0x57, 0xB5, 0x37, 0xFF}}},
	{{{68, -43, 39},0, {823, 171},{0x48, 0x2, 0x69, 0xFF}}},
	{{{68, -14, 27},0, {823, 171},{0x46, 0x4B, 0x4C, 0xFF}}},
	{{{15, -11, 32},0, {823, 171},{0x0, 0x5A, 0x5A, 0xFF}}},
	{{{83, -43, -3},0, {823, 171},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{68, -73, 27},0, {823, 171},{0x4F, 0xC1, 0x4D, 0xFF}}},
	{{{-70, -114, 39},0, {823, 171},{0x25, 0xB6, 0x60, 0xFF}}},
	{{{-70, -72, 57},0, {823, 171},{0x1, 0x3, 0x7F, 0xFF}}},
	{{{-70, -30, 39},0, {823, 171},{0xE2, 0x56, 0x59, 0xFF}}},
	{{{-70, -12, -3},0, {823, 171},{0xD5, 0x78, 0x0, 0xFF}}},
	{{{15, 3, -3},0, {823, 171},{0xFB, 0x7F, 0x0, 0xFF}}},
	{{{-70, -30, -45},0, {823, 171},{0xE2, 0x56, 0xA7, 0xFF}}},
	{{{15, -11, -38},0, {823, 171},{0x0, 0x5A, 0xA6, 0xFF}}},
	{{{68, -14, -33},0, {823, 171},{0x46, 0x4B, 0xB4, 0xFF}}},
	{{{68, -43, -45},0, {823, 171},{0x48, 0x2, 0x97, 0xFF}}},
	{{{68, -1, -3},0, {823, 171},{0x46, 0x6A, 0x0, 0xFF}}},
	{{{68, -73, -33},0, {823, 171},{0x4F, 0xC1, 0xB3, 0xFF}}},
	{{{-70, -114, -45},0, {823, 171},{0x25, 0xB6, 0xA0, 0xFF}}},
	{{{68, -43, -45},0, {823, 171},{0x48, 0x2, 0x97, 0xFF}}},
	{{{68, -73, -33},0, {823, 171},{0x4F, 0xC1, 0xB3, 0xFF}}},
	{{{68, -85, -3},0, {823, 171},{0x58, 0xA4, 0x0, 0xFF}}},
	{{{83, -43, -3},0, {823, 171},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{68, -73, 27},0, {823, 171},{0x4F, 0xC1, 0x4D, 0xFF}}},
	{{{-70, -114, 39},0, {823, 171},{0x25, 0xB6, 0x60, 0xFF}}},
	{{{-93, -158, -3},0, {823, 171},{0xF6, 0x81, 0x0, 0xFF}}},
	{{{-107, -137, 38},0, {823, 171},{0xE0, 0x9F, 0x4C, 0xFF}}},
	{{{-70, -72, 57},0, {823, 171},{0x1, 0x3, 0x7F, 0xFF}}},
	{{{-120, -107, 55},0, {823, 171},{0xBF, 0xE0, 0x69, 0xFF}}},
	{{{-70, -30, 39},0, {823, 171},{0xE2, 0x56, 0x59, 0xFF}}},
	{{{-131, -68, 38},0, {823, 171},{0xA0, 0x2B, 0x47, 0xFF}}},
	{{{-70, -12, -3},0, {823, 171},{0xD5, 0x78, 0x0, 0xFF}}},
	{{{-136, -51, -3},0, {823, 171},{0x95, 0x45, 0x0, 0xFF}}},
	{{{-70, -30, -45},0, {823, 171},{0xE2, 0x56, 0xA7, 0xFF}}},
	{{{-136, -51, -3},0, {823, 171},{0x95, 0x45, 0x0, 0xFF}}},
	{{{-70, -30, -45},0, {823, 171},{0xE2, 0x56, 0xA7, 0xFF}}},
	{{{-131, -68, -44},0, {823, 171},{0xA0, 0x2B, 0xB9, 0xFF}}},
	{{{-70, -72, -63},0, {823, 171},{0x1, 0x3, 0x81, 0xFF}}},
	{{{68, -43, -45},0, {823, 171},{0x48, 0x2, 0x97, 0xFF}}},
	{{{-70, -114, -45},0, {823, 171},{0x25, 0xB6, 0xA0, 0xFF}}},
	{{{-120, -107, -61},0, {823, 171},{0xBF, 0xE0, 0x97, 0xFF}}},
	{{{-107, -137, -44},0, {823, 171},{0xE0, 0x9F, 0xB4, 0xFF}}},
	{{{-93, -158, -3},0, {823, 171},{0xF6, 0x81, 0x0, 0xFF}}},
	{{{68, -85, -3},0, {823, 171},{0x58, 0xA4, 0x0, 0xFF}}},
	{{{-134, -111, -3},0, {823, 171},{0x89, 0xD3, 0x0, 0xFF}}},
	{{{-107, -137, 38},0, {823, 171},{0xE0, 0x9F, 0x4C, 0xFF}}},
	{{{-120, -107, 55},0, {823, 171},{0xBF, 0xE0, 0x69, 0xFF}}},
	{{{-131, -68, 38},0, {823, 171},{0xA0, 0x2B, 0x47, 0xFF}}},
};

Gfx swoop_000_offset_002_mesh_layer_1_tri_0[] = {
	gsSPVertex(swoop_000_offset_002_mesh_layer_1_vtx_0 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(3, 2, 4, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(6, 7, 8, 0),
	gsSP1Triangle(9, 7, 6, 0),
	gsSP1Triangle(10, 7, 9, 0),
	gsSP1Triangle(8, 7, 10, 0),
	gsSP1Triangle(11, 12, 13, 0),
	gsSP1Triangle(14, 12, 11, 0),
	gsSP1Triangle(15, 12, 14, 0),
	gsSP1Triangle(13, 12, 15, 0),
	gsSPVertex(swoop_000_offset_002_mesh_layer_1_vtx_0 + 16, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(1, 0, 3, 0),
	gsSP1Triangle(0, 4, 3, 0),
	gsSP1Triangle(0, 5, 4, 0),
	gsSP1Triangle(0, 6, 5, 0),
	gsSP1Triangle(7, 6, 0, 0),
	gsSP1Triangle(0, 2, 7, 0),
	gsSP1Triangle(2, 8, 7, 0),
	gsSP1Triangle(2, 9, 8, 0),
	gsSP1Triangle(9, 10, 8, 0),
	gsSP1Triangle(9, 11, 10, 0),
	gsSP1Triangle(10, 11, 12, 0),
	gsSP1Triangle(10, 12, 13, 0),
	gsSP1Triangle(13, 12, 3, 0),
	gsSP1Triangle(12, 14, 3, 0),
	gsSP1Triangle(14, 1, 3, 0),
	gsSP1Triangle(15, 13, 3, 0),
	gsSPVertex(swoop_000_offset_002_mesh_layer_1_vtx_0 + 32, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 0, 2, 0),
	gsSP1Triangle(3, 2, 4, 0),
	gsSP1Triangle(5, 3, 4, 0),
	gsSP1Triangle(6, 3, 5, 0),
	gsSP1Triangle(6, 7, 3, 0),
	gsSP1Triangle(7, 6, 8, 0),
	gsSP1Triangle(8, 6, 9, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(10, 9, 11, 0),
	gsSP1Triangle(10, 11, 12, 0),
	gsSP1Triangle(12, 11, 13, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(14, 13, 15, 0),
	gsSPVertex(swoop_000_offset_002_mesh_layer_1_vtx_0 + 48, 14, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(2, 1, 3, 0),
	gsSP1Triangle(4, 3, 1, 0),
	gsSP1Triangle(5, 3, 4, 0),
	gsSP1Triangle(6, 3, 5, 0),
	gsSP1Triangle(6, 5, 7, 0),
	gsSP1Triangle(7, 5, 8, 0),
	gsSP1Triangle(9, 8, 5, 0),
	gsSP1Triangle(7, 8, 10, 0),
	gsSP1Triangle(8, 11, 10, 0),
	gsSP1Triangle(11, 12, 10, 0),
	gsSP1Triangle(12, 13, 10, 0),
	gsSP1Triangle(13, 0, 10, 0),
	gsSP1Triangle(0, 2, 10, 0),
	gsSP1Triangle(2, 6, 10, 0),
	gsSP1Triangle(2, 3, 6, 0),
	gsSP1Triangle(6, 7, 10, 0),
	gsSPEndDisplayList(),
};

Vtx swoop_000_offset_003_mesh_layer_4_vtx_0[4] = {
	{{{0, 1, 133},0, {-16, -16},{0x0, 0x81, 0x0, 0xFF}}},
	{{{265, 1, -133},0, {974, 974},{0x0, 0x81, 0x0, 0xFF}}},
	{{{265, 1, 133},0, {974, -16},{0x0, 0x81, 0x0, 0xFF}}},
	{{{0, 1, -133},0, {-16, 974},{0x0, 0x81, 0x0, 0xFF}}},
};

Gfx swoop_000_offset_003_mesh_layer_4_tri_0[] = {
	gsSPVertex(swoop_000_offset_003_mesh_layer_4_vtx_0 + 0, 4, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSPEndDisplayList(),
};

Vtx swoop_000_offset_004_mesh_layer_4_vtx_0[4] = {
	{{{265, 1, -132},0, {974, -16},{0x0, 0x81, 0x0, 0xFF}}},
	{{{0, 1, 134},0, {-16, 974},{0x0, 0x81, 0x0, 0xFF}}},
	{{{0, 1, -132},0, {-16, -16},{0x0, 0x81, 0x0, 0xFF}}},
	{{{265, 1, 134},0, {974, 974},{0x0, 0x81, 0x0, 0xFF}}},
};

Gfx swoop_000_offset_004_mesh_layer_4_tri_0[] = {
	gsSPVertex(swoop_000_offset_004_mesh_layer_4_vtx_0 + 0, 4, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSPEndDisplayList(),
};


Gfx mat_swoop_eye_f3d[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureLUT(G_TT_RGBA16),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, swoop_eye_ci8_pal_rgba16),
	gsDPTileSync(),
	gsDPSetTile(0, 0, 0, 256, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadSync(),
	gsDPLoadTLUTCmd(7, 36),
	gsDPPipeSync(),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_8b_LOAD_BLOCK, 1, swoop_eye_ci8),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 511, 512),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b, 4, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPSetLights1(swoop_eye_f3d_lights),
	gsSPEndDisplayList(),
};

Gfx mat_revert_swoop_eye_f3d[] = {
	gsDPPipeSync(),
	gsDPSetTextureLUT(G_TT_NONE),
	gsSPEndDisplayList(),
};

Gfx mat_swoop_wing_f3d[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, TEXEL0, TEXEL0, 0, ENVIRONMENT, 0, 0, 0, 0, TEXEL0, TEXEL0, 0, ENVIRONMENT, 0),
	gsSPClearGeometryMode(G_CULL_BACK),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureLUT(G_TT_RGBA16),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, swoop_wing2_ci8_pal_rgba16),
	gsDPTileSync(),
	gsDPSetTile(0, 0, 0, 256, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadSync(),
	gsDPLoadTLUTCmd(7, 31),
	gsDPPipeSync(),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_8b_LOAD_BLOCK, 1, swoop_wing2_ci8),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 511, 512),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b, 4, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPEndDisplayList(),
};

Gfx mat_revert_swoop_wing_f3d[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_CULL_BACK),
	gsDPSetTextureLUT(G_TT_NONE),
	gsSPEndDisplayList(),
};

Gfx swoop_000_offset_002_mesh_layer_1[] = {
	gsSPDisplayList(mat_swoop_eye_f3d),
	gsSPDisplayList(swoop_000_offset_002_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_swoop_eye_f3d),
	gsSPEndDisplayList(),
};

Gfx swoop_000_offset_003_mesh_layer_4[] = {
	gsSPDisplayList(mat_swoop_wing_f3d),
	gsSPDisplayList(swoop_000_offset_003_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_swoop_wing_f3d),
	gsSPEndDisplayList(),
};

Gfx swoop_000_offset_004_mesh_layer_4[] = {
	gsSPDisplayList(mat_swoop_wing_f3d),
	gsSPDisplayList(swoop_000_offset_004_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_swoop_wing_f3d),
	gsSPEndDisplayList(),
};

Gfx swoop_material_revert_render_settings[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};


/*
 * Samsung Exynos5 SoC series Sensor driver
 *
 *
 * Copyright (c) 2011 Samsung Electronics Co., Ltd
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef IS_CIS_6B2_SET_A_H
#define IS_CIS_6B2_SET_A_H

#include "is-cis.h"
#include "is-cis-6b2.h"

/* 16x10 margin, EXTCLK 26Mhz */
const u32 sensor_6b2_setfile_A_1936x1090_30fps[] = {
	/* Global Setting Apply to Global setting */
	0x31D3, 0x01, 0x1,
	0x3426, 0x3A, 0x1,
	0x340D, 0x30, 0x1,
	0x3067, 0x25, 0x1,
	0x307D, 0x08, 0x1,
	0x307E, 0x08, 0x1,
	0x307F, 0x08, 0x1,
	0x3080, 0x04, 0x1,
	0x3073, 0x73, 0x1,
	0x3074, 0x45, 0x1,
	0x3075, 0xD4, 0x1,
	0x3085, 0xF0, 0x1,
	0x3068, 0x55, 0x1,
	0x3010, 0x04, 0x1,
	0x3069, 0x00, 0x1,
	0x3063, 0x08, 0x1,
	0x3064, 0x00, 0x1,
	0x3247, 0x11, 0x1,
	0x3083, 0x00, 0x1,
	0x3084, 0x10, 0x1,
	0x7339,	0x03, 0x1,

	/* Clock Setting */
	0x6030, 0x1A, 0x1,
	0x6031, 0x00, 0x1,
	0x0301, 0x0A, 0x1,
	0x0303, 0x01, 0x1,
	0x0305, 0x08, 0x1,
	0x0306, 0x00, 0x1,
	0x0307, 0xE1, 0x1,
	0x0309, 0x0A, 0x1,
	0x030B, 0x01, 0x1,

	/* Size Setting */
	0x0340, 0x04, 0x1,
	0x0341, 0x66, 0x1,
	0x0342, 0x08, 0x1,
	0x0343, 0x68, 0x1,
	0x0344, 0x00, 0x1,
	0x0345, 0x00, 0x1,
	0x0346, 0x00, 0x1,
	0x0347, 0x02, 0x1,
	0x0348, 0x07, 0x1,
	0x0349, 0x8F, 0x1,
	0x034A, 0x04, 0x1,
	0x034B, 0x43, 0x1,
	0x034C, 0x07, 0x1,
	0x034D, 0x90, 0x1,
	0x034E, 0x04, 0x1,
	0x034F, 0x42, 0x1,

	/* Integration time */
	0x0200, 0x03, 0x1,
	0x0201, 0x16, 0x1,
	0x0202, 0x02, 0x1,
	0x0203, 0x2E, 0x1,

	/* Analog Gain */
	0x0204, 0x00, 0x1,
	0x0205, 0x20, 0x1,

	/* Bit Rate */
	0x3351, 0x02, 0x1,
	0x3352, 0xDC, 0x1,
	0x3353, 0x00, 0x1,
	0x3354, 0x00, 0x1,

	/* Etc */
	0x3190, 0x00, 0x1,
	0x3425, 0x00, 0x1,
	0x3412, 0x65, 0x1,
	0x3413, 0xAA, 0x1,
	0x7347, 0x01, 0x1,
	0x7336, 0x32, 0x1,
	0x7337, 0xC8, 0x1,

	/* Fast mode */
	0x340B, 0x03, 0x1,
	0x3400, 0x07, 0x1,
};

/* 16x10 margin, EXTCLK 26Mhz */
const u32 sensor_6b2_setfile_A_968x548_15fps[] = {
	/* Global Setting Apply to Global setting */
	0x31D3, 0x01, 0x1,
	0x3426, 0x3A, 0x1,
	0x340D, 0x30, 0x1,
	0x3067, 0x25, 0x1,
	0x307D, 0x08, 0x1,
	0x307E, 0x08, 0x1,
	0x307F, 0x08, 0x1,
	0x3080, 0x04, 0x1,
	0x3073, 0x73, 0x1,
	0x3074, 0x45, 0x1,
	0x3075, 0xD4, 0x1,
	0x3085, 0xF0, 0x1,
	0x3068, 0x55, 0x1,
	0x3010, 0x04, 0x1,
	0x3069, 0x00, 0x1,
	0x3063, 0x08, 0x1,
	0x3064, 0x00, 0x1,
	0x3247, 0x11, 0x1,
	0x3083, 0x00, 0x1,
	0x3084, 0x10, 0x1,
	0x7339,	0x03, 0x1,

	/* Clock Setting */
	0x6030,	0x1A, 0x1,
	0x6031, 0x00, 0x1,
	0x0301, 0x0A, 0x1,
	0x0303, 0x01, 0x1,
	0x0305, 0x08, 0x1,
	0x0306,	0x00, 0x1,
	0x0307, 0x9A, 0x1,
	0x0309, 0x0A, 0x1,
	0x030B, 0x01, 0x1,

	/* Size Setting */
	0x0340, 0x06, 0x1,
	0x0341, 0x0F, 0x1,
	0x0342, 0x08, 0x1,
	0x0343, 0x68, 0x1,
	0x0344, 0x00, 0x1,
	0x0345, 0x00, 0x1,
	0x0346, 0x00, 0x1,
	0x0347, 0x00, 0x1,
	0x0348, 0x07, 0x1,
	0x0349, 0x8F, 0x1,
	0x034A, 0x04, 0x1,
	0x034B, 0x47, 0x1,
	0x034C, 0x03, 0x1,
	0x034D, 0xC8, 0x1,
	0x034E, 0x02, 0x1,
	0x034F, 0x24, 0x1,

	/* Integration time */
	0x0200, 0x03, 0x1,
	0x0201, 0x16, 0x1,
	0x0202, 0x02, 0x1,
	0x0203, 0x2E, 0x1,

	/* Analog Gain */
	0x0204, 0x00, 0x1,
	0x0205, 0x20, 0x1,

	/* Bit Rate */
	0x3351, 0x01, 0x1,
	0x3352, 0xF5, 0x1,
	0x3353, 0x00, 0x1,
	0x3354, 0x00, 0x1,

	/* Etc */
	0x3190, 0x01, 0x1,
	0x3425, 0x00, 0x1,
	0x306C, 0x28, 0x1,
	0x3412, 0x65, 0x1,
	0x3413, 0xAA, 0x1,
	0x7347, 0x01, 0x1,
	0x7336, 0x32, 0x1,
	0x7337, 0xC8, 0x1,

	/* Fast mode */
	0x340B, 0x03, 0x1,
	0x3400, 0x07, 0x1,
};

/* 16x10 margin, EXTCLK 26Mhz */
const u32 sensor_6b2_setfile_A_1936x1090_24fps[] = {
	/* Global Setting Apply to Global setting */
	0x31D3, 0x01, 0x1,
	0x3426, 0x3A, 0x1,
	0x340D, 0x30, 0x1,
	0x3067, 0x25, 0x1,
	0x307D, 0x08, 0x1,
	0x307E, 0x08, 0x1,
	0x307F, 0x08, 0x1,
	0x3080, 0x04, 0x1,
	0x3073, 0x73, 0x1,
	0x3074, 0x45, 0x1,
	0x3075, 0xD4, 0x1,
	0x3085, 0xF0, 0x1,
	0x3068, 0x55, 0x1,
	0x3010, 0x04, 0x1,
	0x3069, 0x00, 0x1,
	0x3063, 0x08, 0x1,
	0x3064, 0x00, 0x1,
	0x3247, 0x11, 0x1,
	0x3083, 0x00, 0x1,
	0x3084, 0x10, 0x1,
	0x7339,	0x03, 0x1,

	/* Clock Setting */
	0x6030, 0x1A, 0x1,
	0x6031, 0x00, 0x1,
	0x0301, 0x0A, 0x1,
	0x0303, 0x01, 0x1,
	0x0305, 0x08, 0x1,
	0x0306, 0x00, 0x1,
	0x0307, 0xE1, 0x1,
	0x0309, 0x0A, 0x1,
	0x030B, 0x01, 0x1,

	/* Size Setting */
	0x0340, 0x05, 0x1,
	0x0341, 0x88, 0x1,
	0x0342, 0x08, 0x1,
	0x0343, 0x68, 0x1,
	0x0344, 0x00, 0x1,
	0x0345, 0x00, 0x1,
	0x0346, 0x00, 0x1,
	0x0347, 0x02, 0x1,
	0x0348, 0x07, 0x1,
	0x0349, 0x8F, 0x1,
	0x034A, 0x04, 0x1,
	0x034B, 0x43, 0x1,
	0x034C, 0x07, 0x1,
	0x034D, 0x90, 0x1,
	0x034E, 0x04, 0x1,
	0x034F, 0x42, 0x1,

	/* Integration time */
	0x0200, 0x03, 0x1,
	0x0201, 0x16, 0x1,
	0x0202, 0x02, 0x1,
	0x0203, 0x2E, 0x1,

	/* Analog Gain */
	0x0204, 0x00, 0x1,
	0x0205, 0x20, 0x1,

	/* Bit Rate */
	0x3351, 0x02, 0x1,
	0x3352, 0xDC, 0x1,
	0x3353, 0x00, 0x1,
	0x3354, 0x00, 0x1,

	/* Etc */
	0x3190, 0x00, 0x1,
	0x3425, 0x00, 0x1,
	0x306C, 0x08, 0x1,
	0x3412, 0x65, 0x1,
	0x3413, 0xAA, 0x1,
	0x7347, 0x01, 0x1,
	0x7336, 0x32, 0x1,
	0x7337, 0xC8, 0x1,

	/* Fast mode */
	0x340B, 0x03, 0x1,
	0x3400, 0x07, 0x1,
};

const struct sensor_pll_info sensor_6b2_pllinfo_A_1936x1090_30fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	0x0A, /* vt_pix_clk_div  (0x0301) */
	0x01, /* vt_sys_clk_div  (0x3C1C[7:4]) */
	0x08, /* pre_pll_clk_div (0x0305) */
	0xE1, /* pll_multiplier        (0x0307) */
	0x0A, /* op_pix_clk_div        (0x0309) */
	0x01, /* op_sys_clk_div  (0x030B) */

	0x00, /* secnd_pre_pll_clk_div	(0x030D) */
	0x00, /* secnd_pll_multiplier	(0x030F) */
	0x0466, /* frame_length_lines    (0x0341) */
	0x0868, /* line_length_pck       (0x0343) */
};

const struct sensor_pll_info sensor_6b2_pllinfo_A_968x548_15fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	0x0A, /* vt_pix_clk_div  (0x0301) */
	0x01, /* vt_sys_clk_div  (0x3C1C[7:4]) */
	0x08, /* pre_pll_clk_div (0x0305) */
	0x9A, /* pll_multiplier        (0x0307) */
	0x0A, /* op_pix_clk_div        (0x0309) */
	0x01, /* op_sys_clk_div  (0x030B) */

	0x00, /* secnd_pre_pll_clk_div	(0x030D) */
	0x00, /* secnd_pll_multiplier	(0x030F) */
	0x060F, /* frame_length_lines    (0x0341) */
	0x0868, /* line_length_pck       (0x0343) */
};

const struct sensor_pll_info sensor_6b2_pllinfo_A_1936x1090_24fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	0x0A, /* vt_pix_clk_div  (0x0301) */
	0x01, /* vt_sys_clk_div  (0x3C1C[7:4]) */
	0x08, /* pre_pll_clk_div (0x0305) */
	0xE1, /* pll_multiplier        (0x0307) */
	0x0A, /* op_pix_clk_div        (0x0309) */
	0x01, /* op_sys_clk_div  (0x030B) */

	0x00, /* secnd_pre_pll_clk_div	(0x030D) */
	0x00, /* secnd_pll_multiplier	(0x030F) */
	0x0588, /* frame_length_lines    (0x0341) */
	0x0868, /* line_length_pck       (0x0343) */
};

static const u32 *sensor_6b2_setfiles_A[] = {
	/* 16x10 margin */
	sensor_6b2_setfile_A_1936x1090_30fps,
	sensor_6b2_setfile_A_968x548_15fps,
	sensor_6b2_setfile_A_1936x1090_24fps,
};

static const u32 sensor_6b2_setfile_A_sizes[] = {
	/* 16x10 margin */
	sizeof(sensor_6b2_setfile_A_1936x1090_30fps) / sizeof(sensor_6b2_setfile_A_1936x1090_30fps[0]),
	sizeof(sensor_6b2_setfile_A_968x548_15fps) / sizeof(sensor_6b2_setfile_A_968x548_15fps[0]),
	sizeof(sensor_6b2_setfile_A_1936x1090_24fps) / sizeof(sensor_6b2_setfile_A_1936x1090_24fps[0]),
};

static const struct sensor_pll_info *sensor_6b2_pllinfos_A[] = {
	/* 16x10 margin */
	&sensor_6b2_pllinfo_A_1936x1090_30fps,
	&sensor_6b2_pllinfo_A_968x548_15fps,
	&sensor_6b2_pllinfo_A_1936x1090_24fps,
};

#endif


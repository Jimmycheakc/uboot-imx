/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright 2019 NXP
 */

#ifndef __DT_BINDINGS_CLOCK_IMX8MP_H
#define __DT_BINDINGS_CLOCK_IMX8MP_H

#define IMX8MP_CLK_DUMMY			0
#define IMX8MP_CLK_32K				1
#define IMX8MP_CLK_24M				2
#define IMX8MP_OSC_HDMI_CLK			3
#define IMX8MP_CLK_EXT1				4
#define IMX8MP_CLK_EXT2				5
#define IMX8MP_CLK_EXT3				6
#define IMX8MP_CLK_EXT4				7
#define IMX8MP_AUDIO_PLL1_REF_SEL		8
#define IMX8MP_AUDIO_PLL2_REF_SEL		9
#define IMX8MP_VIDEO_PLL1_REF_SEL		10
#define IMX8MP_DRAM_PLL_REF_SEL			11
#define IMX8MP_GPU_PLL_REF_SEL			12
#define IMX8MP_VPU_PLL_REF_SEL			13
#define IMX8MP_ARM_PLL_REF_SEL			14
#define IMX8MP_SYS_PLL1_REF_SEL			15
#define IMX8MP_SYS_PLL2_REF_SEL			16
#define IMX8MP_SYS_PLL3_REF_SEL			17
#define IMX8MP_AUDIO_PLL1			18
#define IMX8MP_AUDIO_PLL2			19
#define IMX8MP_VIDEO_PLL1			20
#define IMX8MP_DRAM_PLL				21
#define IMX8MP_GPU_PLL				22
#define IMX8MP_VPU_PLL				23
#define IMX8MP_ARM_PLL				24
#define IMX8MP_SYS_PLL1				25
#define IMX8MP_SYS_PLL2				26
#define IMX8MP_SYS_PLL3				27
#define IMX8MP_AUDIO_PLL1_BYPASS		28
#define IMX8MP_AUDIO_PLL2_BYPASS		29
#define IMX8MP_VIDEO_PLL1_BYPASS		30
#define IMX8MP_DRAM_PLL_BYPASS			31
#define IMX8MP_GPU_PLL_BYPASS			32
#define IMX8MP_VPU_PLL_BYPASS			33
#define IMX8MP_ARM_PLL_BYPASS			34
#define IMX8MP_SYS_PLL1_BYPASS			35
#define IMX8MP_SYS_PLL2_BYPASS			36
#define IMX8MP_SYS_PLL3_BYPASS			37
#define IMX8MP_AUDIO_PLL1_OUT			38
#define IMX8MP_AUDIO_PLL2_OUT			39
#define IMX8MP_VIDEO_PLL1_OUT			40
#define IMX8MP_DRAM_PLL_OUT			41
#define IMX8MP_GPU_PLL_OUT			42
#define IMX8MP_VPU_PLL_OUT			43
#define IMX8MP_ARM_PLL_OUT			44
#define IMX8MP_SYS_PLL1_OUT			45
#define IMX8MP_SYS_PLL2_OUT			46
#define IMX8MP_SYS_PLL3_OUT			47
#define IMX8MP_SYS_PLL1_40M			48
#define IMX8MP_SYS_PLL1_80M			49
#define IMX8MP_SYS_PLL1_100M			50
#define IMX8MP_SYS_PLL1_133M			51
#define IMX8MP_SYS_PLL1_160M			52
#define IMX8MP_SYS_PLL1_200M			53
#define IMX8MP_SYS_PLL1_266M			54
#define IMX8MP_SYS_PLL1_400M			55
#define IMX8MP_SYS_PLL1_800M			56
#define IMX8MP_SYS_PLL2_50M			57
#define IMX8MP_SYS_PLL2_100M			58
#define IMX8MP_SYS_PLL2_125M			59
#define IMX8MP_SYS_PLL2_166M			60
#define IMX8MP_SYS_PLL2_200M			61
#define IMX8MP_SYS_PLL2_250M			62
#define IMX8MP_SYS_PLL2_333M			63
#define IMX8MP_SYS_PLL2_500M			64
#define IMX8MP_SYS_PLL2_1000M			65
#define IMX8MP_CLK_A53_SRC			66
#define IMX8MP_CLK_M7_SRC			67
#define IMX8MP_CLK_ML_SRC			68
#define IMX8MP_CLK_GPU3D_CORE_SRC		69
#define IMX8MP_CLK_GPU3D_SHADER_SRC		70
#define IMX8MP_CLK_GPU2D_SRC			71
#define IMX8MP_CLK_AUDIO_AXI_SRC		72
#define IMX8MP_CLK_HSIO_AXI_SRC			73
#define IMX8MP_CLK_MEDIA_ISP_SRC		74
#define IMX8MP_CLK_A53_CG			75
#define IMX8MP_CLK_M4_CG			76
#define IMX8MP_CLK_ML_CG			77
#define IMX8MP_CLK_GPU3D_CORE_CG		78
#define IMX8MP_CLK_GPU3D_SHADER_CG		79
#define IMX8MP_CLK_GPU2D_CG			80
#define IMX8MP_CLK_AUDIO_AXI_CG			81
#define IMX8MP_CLK_HSIO_AXI_CG			82
#define IMX8MP_CLK_MEDIA_ISP_CG			83
#define IMX8MP_CLK_A53_DIV			84
#define IMX8MP_CLK_M7_DIV			85
#define IMX8MP_CLK_ML_DIV			86
#define IMX8MP_CLK_GPU3D_CORE_DIV		87
#define IMX8MP_CLK_GPU3D_SHADER_DIV		88
#define IMX8MP_CLK_GPU2D_DIV			89
#define IMX8MP_CLK_AUDIO_AXI_DIV		90
#define IMX8MP_CLK_HSIO_AXI_DIV			91
#define IMX8MP_CLK_MEDIA_ISP_DIV		92
#define IMX8MP_CLK_MAIN_AXI			93
#define IMX8MP_CLK_ENET_AXI			94
#define IMX8MP_CLK_NAND_USDHC_BUS		95
#define IMX8MP_CLK_VPU_BUS			96
#define IMX8MP_CLK_MEDIA_AXI			97
#define IMX8MP_CLK_MEDIA_APB			98
#define IMX8MP_CLK_HDMI_APB			99
#define IMX8MP_CLK_HDMI_AXI			100
#define IMX8MP_CLK_GPU_AXI			101
#define IMX8MP_CLK_GPU_AHB			102
#define IMX8MP_CLK_NOC				103
#define IMX8MP_CLK_NOC_IO			104
#define IMX8MP_CLK_ML_AXI			105
#define IMX8MP_CLK_ML_AHB			106
#define IMX8MP_CLK_AHB				107
#define IMX8MP_CLK_AUDIO_AHB			108
#define IMX8MP_CLK_MIPI_DSI_ESC_RX		109
#define IMX8MP_CLK_IPG_ROOT			110
#define IMX8MP_CLK_IPG_AUDIO_ROOT		111
#define IMX8MP_CLK_DRAM_ALT			112
#define IMX8MP_CLK_DRAM_APB			113
#define IMX8MP_CLK_VPU_G1			114
#define IMX8MP_CLK_VPU_G2			115
#define IMX8MP_CLK_CAN1				116
#define IMX8MP_CLK_CAN2				117
#define IMX8MP_CLK_MEMREPAIR			118
#define IMX8MP_CLK_PCIE_PHY			119
#define IMX8MP_CLK_PCIE_AUX			120
#define IMX8MP_CLK_I2C5				121
#define IMX8MP_CLK_I2C6				122
#define IMX8MP_CLK_SAI1				123
#define IMX8MP_CLK_SAI2				124
#define IMX8MP_CLK_SAI3				125
#define IMX8MP_CLK_SAI4				126
#define IMX8MP_CLK_SAI5				127
#define IMX8MP_CLK_SAI6				128
#define IMX8MP_CLK_ENET_QOS			129
#define IMX8MP_CLK_ENET_QOS_TIMER		130
#define IMX8MP_CLK_ENET_REF			131
#define IMX8MP_CLK_ENET_TIMER			132
#define IMX8MP_CLK_ENET_PHY_REF			133
#define IMX8MP_CLK_NAND				134
#define IMX8MP_CLK_QSPI				135
#define IMX8MP_CLK_USDHC1			136
#define IMX8MP_CLK_USDHC2			137
#define IMX8MP_CLK_I2C1				138
#define IMX8MP_CLK_I2C2				139
#define IMX8MP_CLK_I2C3				140
#define IMX8MP_CLK_I2C4				141
#define IMX8MP_CLK_UART1			142
#define IMX8MP_CLK_UART2			143
#define IMX8MP_CLK_UART3			144
#define IMX8MP_CLK_UART4			145
#define IMX8MP_CLK_USB_CORE_REF			146
#define IMX8MP_CLK_USB_PHY_REF			147
#define IMX8MP_CLK_GIC				148
#define IMX8MP_CLK_ECSPI1			149
#define IMX8MP_CLK_ECSPI2			150
#define IMX8MP_CLK_PWM1				151
#define IMX8MP_CLK_PWM2				152
#define IMX8MP_CLK_PWM3				153
#define IMX8MP_CLK_PWM4				154
#define IMX8MP_CLK_GPT1				155
#define IMX8MP_CLK_GPT2				156
#define IMX8MP_CLK_GPT3				157
#define IMX8MP_CLK_GPT4				158
#define IMX8MP_CLK_GPT5				159
#define IMX8MP_CLK_GPT6				160
#define IMX8MP_CLK_TRACE			161
#define IMX8MP_CLK_WDOG				162
#define IMX8MP_CLK_WRCLK			163
#define IMX8MP_CLK_IPP_DO_CLKO1			164
#define IMX8MP_CLK_IPP_DO_CLKO2			165
#define IMX8MP_CLK_HDMI_FDCC_TST		166
#define IMX8MP_CLK_HDMI_24M			167
#define IMX8MP_CLK_HDMI_REF_266M		168
#define IMX8MP_CLK_USDHC3			169
#define IMX8MP_CLK_MEDIA_CAM1_PIX		170
#define IMX8MP_CLK_MEDIA_MIPI_PHY1_REF		171
#define IMX8MP_CLK_MEDIA_DISP1_PIX		172
#define IMX8MP_CLK_MEDIA_CAM2_PIX		173
#define IMX8MP_CLK_MEDIA_LDB			174
#define IMX8MP_CLK_MEDIA_MIPI_CSI2_ESC		175
#define IMX8MP_CLK_PCIE2_CTRL			176
#define IMX8MP_CLK_PCIE2_PHY			177
#define IMX8MP_CLK_MEDIA_MIPI_TEST_BYTE		178
#define IMX8MP_CLK_ECSPI3			179
#define IMX8MP_CLK_PDM				180
#define IMX8MP_CLK_VPU_VC8000E			181
#define IMX8MP_CLK_SAI7				182
#define IMX8MP_CLK_GPC_ROOT			183
#define IMX8MP_CLK_ANAMIX_ROOT			184
#define IMX8MP_CLK_CPU_ROOT			185
#define IMX8MP_CLK_CSU_ROOT			186
#define IMX8MP_CLK_DEBUG_ROOT			187
#define IMX8MP_CLK_DRAM1_ROOT			188
#define IMX8MP_CLK_ECSPI1_ROOT			189
#define IMX8MP_CLK_ECSPI2_ROOT			190
#define IMX8MP_CLK_ECSPI3_ROOT			191
#define IMX8MP_CLK_ENET1_ROOT			192
#define IMX8MP_CLK_GPIO1_ROOT			193
#define IMX8MP_CLK_GPIO2_ROOT			194
#define IMX8MP_CLK_GPIO3_ROOT			195
#define IMX8MP_CLK_GPIO4_ROOT			196
#define IMX8MP_CLK_GPIO5_ROOT			197
#define IMX8MP_CLK_GPT1_ROOT			198
#define IMX8MP_CLK_GPT2_ROOT			199
#define IMX8MP_CLK_GPT3_ROOT			200
#define IMX8MP_CLK_GPT4_ROOT			201
#define IMX8MP_CLK_GPT5_ROOT			202
#define IMX8MP_CLK_GPT6_ROOT			203
#define IMX8MP_CLK_HS_ROOT			204
#define IMX8MP_CLK_I2C1_ROOT			205
#define IMX8MP_CLK_I2C2_ROOT			206
#define IMX8MP_CLK_I2C3_ROOT			207
#define IMX8MP_CLK_I2C4_ROOT			208
#define IMX8MP_CLK_IOMUX_ROOT			209
#define IMX8MP_CLK_IPMUX1_ROOT			210
#define IMX8MP_CLK_IPMUX2_ROOT			211
#define IMX8MP_CLK_IPMUX3_ROOT			212
#define IMX8MP_CLK_MU_ROOT			213
#define IMX8MP_CLK_OCOTP_ROOT			214
#define IMX8MP_CLK_OCRAM_ROOT			215
#define IMX8MP_CLK_OCRAM_S_ROOT			216
#define IMX8MP_CLK_PCIE_ROOT			217
#define IMX8MP_CLK_PERFMON1_ROOT		218
#define IMX8MP_CLK_PERFMON2_ROOT		219
#define IMX8MP_CLK_PWM1_ROOT			220
#define IMX8MP_CLK_PWM2_ROOT			221
#define IMX8MP_CLK_PWM3_ROOT			222
#define IMX8MP_CLK_PWM4_ROOT			223
#define IMX8MP_CLK_QOS_ROOT			224
#define IMX8MP_CLK_QOS_ENET_ROOT		225
#define IMX8MP_CLK_QSPI_ROOT			226
#define IMX8MP_CLK_NAND_ROOT			227
#define IMX8MP_CLK_NAND_USDHC_BUS_RAWNAND_CLK	228
#define IMX8MP_CLK_RDC_ROOT			229
#define IMX8MP_CLK_ROM_ROOT			230
#define IMX8MP_CLK_I2C5_ROOT			231
#define IMX8MP_CLK_I2C6_ROOT			232
#define IMX8MP_CLK_CAN1_ROOT			233
#define IMX8MP_CLK_CAN2_ROOT			234
#define IMX8MP_CLK_SCTR_ROOT			235
#define IMX8MP_CLK_SDMA1_ROOT			236
#define IMX8MP_CLK_ENET_QOS_ROOT		237
#define IMX8MP_CLK_SEC_DEBUG_ROOT		238
#define IMX8MP_CLK_SEMA1_ROOT			239
#define IMX8MP_CLK_SEMA2_ROOT			240
#define IMX8MP_CLK_IRQ_STEER_ROOT		241
#define IMX8MP_CLK_SIM_ENET_ROOT		242
#define IMX8MP_CLK_SIM_M_ROOT			243
#define IMX8MP_CLK_SIM_MAIN_ROOT		244
#define IMX8MP_CLK_SIM_S_ROOT			245
#define IMX8MP_CLK_SIM_WAKEUP_ROOT		246
#define IMX8MP_CLK_GPU2D_ROOT			247
#define IMX8MP_CLK_GPU3D_ROOT			248
#define IMX8MP_CLK_SNVS_ROOT			249
#define IMX8MP_CLK_TRACE_ROOT			250
#define IMX8MP_CLK_UART1_ROOT			251
#define IMX8MP_CLK_UART2_ROOT			252
#define IMX8MP_CLK_UART3_ROOT			253
#define IMX8MP_CLK_UART4_ROOT			254
#define IMX8MP_CLK_USB_ROOT			255
#define IMX8MP_CLK_USB_PHY_ROOT			256
#define IMX8MP_CLK_USDHC1_ROOT			257
#define IMX8MP_CLK_USDHC2_ROOT			258
#define IMX8MP_CLK_WDOG1_ROOT			259
#define IMX8MP_CLK_WDOG2_ROOT			260
#define IMX8MP_CLK_WDOG3_ROOT			261
#define IMX8MP_CLK_VPU_G1_ROOT			262
#define IMX8MP_CLK_GPU_ROOT			263
#define IMX8MP_CLK_NOC_WRAPPER_ROOT		264
#define IMX8MP_CLK_VPU_VC8KE_ROOT		265
#define IMX8MP_CLK_VPU_G2_ROOT			266
#define IMX8MP_CLK_NPU_ROOT			267
#define IMX8MP_CLK_HSIO_ROOT			268
#define IMX8MP_CLK_MEDIA_APB_ROOT		269
#define IMX8MP_CLK_MEDIA_AXI_ROOT		270
#define IMX8MP_CLK_MEDIA_CAM1_PIX_ROOT		271
#define IMX8MP_CLK_MEDIA_CAM2_PIX_ROOT		272
#define IMX8MP_CLK_MEDIA_DISP1_PIX_ROOT		273
#define IMX8MP_CLK_MEDIA_DISP2_PIX_ROOT		274
#define IMX8MP_CLK_MEDIA_MIPI_PHY1_REF_ROOT	275
#define IMX8MP_CLK_MEDIA_ISP_ROOT		276
#define IMX8MP_CLK_USDHC3_ROOT			277
#define IMX8MP_CLK_HDMI_ROOT			278
#define IMX8MP_CLK_XTAL_ROOT			279
#define IMX8MP_CLK_PLL_ROOT			280
#define IMX8MP_CLK_TSENSOR_ROOT			281
#define IMX8MP_CLK_VPU_ROOT			282
#define IMX8MP_CLK_MRPR_ROOT			283
#define IMX8MP_CLK_AUDIO_ROOT			284
#define IMX8MP_CLK_DRAM_ALT_ROOT		285
#define IMX8MP_CLK_DRAM_CORE			286
#define IMX8MP_CLK_ARM				287
#define IMX8MP_CLK_A53_CORE			288

#define IMX8MP_SYS_PLL1_40M_CG			289
#define IMX8MP_SYS_PLL1_80M_CG			290
#define IMX8MP_SYS_PLL1_100M_CG			291
#define IMX8MP_SYS_PLL1_133M_CG			292
#define IMX8MP_SYS_PLL1_160M_CG			293
#define IMX8MP_SYS_PLL1_200M_CG			294
#define IMX8MP_SYS_PLL1_266M_CG			295
#define IMX8MP_SYS_PLL1_400M_CG			296
#define IMX8MP_SYS_PLL2_50M_CG			297
#define IMX8MP_SYS_PLL2_100M_CG			298
#define IMX8MP_SYS_PLL2_125M_CG			299
#define IMX8MP_SYS_PLL2_166M_CG			300
#define IMX8MP_SYS_PLL2_200M_CG			301
#define IMX8MP_SYS_PLL2_250M_CG			302
#define IMX8MP_SYS_PLL2_333M_CG			303
#define IMX8MP_SYS_PLL2_500M_CG			304

#define IMX8MP_CLK_M7_CORE			305
#define IMX8MP_CLK_ML_CORE			306
#define IMX8MP_CLK_GPU3D_CORE			307
#define IMX8MP_CLK_GPU3D_SHADER_CORE		308
#define IMX8MP_CLK_GPU2D_CORE			309
#define IMX8MP_CLK_AUDIO_AXI			310
#define IMX8MP_CLK_HSIO_AXI			311
#define IMX8MP_CLK_MEDIA_ISP			312

#define IMX8MP_CLK_MEDIA_DISP2_PIX		313
#define IMX8MP_CLK_MEDIA_LDB_ROOT		314
#define IMX8MP_CLK_AUDIO_AHB_ROOT		315
#define IMX8MP_CLK_AUDIO_AXI_ROOT		316
#define IMX8MP_CLK_SAI1_ROOT			317
#define IMX8MP_CLK_SAI2_ROOT			318
#define IMX8MP_CLK_SAI3_ROOT			319
#define IMX8MP_CLK_SAI5_ROOT			320
#define IMX8MP_CLK_SAI6_ROOT			321
#define IMX8MP_CLK_SAI7_ROOT			322
#define IMX8MP_CLK_PDM_ROOT			323

#define IMX8MP_SAI1_MCLK			324
#define IMX8MP_SAI2_MCLK			325
#define IMX8MP_SAI3_MCLK			326
#define IMX8MP_SAI4_MCLK			327
#define IMX8MP_SAI5_MCLK			328
#define IMX8MP_SAI6_MCLK			329
#define IMX8MP_SAI7_MCLK			330

#define IMX8MP_CLK_END				331

#define IMX8MP_CLK_AUDIO_BLK_CTRL_SAI1_IPG		0
#define IMX8MP_CLK_AUDIO_BLK_CTRL_SAI1_MCLK1		1
#define IMX8MP_CLK_AUDIO_BLK_CTRL_SAI1_MCLK2		2
#define IMX8MP_CLK_AUDIO_BLK_CTRL_SAI1_MCLK3		3
#define IMX8MP_CLK_AUDIO_BLK_CTRL_SAI2_IPG		4
#define IMX8MP_CLK_AUDIO_BLK_CTRL_SAI2_MCLK1		5
#define IMX8MP_CLK_AUDIO_BLK_CTRL_SAI2_MCLK2		6
#define IMX8MP_CLK_AUDIO_BLK_CTRL_SAI2_MCLK3		7
#define IMX8MP_CLK_AUDIO_BLK_CTRL_SAI3_IPG		8
#define IMX8MP_CLK_AUDIO_BLK_CTRL_SAI3_MCLK1		9
#define IMX8MP_CLK_AUDIO_BLK_CTRL_SAI3_MCLK2		10
#define IMX8MP_CLK_AUDIO_BLK_CTRL_SAI3_MCLK3		11
#define IMX8MP_CLK_AUDIO_BLK_CTRL_SAI5_IPG		12
#define IMX8MP_CLK_AUDIO_BLK_CTRL_SAI5_MCLK1		13
#define IMX8MP_CLK_AUDIO_BLK_CTRL_SAI5_MCLK2		14
#define IMX8MP_CLK_AUDIO_BLK_CTRL_SAI5_MCLK3		15
#define IMX8MP_CLK_AUDIO_BLK_CTRL_SAI6_IPG		16
#define IMX8MP_CLK_AUDIO_BLK_CTRL_SAI6_MCLK1		17
#define IMX8MP_CLK_AUDIO_BLK_CTRL_SAI6_MCLK2		18
#define IMX8MP_CLK_AUDIO_BLK_CTRL_SAI6_MCLK3		19
#define IMX8MP_CLK_AUDIO_BLK_CTRL_SAI7_IPG		20
#define IMX8MP_CLK_AUDIO_BLK_CTRL_SAI7_MCLK1		21
#define IMX8MP_CLK_AUDIO_BLK_CTRL_SAI7_MCLK2		22
#define IMX8MP_CLK_AUDIO_BLK_CTRL_SAI7_MCLK3		23
#define IMX8MP_CLK_AUDIO_BLK_CTRL_ASRC_IPG		24
#define IMX8MP_CLK_AUDIO_BLK_CTRL_PDM_IPG		25
#define IMX8MP_CLK_AUDIO_BLK_CTRL_SDMA3_ROOT		27
#define IMX8MP_CLK_AUDIO_BLK_CTRL_SPBA2_ROOT		28
#define IMX8MP_CLK_AUDIO_BLK_CTRL_DSP_ROOT		29
#define IMX8MP_CLK_AUDIO_BLK_CTRL_DSPDBG_ROOT		30
#define IMX8MP_CLK_AUDIO_BLK_CTRL_EARC_IPG		31
#define IMX8MP_CLK_AUDIO_BLK_CTRL_OCRAMA_IPG		32
#define IMX8MP_CLK_AUDIO_BLK_CTRL_AUD2HTX_IPG		33
#define IMX8MP_CLK_AUDIO_BLK_CTRL_EDMA_ROOT		34
#define IMX8MP_CLK_AUDIO_BLK_CTRL_AUDPLL_ROOT		35
#define IMX8MP_CLK_AUDIO_BLK_CTRL_MU2_ROOT		36
#define IMX8MP_CLK_AUDIO_BLK_CTRL_MU3_ROOT		37
#define IMX8MP_CLK_AUDIO_BLK_CTRL_EARC_PHY		38
#define IMX8MP_CLK_AUDIO_BLK_CTRL_PDM_ROOT		39
#define IMX8MP_CLK_AUDIO_BLK_CTRL_SAI1_MCLK1_SEL	40
#define IMX8MP_CLK_AUDIO_BLK_CTRL_SAI1_MCLK2_SEL	41
#define IMX8MP_CLK_AUDIO_BLK_CTRL_SAI2_MCLK1_SEL	42
#define IMX8MP_CLK_AUDIO_BLK_CTRL_SAI2_MCLK2_SEL	43
#define IMX8MP_CLK_AUDIO_BLK_CTRL_SAI3_MCLK1_SEL	44
#define IMX8MP_CLK_AUDIO_BLK_CTRL_SAI3_MCLK2_SEL	45
#define IMX8MP_CLK_AUDIO_BLK_CTRL_SAI4_MCLK1_SEL	46
#define IMX8MP_CLK_AUDIO_BLK_CTRL_SAI4_MCLK2_SEL	47
#define IMX8MP_CLK_AUDIO_BLK_CTRL_SAI5_MCLK1_SEL	48
#define IMX8MP_CLK_AUDIO_BLK_CTRL_SAI5_MCLK2_SEL	49
#define IMX8MP_CLK_AUDIO_BLK_CTRL_SAI6_MCLK1_SEL	50
#define IMX8MP_CLK_AUDIO_BLK_CTRL_SAI6_MCLK2_SEL	51
#define IMX8MP_CLK_AUDIO_BLK_CTRL_SAI7_MCLK1_SEL	52
#define IMX8MP_CLK_AUDIO_BLK_CTRL_SAI7_MCLK2_SEL	53
#define IMX8MP_CLK_AUDIO_BLK_CTRL_PDM_SEL		54
#define IMX8MP_CLK_AUDIO_BLK_CTRL_SAI_PLL_REF_SEL	55
#define IMX8MP_CLK_AUDIO_BLK_CTRL_SAI_PLL		56
#define IMX8MP_CLK_AUDIO_BLK_CTRL_SAI_PLL_BYPASS	57
#define IMX8MP_CLK_AUDIO_BLK_CTRL_SAI_PLL_OUT		58

#define IMX8MP_CLK_AUDIO_BLK_CTRL_END			59

#define IMX8MP_CLK_HDMI_BLK_CTRL_GLOBAL_APB_CLK		0
#define IMX8MP_CLK_HDMI_BLK_CTRL_GLOBAL_B_CLK		1
#define IMX8MP_CLK_HDMI_BLK_CTRL_GLOBAL_REF266M_CLK	2
#define IMX8MP_CLK_HDMI_BLK_CTRL_GLOBAL_XTAL24M_CLK	3
#define IMX8MP_CLK_HDMI_BLK_CTRL_GLOBAL_XTAL32K_CLK	4
#define IMX8MP_CLK_HDMI_BLK_CTRL_GLOBAL_TX_PIX_CLK	5
#define IMX8MP_CLK_HDMI_BLK_CTRL_IRQS_STEER_CLK		6
#define IMX8MP_CLK_HDMI_BLK_CTRL_NOC_HDMI_CLK		7
#define IMX8MP_CLK_HDMI_BLK_CTRL_NOC_HDCP_CLK		8
#define IMX8MP_CLK_HDMI_BLK_CTRL_LCDIF_APB_CLK		9
#define IMX8MP_CLK_HDMI_BLK_CTRL_LCDIF_B_CLK		10
#define IMX8MP_CLK_HDMI_BLK_CTRL_LCDIF_PDI_CLK		11
#define IMX8MP_CLK_HDMI_BLK_CTRL_LCDIF_PIX_CLK		12
#define IMX8MP_CLK_HDMI_BLK_CTRL_LCDIF_SPU_CLK		13
#define IMX8MP_CLK_HDMI_BLK_CTRL_FDCC_REF_CLK		14
#define IMX8MP_CLK_HDMI_BLK_CTRL_HRV_MWR_APB_CLK	15
#define IMX8MP_CLK_HDMI_BLK_CTRL_HRV_MWR_B_CLK		16
#define IMX8MP_CLK_HDMI_BLK_CTRL_HRV_MWR_CEA_CLK	17
#define IMX8MP_CLK_HDMI_BLK_CTRL_VSFD_CEA_CLK		18
#define IMX8MP_CLK_HDMI_BLK_CTRL_TX_HPI_CLK		19
#define IMX8MP_CLK_HDMI_BLK_CTRL_TX_APB_CLK		20
#define IMX8MP_CLK_HDMI_BLK_CTRL_TX_CEC_CLK		21
#define IMX8MP_CLK_HDMI_BLK_CTRL_TX_ESM_CLK		22
#define IMX8MP_CLK_HDMI_BLK_CTRL_TX_GPA_CLK		23
#define IMX8MP_CLK_HDMI_BLK_CTRL_TX_PIXEL_CLK		24
#define IMX8MP_CLK_HDMI_BLK_CTRL_TX_SFR_CLK		25
#define IMX8MP_CLK_HDMI_BLK_CTRL_TX_SKP_CLK		26
#define IMX8MP_CLK_HDMI_BLK_CTRL_TX_PREP_CLK		27
#define IMX8MP_CLK_HDMI_BLK_CTRL_TX_PHY_APB_CLK		28
#define IMX8MP_CLK_HDMI_BLK_CTRL_TX_PHY_INT_CLK		29
#define IMX8MP_CLK_HDMI_BLK_CTRL_TX_SEC_MEM_CLK		30
#define IMX8MP_CLK_HDMI_BLK_CTRL_TX_TRNG_SKP_CLK	31
#define IMX8MP_CLK_HDMI_BLK_CTRL_TX_VID_LINK_PIX_CLK	32
#define IMX8MP_CLK_HDMI_BLK_CTRL_TX_TRNG_APB_CLK	33
#define IMX8MP_CLK_HDMI_BLK_CTRL_HTXPHY_CLK_SEL		34
#define IMX8MP_CLK_HDMI_BLK_CTRL_LCDIF_CLK_SEL		35
#define IMX8MP_CLK_HDMI_BLK_CTRL_TX_PIPE_CLK_SEL	36

#define IMX8MP_CLK_HDMI_BLK_CTRL_END			37

#define IMX8MP_CLK_MEDIA_BLK_CTRL_MIPI_DSI_PCLK		0
#define IMX8MP_CLK_MEDIA_BLK_CTRL_MIPI_DSI_CLKREF	1
#define IMX8MP_CLK_MEDIA_BLK_CTRL_MIPI_CSI_PCLK		2
#define IMX8MP_CLK_MEDIA_BLK_CTRL_MIPI_CSI_ACLK		3
#define IMX8MP_CLK_MEDIA_BLK_CTRL_LCDIF_PIXEL		4
#define IMX8MP_CLK_MEDIA_BLK_CTRL_LCDIF_APB		5
#define IMX8MP_CLK_MEDIA_BLK_CTRL_ISI_PROC		6
#define IMX8MP_CLK_MEDIA_BLK_CTRL_ISI_APB		7
#define IMX8MP_CLK_MEDIA_BLK_CTRL_BUS_BLK		8
#define IMX8MP_CLK_MEDIA_BLK_CTRL_MIPI_CSI2_PCLK	9
#define IMX8MP_CLK_MEDIA_BLK_CTRL_MIPI_CSI2_ACLK	10
#define IMX8MP_CLK_MEDIA_BLK_CTRL_LCDIF2_PIXEL		11
#define IMX8MP_CLK_MEDIA_BLK_CTRL_LCDIF2_APB		12
#define IMX8MP_CLK_MEDIA_BLK_CTRL_ISP1_COR		13
#define IMX8MP_CLK_MEDIA_BLK_CTRL_ISP1_AXI		14
#define IMX8MP_CLK_MEDIA_BLK_CTRL_ISP1_AHB		15
#define IMX8MP_CLK_MEDIA_BLK_CTRL_ISP0_COR		16
#define IMX8MP_CLK_MEDIA_BLK_CTRL_ISP0_AXI		17
#define IMX8MP_CLK_MEDIA_BLK_CTRL_ISP0_AHB		18
#define IMX8MP_CLK_MEDIA_BLK_CTRL_DWE_COR		19
#define IMX8MP_CLK_MEDIA_BLK_CTRL_DWE_AXI		20
#define IMX8MP_CLK_MEDIA_BLK_CTRL_DWE_AHB		21
#define IMX8MP_CLK_MEDIA_BLK_CTRL_MIPI_DSI2		22
#define IMX8MP_CLK_MEDIA_BLK_CTRL_LCDIF_AXI		23
#define IMX8MP_CLK_MEDIA_BLK_CTRL_LCDIF2_AXI		24

#define IMX8MP_CLK_MEDIA_BLK_CTRL_END			25

#endif

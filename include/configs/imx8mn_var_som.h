/* SPDX-License-Identifier: GPL-2.0+ */
/*
 * Copyright 2021 Collabora Ltd.
 */

#ifndef __IMX8MN_VAR_SOM_H
#define __IMX8MN_VAR_SOM_H

#include <linux/sizes.h>
#include <linux/stringify.h>
#include <asm/arch/imx-regs.h>

#define CONFIG_SYS_BOOTM_LEN		(32 * SZ_1M)

#define CONFIG_SPL_MAX_SIZE		(148 * SZ_1K)
#define CONFIG_SYS_MONITOR_LEN		SZ_512K
#define CONFIG_SYS_MMCSD_RAW_MODE_U_BOOT_USE_SECTOR
#define CONFIG_SYS_MMCSD_RAW_MODE_U_BOOT_SECTOR		0x300
#define CONFIG_SYS_UBOOT_BASE	\
	(QSPI0_AMBA_BASE + CONFIG_SYS_MMCSD_RAW_MODE_U_BOOT_SECTOR * 512)

#define CONFIG_SPL_STACK		0x980000
#define CONFIG_SPL_BSS_START_ADDR	0x950000
#define CONFIG_SPL_BSS_MAX_SIZE		SZ_8K
#define CONFIG_SYS_SPL_MALLOC_START	0x42200000
#define CONFIG_SYS_SPL_MALLOC_SIZE	SZ_512K

#define BOOT_TARGET_DEVICES(func) \
	func(MMC, mmc, 1) \
	func(MMC, mmc, 2) \
	func(MMC, mmc, 0) \
	func(PXE, pxe, na) \
	func(DHCP, dhcp, na) \

#include <config_distro_bootcmd.h>

/* ENET */
#if defined(CONFIG_FEC_MXC)
#define CONFIG_ETHPRIME			"FEC"
#define CONFIG_FEC_XCV_TYPE		RGMII
#endif /* CONFIG_FEC_MXC */

#define MEM_LAYOUT_ENV_SETTINGS \
	"scriptaddr=" __stringify(CONFIG_SYS_LOAD_ADDR) "\0" \
	"kernel_addr_r=" __stringify(CONFIG_SYS_LOAD_ADDR) "\0" \
	"ramdisk_addr_r=0x43800000\0" \
	"fdt_addr_r=0x43000000\0" \
	"fdtfile=" CONFIG_DEFAULT_FDT_FILE "\0" \
	"fastboot_partition_alias_all=" \
		__stringify(CONFIG_FASTBOOT_FLASH_MMC_DEV) ".0:0\0" \
	"fastboot_partition_alias_bootloader=" \
		__stringify(CONFIG_FASTBOOT_FLASH_MMC_DEV) ".1:0\0" \
	"emmc_dev=" __stringify(CONFIG_FASTBOOT_FLASH_MMC_DEV) "\0" \
	"emmc_ack=1\0" \
	"pxefile_addr_r=" __stringify(CONFIG_SYS_LOAD_ADDR) "\0" \

/* Initial environment variables */
#define CONFIG_EXTRA_ENV_SETTINGS \
	MEM_LAYOUT_ENV_SETTINGS \
	BOOTENV

/* Link Definitions */

#define CONFIG_SYS_INIT_RAM_ADDR	0x40000000
#define CONFIG_SYS_INIT_RAM_SIZE	SZ_512K
#define CONFIG_SYS_INIT_SP_OFFSET \
	(CONFIG_SYS_INIT_RAM_SIZE - GENERATED_GBL_DATA_SIZE)
#define CONFIG_SYS_INIT_SP_ADDR \
	(CONFIG_SYS_INIT_RAM_ADDR + CONFIG_SYS_INIT_SP_OFFSET)

#define CONFIG_SYS_SDRAM_BASE		0x40000000
#define PHYS_SDRAM			0x40000000
#define PHYS_SDRAM_SIZE			SZ_1G /* 1GB DDR */

#define CONFIG_MXC_UART_BASE		UART4_BASE_ADDR

/* Monitor Command Prompt */
#define CONFIG_SYS_CBSIZE		SZ_2K
#define CONFIG_SYS_MAXARGS		64
#define CONFIG_SYS_BARGSIZE		CONFIG_SYS_CBSIZE
#define CONFIG_SYS_PBSIZE		(CONFIG_SYS_CBSIZE + \
					 sizeof(CONFIG_SYS_PROMPT) + 16)

/* USDHC */
#define CONFIG_SYS_FSL_ESDHC_ADDR	0

/* I2C */
#define CONFIG_SYS_I2C_SPEED		400000

#endif /* __IMX8MN_VAR_SOM_H */

/* SPDX-License-Identifier: GPL-2.0-or-later */
/*
 *  linux/drivers/mmc/core/sd_ops.h
 *
 *  Copyright 2006-2007 Pierre Ossman
 */

#ifndef _MMC_SD_OPS_H
#define _MMC_SD_OPS_H

#include <linux/types.h>

struct mmc_card;
struct mmc_host;

int mmc_app_set_bus_width(struct mmc_card *card, int width);
int mmc_send_app_op_cond(struct mmc_host *host, u32 ocr, u32 *rocr);
int mmc_send_if_cond(struct mmc_host *host, u32 ocr);
int mmc_send_if_cond_pcie(struct mmc_host *host, u32 ocr);
int mmc_send_relative_addr(struct mmc_host *host, unsigned int *rca);
int mmc_app_send_scr(struct mmc_card *card);
int mmc_app_sd_status(struct mmc_card *card, void *ssr);
int mmc_app_cmd(struct mmc_host *host, struct mmc_card *card);
int mmc_sd_cmdq_enable(struct mmc_card *card);
int mmc_sd_cmdq_disable(struct mmc_card *card);
int mmc_sd_write_ext_reg(struct mmc_card *card, u8 fno, u8 page, u16 offset,
			 u8 reg_data);
int mmc_sd_read_ext_reg(struct mmc_card *card, u8 fno, u8 page,
			u16 offset, u16 len, u8 *reg_buf);

#endif


/*
* Copyright (c) 2023, Arm Limited. All rights reserved.
*
* SPDX-License-Identifier: BSD-3-Clause
*
*/

#ifndef __RSS_EXPANSION_REGS_H__
#define __RSS_EXPANSION_REGS_H__

#include "cmsis.h"

#include <stdint.h>

__PACKED_STRUCT rss_integ_t {
    __IOM uint32_t rsscoreclk_ctrl; /* 0x000 */
    __IOM uint32_t rsscoreclk_div;  /* 0x004 */
    const uint32_t reserved0[2];
    __IOM uint32_t rss_integration; /* 0x010*/
    __IOM uint32_t atu_ap; /* 0x014 */
    const uint32_t reserved1[1005];
    __IM  uint32_t pidr4; /* 0xFD0 */
    const uint32_t reserved2[3];
    __IM  uint32_t pidr0; /* 0xFE0 */
    __IM  uint32_t pidr1; /* 0xFE4 */
    __IM  uint32_t pidr2; /* 0xFE8 */
    __IM  uint32_t pidr3; /* 0xFEC */
    __IM  uint32_t cidr0; /* 0xFF0 */
    __IM  uint32_t cidr1; /* 0xFF4 */
    __IM  uint32_t cidr2; /* 0xFF8 */
    __IM  uint32_t cidr3; /* 0xFFC */
};

/* Field definitions for RSSCORECLK_CTRL register */
#define RSS_INTEG_CLKCTRL_SEL_POS      (0U)
#define RSS_INTEG_CLKCTRL_SEL_MSK      (0xFFUL << RSS_INTEG_CLKCTRL_SEL_POS)
#define RSS_INTEG_CLKCTRL_SEL_REF      (0x1UL << RSS_INTEG_CLKCTRL_SEL_POS)
#define RSS_INTEG_CLKCTRL_SEL_SPLL     (0x2UL << RSS_INTEG_CLKCTRL_SEL_POS)
#define RSS_INTEG_CLKCTRL_SEL_CUR_POS  (8U)
#define RSS_INTEG_CLKCTRL_SEL_CUR_MSK  (0xFFUL << RSS_INTEG_CLKCTRL_SEL_CUR_POS)
#define RSS_INTEG_CLKCTRL_SEL_CUR_REF  (0x1UL << RSS_INTEG_CLKCTRL_SEL_CUR_POS)
#define RSS_INTEG_CLKCTRL_SEL_CUR_SPLL (0x2UL << RSS_INTEG_CLKCTRL_SEL_CUR_POS)

/* Field definitions for RSSCORECLK_DIV register */
#define RSS_INTEG_CLKDIV_DIV_POS       (0U)
#define RSS_INTEG_CLKDIV_DIV_MSK       (0xFUL << RSS_INTEG_CLKDIV_DIV_POS)
#define RSS_INTEG_CLKDIV_DIV_CUR_POS   (16U)
#define RSS_INTEG_CLKDIV_DIV_CUR_MSK   (0x4UL << RSS_INTEG_CLKDIV_DIV_CUR_POS)

/* Field definitions for RSS_INTEGRATION register */
#define RSS_INTEG_INTEG_SCP_RESET_POS  (0U)
#define RSS_INTEG_INTEG_SCP_RESET_MSK  (0x1UL << RSS_INTEG_INTEG_SCP_RESET_POS)
#define RSS_INTEG_INTEG_SCP_RESET      RSS_INTEG_INTEG_SCP_RESET_MSK
#define RSS_INTEG_INTEG_MCP_RESET_POS  (1U)
#define RSS_INTEG_INTEG_MCP_RESET_MSK  (0x1UL << RSS_INTEG_INTEG_MCP_RESET_POS)
#define RSS_INTEG_INTEG_MCP_RESET      RSS_INTEG_INTEG_MCP_RESET_MSK
#define RSS_INTEG_INTEG_SCP_RE_CLR_POS (3U)
#define RSS_INTEG_INTEG_SCP_RE_CLR_MSK (0x1UL << RSS_INTEG_INTEG_SCP_RE_CLR_POS)
#define RSS_INTEG_INTEG_SCP_RE_CLR     RSS_INTEG_INTEG_SCP_RE_CLR_MSK
#define RSS_INTEG_INTEG_MCP_RE_CLR_POS (4U)
#define RSS_INTEG_INTEG_MCP_RE_CLR_MSK (0x1UL << RSS_INTEG_INTEG_MCP_RE_CLR_POS)
#define RSS_INTEG_INTEG_CHIP_ID_POS    (8U)
#define RSS_INTEG_INTEG_CHIP_ID_MSK    (0xFUL << RSS_INTEG_INTEG_CHIP_ID_POS)
#define RSS_INTEG_INTEG_MCHIP_POS      (16U)
#define RSS_INTEG_INTEG_MCHIP_MSK      (0x1UL << RSS_INTEG_INTEG_MCHIP_POS)
#define RSS_INTEG_INTEG_MCHIP          RSS_INTEG_INTEG_MCHIP_MSK
#define RSS_INTEG_INTEG_SCP_SLEEP_POS  (17U)
#define RSS_INTEG_INTEG_SCP_SLEEP_MSK  (0x1UL << RSS_INTEG_INTEG_SCP_SLEEP_POS)
#define RSS_INTEG_INTEG_SCP_SLEEP      RSS_INTEG_INTEG_SCP_SLEEP_MSK
#define RSS_INTEG_INTEG_MCP_SLEEP_POS  (18U)
#define RSS_INTEG_INTEG_MCP_SLEEP_MSK  (0x1UL << RSS_INTEG_INTEG_MCP_SLEEP_POS)
#define RSS_INTEG_INTEG_MCP_SLEEP      RSS_INTEG_INTEG_MCP_SLEEP_MSK

/* Field definitions for ATU_AP register */
#define RSS_INTEG_ATU_AP_SCP_ATU_POS   (0U)
#define RSS_INTEG_ATU_AP_SCP_ATU_MSK   (0x1UL << RSS_INTEG_ATU_AP_SCP_ATU_POS)
#define RSS_INTEG_ATU_AP_SCP_ATU       RSS_INTEG_ATU_AP_SCP_ATU_MSK
#define RSS_INTEG_ATU_AP_MCP_ATU_POS   (1U)
#define RSS_INTEG_ATU_AP_MCP_ATU_MSK   (0x1UL << RSS_INTEG_ATU_AP_MCP_ATU_POS)
#define RSS_INTEG_ATU_AP_MCP_ATU       RSS_INTEG_ATU_AP_MCP_ATU_MSK

#endif /* __RSS_EXPANSION_REGS_H__ */

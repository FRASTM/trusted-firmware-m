/*
 * Copyright (c) 2023-2024 Arm Limited. All rights reserved.
 *
 * Licensed under the Apache License Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing software
 * distributed under the License is distributed on an "AS IS" BASIS
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/**
 * \file host_device_definition.h
 * \brief The structure definitions in this file are exported based on the
 * peripheral definitions from device_cfg.h.
 */

#ifndef __HOST_DEVICE_DEFINITION_H__
#define __HOST_DEVICE_DEFINITION_H__

#include "host_device_cfg.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Message Handling Units (MHU) */
#ifdef MHU_V3_AP_MONITOR_TO_RSE
#include "mhu_v3_x.h"
extern struct mhu_v3_x_dev_t MHU_AP_MONITOR_TO_RSE_DEV;
#endif

#ifdef MHU_V3_RSE_TO_AP_MONITOR
#include "mhu_v3_x.h"
extern struct mhu_v3_x_dev_t MHU_RSE_TO_AP_MONITOR_DEV;
#endif

#ifdef MHU_V3_SCP_TO_RSE
#include "mhu_v3_x.h"
extern struct mhu_v3_x_dev_t MHU_V3_SCP_TO_RSE_DEV;
#endif

#ifdef MHU_V3_RSE_TO_SCP
#include "mhu_v3_x.h"
extern struct mhu_v3_x_dev_t MHU_V3_RSE_TO_SCP_DEV;
#endif

#ifdef SYSCTRL_NI_TOWER
#include "ni_tower_lib.h"
extern const struct ni_tower_dev SYSCTRL_NI_TOWER_DEV;

extern const struct ni_tower_psam_dev_cfg SYSCTRL_RSE_MAIN_ASNI_PSAM_DEV_CFG;
extern const struct ni_tower_psam_dev_cfg SYSCTRL_SCP_ASNI_PSAM_DEV_CFG;
extern const struct ni_tower_psam_dev_cfg SYSCTRL_MCP_ASNI_PSAM_DEV_CFG;
extern const struct ni_tower_psam_dev_cfg SYSCTRL_RSE_SCP_ASNI_PSAM_DEV_CFG;

extern const struct ni_tower_apu_dev_cfg SYSCTRL_MCP_ASNI_APU_DEV_CFG;
extern const struct ni_tower_apu_dev_cfg SYSCTRL_RSM_AMNI_APU_DEV_CFG;
extern const struct ni_tower_apu_dev_cfg SYSCTRL_RSM_PMNI_APU_DEV_CFG;
extern const struct ni_tower_apu_dev_cfg SYSCTRL_RSE_SCP_AMNI_APU_DEV_CFG;
#endif

#ifdef __cplusplus
}
#endif

#endif  /* __HOST_DEVICE_DEFINITION_H__ */

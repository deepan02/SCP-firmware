/*
 * Arm SCP/MCP Software
 * Copyright (c) 2018-2019, Arm Limited and Contributors. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef SMMU_WRAPPER_H
#define SMMU_WRAPPER_H

#include <synquacer_debug.h>
#include <synquacer_mmap.h>

#ifdef CONFIG_SCB_USE_PCIE_INTERCONNECT

/**
 * Initialize and setup System MMU(s)
 *
 * @param mir_id mir_id of myself.
 * @param mav_id mav_id of myself. Only valid for SynQuacer SCP-firmware.
 */
void smmu_wrapper_initialize(uint8_t mir_id, uint8_t mav_id);

#else /* CONFIG_SCB_USE_PCIE_INTERCONNECT */

/**
 * Initialize and setup System MMU(s)
 *
 */
void smmu_wrapper_initialize(void);
#endif /* CONFIG_SCB_USE_PCIE_INTERCONNECT */

#endif /* SMMU_WRAPPER_H */

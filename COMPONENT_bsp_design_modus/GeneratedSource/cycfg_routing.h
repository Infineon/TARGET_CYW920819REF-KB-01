/*******************************************************************************
* File Name: cycfg_routing.h
*
* Description:
* Establishes all necessary connections between hardware elements.
* This file was automatically generated and should not be modified.
* Tools Package 2.1.0.1266
* 20819A1
* personalities 1.0.0.31
* udd 1.2.0.370
*
********************************************************************************
* Copyright 2020 Cypress Semiconductor Corporation
* SPDX-License-Identifier: Apache-2.0
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
********************************************************************************/

#if !defined(CYCFG_ROUTING_H)
#define CYCFG_ROUTING_H

#if defined(__cplusplus)
extern "C" {
#endif

#include "cycfg_notices.h"
static inline void init_cycfg_routing(void) {}
#define init_cycfg_connectivity() init_cycfg_routing()
#define ioss_0_pin_0_AUX UNKNOWN
#define ioss_0_pin_10_AUX UNKNOWN
#define ioss_0_pin_11_AUX UNKNOWN
#define ioss_0_pin_12_AUX UNKNOWN
#define ioss_0_pin_13_AUX UNKNOWN
#define ioss_0_pin_14_AUX UNKNOWN
#define ioss_0_pin_15_AUX UNKNOWN
#define ioss_0_pin_16_AUX UNKNOWN
#define ioss_0_pin_17_AUX UNKNOWN
#define ioss_0_pin_18_AUX UNKNOWN
#define ioss_0_pin_19_AUX UNKNOWN
#define ioss_0_pin_1_AUX UNKNOWN
#define ioss_0_pin_20_AUX UNKNOWN
#define ioss_0_pin_21_AUX UNKNOWN
#define ioss_0_pin_22_AUX UNKNOWN
#define ioss_0_pin_23_AUX UNKNOWN
#define ioss_0_pin_24_AUX UNKNOWN
#define ioss_0_pin_25_AUX UNKNOWN
#define ioss_0_pin_2_AUX UNKNOWN
#define ioss_0_pin_31_AUX UNKNOWN
#define ioss_0_pin_37_AUX UNKNOWN
#define ioss_0_pin_3_AUX UNKNOWN
#define ioss_0_pin_4_AUX UNKNOWN
#define ioss_0_pin_5_AUX UNKNOWN
#define ioss_0_pin_6_AUX UNKNOWN
#define ioss_0_pin_7_AUX UNKNOWN
#define ioss_0_pin_8_AUX UNKNOWN
#define ioss_0_pin_9_AUX UNKNOWN

#define VBATT_aux_0_TRIGGER_OUT ADC_INPUT_P37
#define adc_0_channel_0_TRIGGER_IN WICED_GPIO
#define keyscan_0_ksi_0_TRIGGER_IN WICED_GPIO
#define keyscan_0_ksi_1_TRIGGER_IN WICED_GPIO
#define keyscan_0_ksi_2_TRIGGER_IN WICED_GPIO
#define keyscan_0_ksi_3_TRIGGER_IN WICED_GPIO
#define keyscan_0_ksi_4_TRIGGER_IN WICED_GPIO
#define keyscan_0_ksi_5_TRIGGER_IN WICED_GPIO
#define keyscan_0_ksi_6_TRIGGER_IN WICED_GPIO
#define keyscan_0_ksi_7_TRIGGER_IN WICED_GPIO
#define keyscan_0_kso_0_TRIGGER_IN WICED_KSO0
#define keyscan_0_kso_10_TRIGGER_IN WICED_KSO10
#define keyscan_0_kso_11_TRIGGER_IN WICED_KSO11
#define keyscan_0_kso_12_TRIGGER_IN WICED_KSO12
#define keyscan_0_kso_13_TRIGGER_IN WICED_KSO13
#define keyscan_0_kso_14_TRIGGER_IN WICED_KSO14
#define keyscan_0_kso_15_TRIGGER_IN WICED_KSO15
#define keyscan_0_kso_16_TRIGGER_IN WICED_KSO16
#define keyscan_0_kso_17_TRIGGER_IN WICED_KSO17
#define keyscan_0_kso_1_TRIGGER_IN WICED_KSO1
#define keyscan_0_kso_2_TRIGGER_IN WICED_KSO2
#define keyscan_0_kso_3_TRIGGER_IN WICED_KSO3
#define keyscan_0_kso_4_TRIGGER_IN WICED_KSO4
#define keyscan_0_kso_5_TRIGGER_IN WICED_KSO5
#define keyscan_0_kso_6_TRIGGER_IN WICED_KSO6
#define keyscan_0_kso_7_TRIGGER_IN WICED_KSO7
#define keyscan_0_kso_8_TRIGGER_IN WICED_KSO8
#define keyscan_0_kso_9_TRIGGER_IN WICED_KSO9
#define uart_1_txd_0_TRIGGER_IN WICED_UART_2_TXD

#if defined(__cplusplus)
}
#endif


#endif /* CYCFG_ROUTING_H */

/*******************************************************************************
* File Name: cycfg_pins.h
*
* Description:
* Pin configuration
* This file was automatically generated and should not be modified.
* Tools Package 2.1.0.1266
* 20819A1
* personalities 1.0.0.31
* udd 1.2.0.128
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

#if !defined(CYCFG_PINS_H)
#define CYCFG_PINS_H

#include "cycfg_notices.h"
#include "wiced_platform.h"
#include "cycfg_routing.h"

#if defined(__cplusplus)
extern "C" {
#endif

#define adc_0_ENABLED 1U
#define bluetooth_0_ENABLED 1U
#define ioss_0_ENABLED 1U
#define WICED_GET_PIN_FOR_LED(idx) (*(platform_led[(idx)].gpio))
#define WICED_GET_PIN_FOR_BUTTON(idx) (*(platform_button[(idx)].gpio))
#define WICED_GET_PIN_FOR_IO(idx) (*(platform_gpio[(idx)].gpio))
#define ROW_0_ENABLED 1U
#define ROW_0 WICED_P00
#define COL_2_ENABLED 1U
#define COL_2 WICED_P10
#define COL_3_ENABLED 1U
#define COL_3 WICED_P11
#define COL_4_ENABLED 1U
#define COL_4 WICED_P12
#define COL_5_ENABLED 1U
#define COL_5 WICED_P13
#define COL_6_ENABLED 1U
#define COL_6 WICED_P14
#define COL_7_ENABLED 1U
#define COL_7 WICED_P15
#define COL_8_ENABLED 1U
#define COL_8 WICED_P16
#define COL_9_ENABLED 1U
#define COL_9 WICED_P17
#define COL_10_ENABLED 1U
#define COL_10 WICED_P18
#define COL_11_ENABLED 1U
#define COL_11 WICED_P19
#define ROW_1_ENABLED 1U
#define ROW_1 WICED_P01
#define COL_12_ENABLED 1U
#define COL_12 WICED_P20
#define COL_13_ENABLED 1U
#define COL_13 WICED_P21
#define COL_14_ENABLED 1U
#define COL_14 WICED_P22
#define COL_15_ENABLED 1U
#define COL_15 WICED_P23
#define COL_16_ENABLED 1U
#define COL_16 WICED_P24
#define COL_17_ENABLED 1U
#define COL_17 WICED_P25
#define KBD_LED_CAPS_ENABLED 1U
#define KBD_LED_CAPS WICED_P26
#define KBD_LED_BLUE_ENABLED 1U
#define KBD_LED_BLUE WICED_P27
#define KBD_LED_GREEN_ENABLED 1U
#define KBD_LED_GREEN WICED_P28
#define KBD_LED_RED_ENABLED 1U
#define KBD_LED_RED WICED_P29
#define ROW_2_ENABLED 1U
#define ROW_2 WICED_P02
#define PUART_TXD_ENABLED 1U
#define PUART_TXD WICED_P31
#define DBG_DATA_ENABLED 1U
#define DBG_DATA WICED_P34
#define DBG_CLK_ENABLED 1U
#define DBG_CLK WICED_P35
#define PAIRING_BUTTON_ENABLED 1U
#define PAIRING_BUTTON WICED_P36
#define VBATT_ENABLED 1U
#define VBATT WICED_P37
#define DBG_TOGGLE_ENABLED 1U
#define DBG_TOGGLE WICED_P39
#define ROW_3_ENABLED 1U
#define ROW_3 WICED_P03
#define ROW_4_ENABLED 1U
#define ROW_4 WICED_P04
#define ROW_5_ENABLED 1U
#define ROW_5 WICED_P05
#define ROW_6_ENABLED 1U
#define ROW_6 WICED_P06
#define ROW_7_ENABLED 1U
#define ROW_7 WICED_P07
#define COL_0_ENABLED 1U
#define COL_0 WICED_P08
#define COL_1_ENABLED 1U
#define COL_1 WICED_P09
#define keyscan_0_ENABLED 1U
#define uart_1_ENABLED 1U

extern const wiced_platform_gpio_t platform_gpio_pins[];
extern const size_t platform_gpio_pin_count;
extern const wiced_platform_led_config_t platform_led[];
extern const size_t led_count;
extern const wiced_platform_button_config_t platform_button[];
extern const size_t button_count;
extern const wiced_platform_gpio_config_t platform_gpio[];
extern const size_t gpio_count;


#if defined(__cplusplus)
}
#endif


#endif /* CYCFG_PINS_H */

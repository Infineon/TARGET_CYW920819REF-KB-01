/*
 * Copyright 2016-2020, Cypress Semiconductor Corporation or a subsidiary of
 * Cypress Semiconductor Corporation. All Rights Reserved.
 *
 * This software, including source code, documentation and related
 * materials ("Software"), is owned by Cypress Semiconductor Corporation
 * or one of its subsidiaries ("Cypress") and is protected by and subject to
 * worldwide patent protection (United States and foreign),
 * United States copyright laws and international treaty provisions.
 * Therefore, you may use this Software only as provided in the license
 * agreement accompanying the software package from which you
 * obtained this Software ("EULA").
 * If no EULA applies, Cypress hereby grants you a personal, non-exclusive,
 * non-transferable license to copy, modify, and compile the Software
 * source code solely for use in connection with Cypress's
 * integrated circuit products. Any reproduction, modification, translation,
 * compilation, or representation of this Software except as specified
 * above is prohibited without the express written permission of Cypress.
 *
 * Disclaimer: THIS SOFTWARE IS PROVIDED AS-IS, WITH NO WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING, BUT NOT LIMITED TO, NONINFRINGEMENT, IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE. Cypress
 * reserves the right to make changes to the Software without notice. Cypress
 * does not assume any liability arising out of the application or use of the
 * Software or any product or circuit described in the Software. Cypress does
 * not authorize its products for use in any products where a malfunction or
 * failure of the Cypress product may reasonably be expected to result in
 * significant property damage, injury or death ("High Risk Product"). By
 * including Cypress's product in a High Risk Product, the manufacturer
 * of such system or application assumes all risk of such use and in doing
 * so agrees to indemnify Cypress against all liability.
 */

#pragma once

#include "wiced.h"
#include "wiced_hal_gpio.h"

//! Number of LEDs available on the platform.
typedef enum
{
    WICED_PLATFORM_LED_1,  //!< LED 1  copy from C:\Users\ttom\ModusToolbox_1.1\libraries\bt_sdk-1.1\components\BT-SDK\208XX-A1_Bluetooth\platforms\CYWKEYBOARD-01
    WICED_PLATFORM_LED_2,  //!< LED 2
    WICED_PLATFORM_LED_3,  //!< LED 3
    WICED_PLATFORM_LED_4,  //!< LED 4
    WICED_PLATFORM_LED_5,  //!< LED 5
    WICED_PLATFORM_LED_6,  //!< LED 6
    WICED_PLATFORM_LED_MAX //!< Max LED for error check
} wiced_platform_led_number_t;

//! Number of Buttons available on the platform.
typedef enum
{
    WICED_PLATFORM_BUTTON_1,  //!< BUTTON 1
    WICED_PLATFORM_BUTTON_2,  //!< BUTTON 2
    WICED_PLATFORM_BUTTON_3,  //!< BUTTON 3
    WICED_PLATFORM_BUTTON_4,  //!< BUTTON 4
    WICED_PLATFORM_BUTTON_MAX //!< Max button for error check
} wiced_platform_button_number_t;


//! Number of GPIO available on the platform.
// Configurable via SuperMux
typedef enum
{
    WICED_PLATFORM_GPIO_1,  //!< GPIO 1
    WICED_PLATFORM_GPIO_2,  //!< GPIO 2
    WICED_PLATFORM_GPIO_3,  //!< GPIO 3
    WICED_PLATFORM_GPIO_4,  //!< GPIO 4
    WICED_PLATFORM_GPIO_5,  //!< GPIO 5
    WICED_PLATFORM_GPIO_6,  //!< GPIO 6
    WICED_PLATFORM_GPIO_7,  //!< GPIO 7
    WICED_PLATFORM_GPIO_8,  //!< GPIO 8
    WICED_PLATFORM_GPIO_9,  //!< GPIO 9
    WICED_PLATFORM_GPIO_10, //!< GPIO 10
    WICED_PLATFORM_GPIO_11, //!< GPIO 11
    WICED_PLATFORM_GPIO_12, //!< GPIO 12
    WICED_PLATFORM_GPIO_13, //!< GPIO 13
    WICED_PLATFORM_GPIO_14, //!< GPIO 14
    WICED_PLATFORM_GPIO_15, //!< GPIO 15
    WICED_PLATFORM_GPIO_16, //!< GPIO 16
    WICED_PLATFORM_GPIO_17, //!< GPIO 17
    WICED_PLATFORM_GPIO_18, //!< GPIO 18
    WICED_PLATFORM_GPIO_19, //!< GPIO 19
    WICED_PLATFORM_GPIO_20, //!< GPIO 20
    WICED_PLATFORM_GPIO_MAX //!< Max GPIO for error check
} wiced_platform_gpio_number_t;

//! Possible interrupt configuration for platform buttons
typedef enum
{
    WICED_PLATFORM_BUTTON_BOTH_EDGE = GPIO_EN_INT_BOTH_EDGE,   //!< indicates that app. should receive interrupt on both edges
    WICED_PLATFORM_BUTTON_RISING_EDGE = GPIO_EN_INT_RISING_EDGE, //!< indicates that app. should receive interrupt only for rising edge
    WICED_PLATFORM_BUTTON_FALLING_EDGE = GPIO_EN_INT_FALLING_EDGE,//!< indicates that app. should receive interrupt only for falling edge
} wiced_platform_button_interrupt_edge_t;

//! List of pins available on the platform
enum wiced_platform_pins
{
    PLATFORM_GPIO_0,
    PLATFORM_GPIO_1,
    PLATFORM_GPIO_2,
    PLATFORM_GPIO_3,
    PLATFORM_GPIO_4,
    PLATFORM_GPIO_5,
    PLATFORM_GPIO_6,
    PLATFORM_GPIO_7,
    PLATFORM_GPIO_8,
    PLATFORM_GPIO_9,
    PLATFORM_GPIO_10,
    PLATFORM_GPIO_11,
    PLATFORM_GPIO_12,
    PLATFORM_GPIO_13,
    PLATFORM_GPIO_14,
    PLATFORM_GPIO_15,
    PLATFORM_GPIO_16,
    PLATFORM_GPIO_17,
    PLATFORM_GPIO_18,
    PLATFORM_GPIO_19,
    PLATFORM_GPIO_20,
    PLATFORM_GPIO_21,
    PLATFORM_GPIO_22,
    PLATFORM_GPIO_23,
    PLATFORM_GPIO_24,
    PLATFORM_GPIO_25,
    PLATFORM_GPIO_26,
    PLATFORM_GPIO_27,
    PLATFORM_GPIO_28,
    PLATFORM_GPIO_29,
    PLATFORM_GPIO_30,
    PLATFORM_GPIO_31,
    PLATFORM_GPIO_32,
    PLATFORM_GPIO_33,
    PLATFORM_GPIO_34,
    PLATFORM_GPIO_35,
    PLATFORM_GPIO_36,
    PLATFORM_GPIO_37,
    PLATFORM_GPIO_38,
    PLATFORM_GPIO_39,
    PLATFORM_GPIO_MAX_PINS
};

/**
 * configuration for the platform GPIOs
 */
typedef struct
{
    wiced_bt_gpio_numbers_t gpio_pin; /**< WICED GPIO pin */
    wiced_bt_gpio_function_t functionality; /**< chosen functionality for the pin */
}
wiced_platform_gpio_t;

/**
 * Configuration for platform LEDs
 */
typedef struct
{
    wiced_bt_gpio_numbers_t* gpio; /**< WICED GPIO pin */
    uint32_t config; /**< configuration like GPIO_PULL_DOWN,GPIO_PULL_UP etc., */
    uint32_t default_state; /**< GPIO_PIN_OUTPUT_HIGH/GPIO_PIN_OUTPUT_LOW */
}
wiced_platform_led_config_t;

/**
 * Configuration for platform Buttons
 */
typedef struct
{
    wiced_bt_gpio_numbers_t* gpio; /**< WICED GPIO pin */
    uint32_t config; /**< configuration like GPIO_PULL_DOWN,GPIO_PULL_UP etc., interrupt is configured through wiced_platform_register_button_callback(...) */
    uint32_t default_state; /**< GPIO_PIN_OUTPUT_HIGH/GPIO_PIN_OUTPUT_LOW */
    uint32_t button_pressed_value; /**< Button pressed value */
}
wiced_platform_button_config_t;

/**
 * Configuration for platform GPIOs
 */
typedef struct
{
    wiced_bt_gpio_numbers_t* gpio; /**< WICED GPIO pin */
    uint32_t config; /**< configuration like GPIO_PULL_DOWN,GPIO_PULL_UP etc., interrupt is configured through wiced_platform_register_button_callback(...) */
    uint32_t default_state; /**< GPIO_PIN_OUTPUT_HIGH/GPIO_PIN_OUTPUT_LOW */
}
wiced_platform_gpio_config_t;

/*! Max. supported baudrate by this platform */
#define HCI_UART_MAX_BAUD       4000000

/*! default baud rate is 3M, that is the max supported on macOS */
#define HCI_UART_DEFAULT_BAUD   3000000

/* Platform function */
void     wiced_platform_init(void);
uint32_t wiced_platform_get_button_pressed_value(wiced_platform_button_number_t button);

/* utility functions */
void     wiced_platform_register_button_callback(wiced_platform_button_number_t button, void (*userfn)(void*, uint8_t), void* userdata, wiced_platform_button_interrupt_edge_t trigger_edge);

/** \addtogroup Platform config - Default flash (i.e. flash exists on WICED eval boards) configuration.
*   \ingroup HardwareDrivers
*/
/*! @{ */
/******************************************************
 *                   Enumerations
 ******************************************************/
/**
 *  819 uses 512 byte sector, 256KB on chip flash.
 */
#define FLASH_SECTOR_SIZE           (0x200u)
#define FLASH_SIZE                  0x40000
#define FLASH_BASE_ADDRESS          (0x500000u)

/** Number of sectors reserved from the end of the flash for the application
 *  specific purpose (for ex: to log the crash dump). By default no reservation
 Note:- 16K of flash is used for internal firmware operation.
 (Remaining of the flash - reservation) can be divided equally and used for active
 and upgradable firmware. So, application should care the OTA firmware (application+patch)
 size while reserving using below.
 */
#define APPLICATION_SPECIFIC_FLASH_RESERVATION  0
/* @} */

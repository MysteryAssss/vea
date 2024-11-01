/* Copyright 2021-2022 alin m elena <alinm.elena@gmail.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#pragma once

#define SPLIT_LAYER_STATE_ENABLE
#define SPLIT_LED_STATE_ENABLE
#define SELECT_SOFT_SERIAL_SPEED 1
#define SPLIT_WPM_ENABLE
#define SPLIT_TRANSPORT_MIRROR
#define SPLIT_MODS_ENABLE
#define SPLIT_USB_DETECT
// #define SPLIT_HAND_PIN A13
#define SERIAL_USART_DRIVER SD1

#define USE_SERIAL_PD2
#define SOFT_SERIAL_PIN A9
#define SERIAL_USART_TX_PAL_MODE 7

#define I2C_DRIVER I2CD2
#define I2C1_SCL_PIN B13
#define I2C1_SDA_PIN B14
#define I2C1_SCL_PAL_MODE 5
#define I2C1_SDA_PAL_MODE 5

// Define DMA streams for I2C2
#define STM32_I2C_I2C2_RX_DMA_STREAM STM32_DMA_STREAM_ID(1, 5) // DMA1 Channel 5
#define STM32_I2C_I2C2_TX_DMA_STREAM STM32_DMA_STREAM_ID(1, 4) // DMA1 Channel 4
#define STM32_DMA_REQUIRED TRUE


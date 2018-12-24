/*
    __accel7_driver.h

-----------------------------------------------------------------------------

  This file is part of mikroSDK.
  
  Copyright (c) 2017, MikroElektonika - http://www.mikroe.com

  All rights reserved.

----------------------------------------------------------------------------- */

/**
@file   __accel7_driver.h
@brief    Accel7 Driver
@mainpage Accel7 Click
@{

@image html libstock_fb_view.jpg

@}

@defgroup   ACCEL7
@brief      Accel7 Click Driver
@{

| Global Library Prefix | **ACCEL7** |
|:---------------------:|:-----------------:|
| Version               | **1.0.0**    |
| Date                  | **jul 2018.**      |
| Developer             | **Katarina Perendic**     |

*/
/* -------------------------------------------------------------------------- */

#include "stdint.h"

#ifndef _ACCEL7_H_
#define _ACCEL7_H_

/** 
 * @macro T_ACCEL7_P
 * @brief Driver Abstract type 
 */
#define T_ACCEL7_P    const uint8_t*

/** @defgroup ACCEL7_COMPILE Compilation Config */              /** @{ */

//  #define   __ACCEL7_DRV_SPI__                            /**<     @macro __ACCEL7_DRV_SPI__  @brief SPI driver selector */
   #define   __ACCEL7_DRV_I2C__                            /**<     @macro __ACCEL7_DRV_I2C__  @brief I2C driver selector */                                          
// #define   __ACCEL7_DRV_UART__                           /**<     @macro __ACCEL7_DRV_UART__ @brief UART driver selector */ 

                                                                       /** @} */
/** @defgroup ACCEL7_VAR Variables */                           /** @{ */

/* Registers */
extern const uint8_t _ACCEL7_REG_AXIS_X_LSB          ;
extern const uint8_t _ACCEL7_REG_AXIS_X_MSB          ;
extern const uint8_t _ACCEL7_REG_AXIS_Y_LSB          ;
extern const uint8_t _ACCEL7_REG_AXIS_Y_MSB          ;
extern const uint8_t _ACCEL7_REG_AXIS_Z_LSB          ;
extern const uint8_t _ACCEL7_REG_AXIS_Z_MSB          ;
extern const uint8_t _ACCEL7_REG_DCST_RESP           ;
extern const uint8_t _ACCEL7_REG_WHO_AM_I            ;
extern const uint8_t _ACCEL7_REG_INT_SOURCE1         ;
extern const uint8_t _ACCEL7_REG_INT_SOURCE2         ;
extern const uint8_t _ACCEL7_REG_STATUS              ;
extern const uint8_t _ACCEL7_REG_INT_REL             ;
extern const uint8_t _ACCEL7_REG_CTRL_REG1           ;
extern const uint8_t _ACCEL7_REG_CTRL_REG2           ;
extern const uint8_t _ACCEL7_REG_INT_CTRL_REG1       ;
extern const uint8_t _ACCEL7_REG_INT_CTRL_REG2       ;
extern const uint8_t _ACCEL7_REG_DATA_CTRL_REG       ;
extern const uint8_t _ACCEL7_REG_WAKEUP_COUNTER      ;
extern const uint8_t _ACCEL7_REG_NA_CAUNTER          ;
extern const uint8_t _ACCEL7_REG_SELF_TEST           ;
extern const uint8_t _ACCEL7_REG_WAKEUP_THRESHOLD_MSB;
extern const uint8_t _ACCEL7_REG_WAKEUP_THRESHOLD_LSB;

/* Control Regiter 1 */
extern const uint8_t _ACCEL7_CTRL_REG1_MODE_OPERATING     ;
extern const uint8_t _ACCEL7_CTRL_REG1_MODE_STANDBY       ;
extern const uint8_t _ACCEL7_CTRL_REG1_RES_LOW_CURRENT    ;
extern const uint8_t _ACCEL7_CTRL_REG1_RES_HIGH_RESOLUTION;
extern const uint8_t _ACCEL7_CTRL_REG1_DRDYE_ENABLE       ;
extern const uint8_t _ACCEL7_CTRL_REG1_DRDYE_DISABLE      ;
extern const uint8_t _ACCEL7_CTRL_REG1_RANGE_2g           ;
extern const uint8_t _ACCEL7_CTRL_REG1_RANGE_4g           ;
extern const uint8_t _ACCEL7_CTRL_REG1_RANGE_8g           ;
extern const uint8_t _ACCEL7_CTRL_REG1_RANGE_16g          ;
extern const uint8_t _ACCEL7_CTRL_REG1_RANGE_HIGH_RES_8g  ;
extern const uint8_t _ACCEL7_CTRL_REG1_RANGE_HIGH_RES_16g ;
extern const uint8_t _ACCEL7_CTRL_REG1_WAKEUP_DISABLE     ;
extern const uint8_t _ACCEL7_CTRL_REG1_WAKEUP_ENABLE      ;

/* Control Register 2 */
extern const uint8_t _ACCEL7_CTRL_REG2_START_RAM_REBOOT     ;
extern const uint8_t _ACCEL7_CTRL_REG2_DCST_ENABLE          ;
extern const uint8_t _ACCEL7_CTRL_REG2_DCST_DISABLE         ;
extern const uint8_t _ACCEL7_CTRL_REG2_OUT_DATA_RATE_0_781Hz;
extern const uint8_t _ACCEL7_CTRL_REG2_OUT_DATA_RATE_1_563Hz;
extern const uint8_t _ACCEL7_CTRL_REG2_OUT_DATA_RATE_3_125Hz;
extern const uint8_t _ACCEL7_CTRL_REG2_OUT_DATA_RATE_6_25Hz ;
extern const uint8_t _ACCEL7_CTRL_REG2_OUT_DATA_RATE_12_5Hz ;
extern const uint8_t _ACCEL7_CTRL_REG2_OUT_DATA_RATE_25Hz   ;
extern const uint8_t _ACCEL7_CTRL_REG2_OUT_DATA_RATE_50Hz   ;
extern const uint8_t _ACCEL7_CTRL_REG2_OUT_DATA_RATE_100Hz  ;

/* Interrupt control register 1 */
extern const uint8_t _ACCEL7_INT_CTRL_REG1_IEN_DISABLE;
extern const uint8_t _ACCEL7_INT_CTRL_REG1_IEN_ENABLE ;
extern const uint8_t _ACCEL7_INT_CTRL_REG1_IEA_DISABLE;
extern const uint8_t _ACCEL7_INT_CTRL_REG1_IEA_ENABLE ;
extern const uint8_t _ACCEL7_INT_CTRL_REG1_IEL_DISABLE;
extern const uint8_t _ACCEL7_INT_CTRL_REG1_IEL_ENABLE ;
extern const uint8_t _ACCEL7_INT_CTRL_REG1_SELF_TEST_POL_NEGATIVE;
extern const uint8_t _ACCEL7_INT_CTRL_REG1_SELF_TEST_POL_POSITIVE;

/* Interrupt control register 2 */
extern const uint8_t _ACCEL7_INT_CTRL_REG2_ULMODE_ENABLE     ;
extern const uint8_t _ACCEL7_INT_CTRL_REG2_ULMODE_DISABLE    ;
extern const uint8_t _ACCEL7_INT_CTRL_REG2_X_NEGATIVE_ENABLE ;
extern const uint8_t _ACCEL7_INT_CTRL_REG2_X_NEGATIVE_DISABLE;
extern const uint8_t _ACCEL7_INT_CTRL_REG2_Y_NEGATIVE_ENABLE ;
extern const uint8_t _ACCEL7_INT_CTRL_REG2_Y_NEGATIVE_DISABLE;
extern const uint8_t _ACCEL7_INT_CTRL_REG2_Z_NEGATIVE_ENABLE ;
extern const uint8_t _ACCEL7_INT_CTRL_REG2_Z_NEGATIVE_DISABLE;
extern const uint8_t _ACCEL7_INT_CTRL_REG2_X_POSITIVE_ENABLE ;
extern const uint8_t _ACCEL7_INT_CTRL_REG2_X_POSITIVE_DISABLE;
extern const uint8_t _ACCEL7_INT_CTRL_REG2_Y_POSITIVE_ENABLE ;
extern const uint8_t _ACCEL7_INT_CTRL_REG2_Y_POSITIVE_DISABLE;
extern const uint8_t _ACCEL7_INT_CTRL_REG2_Z_POSITIVE_ENABLE ;
extern const uint8_t _ACCEL7_INT_CTRL_REG2_Z_POSITIVE_DISABLE;

/* Data contorl register */
extern const uint8_t _ACCEL7_DATA_CTRL_REG_ODR_0_781Hz;
extern const uint8_t _ACCEL7_DATA_CTRL_REG_ODR_1_563Hz;
extern const uint8_t _ACCEL7_DATA_CTRL_REG_ODR_3_125Hz;
extern const uint8_t _ACCEL7_DATA_CTRL_REG_ODR_6_25Hz ;
extern const uint8_t _ACCEL7_DATA_CTRL_REG_ODR_12_5Hz ;
extern const uint8_t _ACCEL7_DATA_CTRL_REG_ODR_25Hz   ;
extern const uint8_t _ACCEL7_DATA_CTRL_REG_ODR_50Hz   ;
extern const uint8_t _ACCEL7_DATA_CTRL_REG_ODR_100Hz  ;
extern const uint8_t _ACCEL7_DATA_CTRL_REG_ODR_200Hz  ;
extern const uint8_t _ACCEL7_DATA_CTRL_REG_ODR_400Hz  ;
extern const uint8_t _ACCEL7_DATA_CTRL_REG_ODR_800Hz  ;
extern const uint8_t _ACCEL7_DATA_CTRL_REG_ODR_1600Hz ;

extern const uint8_t _ACCEL7_AXIS_X;
extern const uint8_t _ACCEL7_AXIS_Y;
extern const uint8_t _ACCEL7_AXIS_Z;

extern const uint8_t _ACCEL7_DATA_RESP_8bit;
extern const uint8_t _ACCEL7_DATA_RESP_12bit;
extern const uint8_t _ACCEL7_DATA_RESP_14bit;

extern const uint8_t _ACCEL7_RANGE_2g;
extern const uint8_t _ACCEL7_RANGE_4g;
extern const uint8_t _ACCEL7_RANGE_8g;
extern const uint8_t _ACCEL7_RANGE_16g;

                                                                       /** @} */
#ifdef __cplusplus
extern "C"{
#endif

/** @defgroup ACCEL7_INIT Driver Initialization */              /** @{ */

#ifdef   __ACCEL7_DRV_SPI__
void accel7_spiDriverInit(T_ACCEL7_P gpioObj, T_ACCEL7_P spiObj);
#endif
#ifdef   __ACCEL7_DRV_I2C__
void accel7_i2cDriverInit(T_ACCEL7_P gpioObj, T_ACCEL7_P i2cObj, uint8_t slave);
#endif
#ifdef   __ACCEL7_DRV_UART__
void accel7_uartDriverInit(T_ACCEL7_P gpioObj, T_ACCEL7_P uartObj);
#endif

// GPIO Only Drivers - remove in other cases
void accel7_gpioDriverInit(T_ACCEL7_P gpioObj);
                                                                       /** @} */
/** @defgroup ACCEL7_FUNC Driver Functions */                   /** @{ */

/**
 * @brief Functions for write one byte in register
 *
 * @param[in] reg    Register in which the data will be written
 * @param[in] _data  Data which be written in the register
 */
void accel7_writeByte(uint8_t reg, uint8_t _data);

/**
 * @brief Functions for read byte from register
 *
 * @param[in] reg    Register which will be read
 * @retval one byte data which is read from the register
 */
uint8_t accel7_readByte(uint8_t reg);

/**
 * @brief Functions for read axis data
 *
 * @param[ in ] axis    Axis data which will be read
 * @retval Axis data
 */
int16_t accel7_getAxis(uint8_t _axis);


/**
 * @brief Functions for initialize the chip
 *
 * @param[ in ] dataRes      Data resolution (8 bit, 12bit or 14bit)
 * @param[ in ] range        Accelerometer g-range (+-2g, +-4g, +-8g, +-16g)
 *
 * @retval Information whether the chip is successfully initialized or not.
 *
 * Functions initializes accelerometer g-range, Data resolution, 
   operating mode and enable the reporting of the availability of new acceleration data as an interrupt.
 */
uint8_t accel7_init(uint8_t dataRes, uint8_t range);

/**
 * @brief Functions for read INT pin state
 *
 * @retval Interrupt state
 */
uint8_t accel7_getInterruptState();







                                                                       /** @} */
#ifdef __cplusplus
} // extern "C"
#endif
#endif

/**
    @example Click_Accel7_STM.c
    @example Click_Accel7_TIVA.c
    @example Click_Accel7_CEC.c
    @example Click_Accel7_KINETIS.c
    @example Click_Accel7_MSP.c
    @example Click_Accel7_PIC.c
    @example Click_Accel7_PIC32.c
    @example Click_Accel7_DSPIC.c
    @example Click_Accel7_AVR.c
    @example Click_Accel7_FT90x.c
    @example Click_Accel7_STM.mbas
    @example Click_Accel7_TIVA.mbas
    @example Click_Accel7_CEC.mbas
    @example Click_Accel7_KINETIS.mbas
    @example Click_Accel7_MSP.mbas
    @example Click_Accel7_PIC.mbas
    @example Click_Accel7_PIC32.mbas
    @example Click_Accel7_DSPIC.mbas
    @example Click_Accel7_AVR.mbas
    @example Click_Accel7_FT90x.mbas
    @example Click_Accel7_STM.mpas
    @example Click_Accel7_TIVA.mpas
    @example Click_Accel7_CEC.mpas
    @example Click_Accel7_KINETIS.mpas
    @example Click_Accel7_MSP.mpas
    @example Click_Accel7_PIC.mpas
    @example Click_Accel7_PIC32.mpas
    @example Click_Accel7_DSPIC.mpas
    @example Click_Accel7_AVR.mpas
    @example Click_Accel7_FT90x.mpas
*/                                                                     /** @} */
/* -------------------------------------------------------------------------- */
/*
  __accel7_driver.h

  Copyright (c) 2017, MikroElektonika - http://www.mikroe.com

  All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright
   notice, this list of conditions and the following disclaimer.

2. Redistributions in binary form must reproduce the above copyright
   notice, this list of conditions and the following disclaimer in the
   documentation and/or other materials provided with the distribution.

3. All advertising materials mentioning features or use of this software
   must display the following acknowledgement:
   This product includes software developed by the MikroElektonika.

4. Neither the name of the MikroElektonika nor the
   names of its contributors may be used to endorse or promote products
   derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY MIKROELEKTRONIKA ''AS IS'' AND ANY
EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL MIKROELEKTRONIKA BE LIABLE FOR ANY
DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

----------------------------------------------------------------------------- */
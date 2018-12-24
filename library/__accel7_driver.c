/*
    __accel7_driver.c

-----------------------------------------------------------------------------

  This file is part of mikroSDK.

  Copyright (c) 2017, MikroElektonika - http://www.mikroe.com

  All rights reserved.

----------------------------------------------------------------------------- */

#include "__accel7_driver.h"
#include "__accel7_hal.c"

/* ------------------------------------------------------------------- MACROS */

const uint8_t _ACCEL7_AXIS_X  = 0x06;
const uint8_t _ACCEL7_AXIS_Y  = 0x08;
const uint8_t _ACCEL7_AXIS_Z  = 0x0A;

const uint8_t _ACCEL7_DATA_RESP_8bit   = 0x10;
const uint8_t _ACCEL7_DATA_RESP_12bit  = 0x20;
const uint8_t _ACCEL7_DATA_RESP_14bit  = 0x30;

const uint8_t _ACCEL7_RANGE_2g   = 0x01;
const uint8_t _ACCEL7_RANGE_4g   = 0x02;
const uint8_t _ACCEL7_RANGE_8g   = 0x03;
const uint8_t _ACCEL7_RANGE_16g  = 0x04;

/* Registers */
const uint8_t _ACCEL7_REG_AXIS_X_LSB           = 0x06;
const uint8_t _ACCEL7_REG_AXIS_X_MSB           = 0x07;
const uint8_t _ACCEL7_REG_AXIS_Y_LSB           = 0x08;
const uint8_t _ACCEL7_REG_AXIS_Y_MSB           = 0x09;
const uint8_t _ACCEL7_REG_AXIS_Z_LSB           = 0x0A;
const uint8_t _ACCEL7_REG_AXIS_Z_MSB           = 0x0B;
const uint8_t _ACCEL7_REG_DCST_RESP            = 0x0C;
const uint8_t _ACCEL7_REG_WHO_AM_I             = 0x0F;
const uint8_t _ACCEL7_REG_INT_SOURCE1          = 0x16;
const uint8_t _ACCEL7_REG_INT_SOURCE2          = 0x17;
const uint8_t _ACCEL7_REG_STATUS               = 0x18;
const uint8_t _ACCEL7_REG_INT_REL              = 0x1A;
const uint8_t _ACCEL7_REG_CTRL_REG1            = 0x1B;
const uint8_t _ACCEL7_REG_CTRL_REG2            = 0x1D;
const uint8_t _ACCEL7_REG_INT_CTRL_REG1        = 0x1E;
const uint8_t _ACCEL7_REG_INT_CTRL_REG2        = 0x1F;
const uint8_t _ACCEL7_REG_DATA_CTRL_REG        = 0x21;
const uint8_t _ACCEL7_REG_WAKEUP_COUNTER       = 0x29;
const uint8_t _ACCEL7_REG_NA_CAUNTER           = 0x2A;
const uint8_t _ACCEL7_REG_SELF_TEST            = 0x3A;
const uint8_t _ACCEL7_REG_WAKEUP_THRESHOLD_MSB = 0x6A;
const uint8_t _ACCEL7_REG_WAKEUP_THRESHOLD_LSB = 0x6B;

/* Control Regiter 1 */
const uint8_t _ACCEL7_CTRL_REG1_MODE_OPERATING      = 0x80;
const uint8_t _ACCEL7_CTRL_REG1_MODE_STANDBY        = 0x00;
const uint8_t _ACCEL7_CTRL_REG1_RES_LOW_CURRENT     = 0x00;
const uint8_t _ACCEL7_CTRL_REG1_RES_HIGH_RESOLUTION = 0x40;
const uint8_t _ACCEL7_CTRL_REG1_DRDYE_ENABLE        = 0x20;
const uint8_t _ACCEL7_CTRL_REG1_DRDYE_DISABLE       = 0x00;
const uint8_t _ACCEL7_CTRL_REG1_RANGE_2g            = 0x00;
const uint8_t _ACCEL7_CTRL_REG1_RANGE_4g            = 0x08;
const uint8_t _ACCEL7_CTRL_REG1_RANGE_8g            = 0x10;
const uint8_t _ACCEL7_CTRL_REG1_RANGE_16g           = 0x04;
const uint8_t _ACCEL7_CTRL_REG1_RANGE_HIGH_RES_8g   = 0x18;
const uint8_t _ACCEL7_CTRL_REG1_RANGE_HIGH_RES_16g  = 0x1C;
const uint8_t _ACCEL7_CTRL_REG1_WAKEUP_DISABLE      = 0x00;
const uint8_t _ACCEL7_CTRL_REG1_WAKEUP_ENABLE       = 0x02;

/* Control Register 2 */
const uint8_t _ACCEL7_CTRL_REG2_START_RAM_REBOOT       = 0x80;
const uint8_t _ACCEL7_CTRL_REG2_DCST_ENABLE            = 0x10;
const uint8_t _ACCEL7_CTRL_REG2_DCST_DISABLE           = 0x00;
const uint8_t _ACCEL7_CTRL_REG2_OUT_DATA_RATE_0_781Hz  = 0x00;
const uint8_t _ACCEL7_CTRL_REG2_OUT_DATA_RATE_1_563Hz  = 0x01;
const uint8_t _ACCEL7_CTRL_REG2_OUT_DATA_RATE_3_125Hz  = 0x02;
const uint8_t _ACCEL7_CTRL_REG2_OUT_DATA_RATE_6_25Hz   = 0x03;
const uint8_t _ACCEL7_CTRL_REG2_OUT_DATA_RATE_12_5Hz   = 0x04;
const uint8_t _ACCEL7_CTRL_REG2_OUT_DATA_RATE_25Hz     = 0x05;
const uint8_t _ACCEL7_CTRL_REG2_OUT_DATA_RATE_50Hz     = 0x06;
const uint8_t _ACCEL7_CTRL_REG2_OUT_DATA_RATE_100Hz    = 0x07;

/* Interrupt control register 1 */
const uint8_t _ACCEL7_INT_CTRL_REG1_IEN_DISABLE  = 0x00;
const uint8_t _ACCEL7_INT_CTRL_REG1_IEN_ENABLE   = 0x20;
const uint8_t _ACCEL7_INT_CTRL_REG1_IEA_DISABLE  = 0x00;
const uint8_t _ACCEL7_INT_CTRL_REG1_IEA_ENABLE   = 0x10;
const uint8_t _ACCEL7_INT_CTRL_REG1_IEL_DISABLE  = 0x00;
const uint8_t _ACCEL7_INT_CTRL_REG1_IEL_ENABLE   = 0x08;
const uint8_t _ACCEL7_INT_CTRL_REG1_SELF_TEST_POL_NEGATIVE  = 0x00;
const uint8_t _ACCEL7_INT_CTRL_REG1_SELF_TEST_POL_POSITIVE  = 0x02;

/* Interrupt control register 2 */
const uint8_t _ACCEL7_INT_CTRL_REG2_ULMODE_ENABLE       = 0x80;
const uint8_t _ACCEL7_INT_CTRL_REG2_ULMODE_DISABLE      = 0x00;
const uint8_t _ACCEL7_INT_CTRL_REG2_X_NEGATIVE_ENABLE   = 0x20;
const uint8_t _ACCEL7_INT_CTRL_REG2_X_NEGATIVE_DISABLE  = 0x00;
const uint8_t _ACCEL7_INT_CTRL_REG2_Y_NEGATIVE_ENABLE   = 0x08;
const uint8_t _ACCEL7_INT_CTRL_REG2_Y_NEGATIVE_DISABLE  = 0x00;
const uint8_t _ACCEL7_INT_CTRL_REG2_Z_NEGATIVE_ENABLE   = 0x02;
const uint8_t _ACCEL7_INT_CTRL_REG2_Z_NEGATIVE_DISABLE  = 0x00;
const uint8_t _ACCEL7_INT_CTRL_REG2_X_POSITIVE_ENABLE   = 0x10;
const uint8_t _ACCEL7_INT_CTRL_REG2_X_POSITIVE_DISABLE  = 0x00;
const uint8_t _ACCEL7_INT_CTRL_REG2_Y_POSITIVE_ENABLE   = 0x04;
const uint8_t _ACCEL7_INT_CTRL_REG2_Y_POSITIVE_DISABLE  = 0x00;
const uint8_t _ACCEL7_INT_CTRL_REG2_Z_POSITIVE_ENABLE   = 0x01;
const uint8_t _ACCEL7_INT_CTRL_REG2_Z_POSITIVE_DISABLE  = 0x00;

/* Data contorl register */
const uint8_t _ACCEL7_DATA_CTRL_REG_ODR_0_781Hz   = 0x08;
const uint8_t _ACCEL7_DATA_CTRL_REG_ODR_1_563Hz   = 0x09;
const uint8_t _ACCEL7_DATA_CTRL_REG_ODR_3_125Hz   = 0x0A;
const uint8_t _ACCEL7_DATA_CTRL_REG_ODR_6_25Hz    = 0x0B;
const uint8_t _ACCEL7_DATA_CTRL_REG_ODR_12_5Hz    = 0x00;
const uint8_t _ACCEL7_DATA_CTRL_REG_ODR_25Hz      = 0x01;
const uint8_t _ACCEL7_DATA_CTRL_REG_ODR_50Hz      = 0x02;
const uint8_t _ACCEL7_DATA_CTRL_REG_ODR_100Hz     = 0x03;
const uint8_t _ACCEL7_DATA_CTRL_REG_ODR_200Hz     = 0x04;
const uint8_t _ACCEL7_DATA_CTRL_REG_ODR_400Hz     = 0x05;
const uint8_t _ACCEL7_DATA_CTRL_REG_ODR_800Hz     = 0x06;
const uint8_t _ACCEL7_DATA_CTRL_REG_ODR_1600Hz    = 0x07;

/* ---------------------------------------------------------------- VARIABLES */

#ifdef   __ACCEL7_DRV_I2C__
static uint8_t _slaveAddress;
#endif

static const uint8_t DEVICE_OK = 0x00;
static const uint8_t DEVICE_ERROR = 0x01;
static uint8_t _dataResolution = 0;

/* -------------------------------------------- PRIVATE FUNCTION DECLARATIONS */

static uint8_t _checkStatus();

/* --------------------------------------------- PRIVATE FUNCTION DEFINITIONS */

static uint8_t _checkStatus()
{
    uint8_t status;
    
    status = accel7_readByte(_ACCEL7_REG_INT_SOURCE1);
    if((status & 0x10) != 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

/* --------------------------------------------------------- PUBLIC FUNCTIONS */

#ifdef   __ACCEL7_DRV_SPI__

void accel7_spiDriverInit(T_ACCEL7_P gpioObj, T_ACCEL7_P spiObj)
{
    hal_spiMap( (T_HAL_P)spiObj );
    hal_gpioMap( (T_HAL_P)gpioObj );
}

#endif
#ifdef   __ACCEL7_DRV_I2C__

void accel7_i2cDriverInit(T_ACCEL7_P gpioObj, T_ACCEL7_P i2cObj, uint8_t slave)
{
    _slaveAddress = slave;
    hal_i2cMap( (T_HAL_P)i2cObj );
    hal_gpioMap( (T_HAL_P)gpioObj );
}

#endif
#ifdef   __ACCEL7_DRV_UART__

void accel7_uartDriverInit(T_ACCEL7_P gpioObj, T_ACCEL7_P uartObj)
{
    hal_uartMap( (T_HAL_P)uartObj );
    hal_gpioMap( (T_HAL_P)gpioObj );
}

#endif

/* ----------------------------------------------------------- IMPLEMENTATION */

void accel7_writeByte(uint8_t reg, uint8_t _data)
{
    uint8_t writeReg[ 2 ];
    
    writeReg[ 0 ] = reg;
    writeReg[ 1 ] = _data;
    
    hal_i2cStart();
    hal_i2cWrite(_slaveAddress, writeReg, 2, END_MODE_STOP);
}

uint8_t accel7_readByte(uint8_t reg)
{
    uint8_t writeReg[ 1 ];
    uint8_t readReg[ 1 ];
    
    writeReg[ 0 ] = reg;
    
    hal_i2cStart();
    hal_i2cWrite(_slaveAddress, writeReg, 1, END_MODE_RESTART);
    hal_i2cRead(_slaveAddress, readReg, 1, END_MODE_STOP);
    
    return readReg[ 0 ];
}

int16_t accel7_getAxis(uint8_t _axis)
{
    uint8_t writeReg[ 1 ];
    uint8_t readReg[ 2 ];
    int16_t AxisData;
    uint8_t ctrl_reg1;
    
    writeReg[ 0 ] = _axis;

    while(_checkStatus() != 0)
    {
        Delay_10us();
    };

    AxisData = accel7_readByte(_axis + 1);
    AxisData = AxisData << 8;
    AxisData = AxisData | accel7_readByte( _axis );
        
    if(_dataResolution == _ACCEL7_DATA_RESP_12bit)
    {
        AxisData = (AxisData >> 4);
    }
    else if (_dataResolution == _ACCEL7_DATA_RESP_14bit)
    {
        AxisData = (AxisData >> 2);
    }
    else
    {
        AxisData = (AxisData >> 8);
    }

    return AxisData;
}

uint8_t accel7_init(uint8_t dataRes, uint8_t range)
{
    uint8_t I_AM;
    uint8_t setRes;
    uint8_t setRange;
        
    I_AM = accel7_readByte(_ACCEL7_REG_WHO_AM_I);
    
    if(I_AM != 0x35)
    {
        return DEVICE_ERROR;
    }
    
    /*Data resolution 8bit, 12bit and 14bit*/      
    /* Axis range +-2g, +-4g, +-8g and +-16g*/
    _dataResolution = dataRes;
    
    if((_dataResolution == _ACCEL7_DATA_RESP_12bit))
    {
        if(range == _ACCEL7_RANGE_8g)
        {
            setRange = _ACCEL7_CTRL_REG1_RANGE_8g;
        }
        else if (range == _ACCEL7_RANGE_16g)
        {
            setRange = _ACCEL7_CTRL_REG1_RANGE_16g;
        }
        else
        {
            setRange = _ACCEL7_CTRL_REG1_RANGE_4g;
        }
        setRes = _ACCEL7_CTRL_REG1_RES_HIGH_RESOLUTION;
    }
    else if((_dataResolution == _ACCEL7_DATA_RESP_14bit))
    {
        if (range == _ACCEL7_RANGE_16g)
        {
            setRange = _ACCEL7_CTRL_REG1_RANGE_16g;
        }
        else
        {
            setRange = _ACCEL7_CTRL_REG1_RANGE_8g;
        }
        setRes = _ACCEL7_CTRL_REG1_RES_HIGH_RESOLUTION;
    }
    else
    {
        if (range == _ACCEL7_RANGE_16g)
        {
            setRange = _ACCEL7_CTRL_REG1_RANGE_16g;
        }
        else if (range == _ACCEL7_RANGE_8g)
        {
            setRange = _ACCEL7_CTRL_REG1_RANGE_8g;
        }
        else if (range == _ACCEL7_RANGE_4g)
        {
            setRange = _ACCEL7_CTRL_REG1_RANGE_4g;
        }
        else
        {
            setRange = _ACCEL7_CTRL_REG1_RANGE_2g;
        }
        setRes = _ACCEL7_CTRL_REG1_RES_HIGH_RESOLUTION;
    }
    
    accel7_writeByte(_ACCEL7_REG_CTRL_REG1,
                     _ACCEL7_CTRL_REG1_MODE_OPERATING |
                     _ACCEL7_CTRL_REG1_DRDYE_ENABLE | 
                     setRes |
                     setRange);

    return DEVICE_OK;
}

uint8_t accel7_getInterruptState()
{
    return hal_gpio_intGet();
}





/* -------------------------------------------------------------------------- */
/*
  __accel7_driver.c

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
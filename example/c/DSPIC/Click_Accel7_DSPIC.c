/*
Example for Accel7 Click

    Date          : jul 2018.
    Author        : Katarina Perendic

Test configuration dsPIC :
    
    MCU                : P33FJ256GP710A
    Dev. Board         : EasyPIC Fusion v7
    dsPIC Compiler ver : v7.1.0.0

---

Description :

The application is composed of three sections :

- System Initialization - Initializes I2C module and set INT pin as INPUT
- Application Initialization - Initializes Driver init and settings accelerometer data range and 
                               data resolution which are necessary for the init chip.
- Application Task - (code snippet) - Reads the accel X / Y / Z axis data.

*/

#include "Click_Accel7_types.h"
#include "Click_Accel7_config.h"

int16_t X_axis = 0;
int16_t Y_axis = 0;
int16_t Z_axis = 0;
char demoText[ 20 ] = {0};

void systemInit()
{
    mikrobus_gpioInit( _MIKROBUS1, _MIKROBUS_INT_PIN, _GPIO_INPUT );
    mikrobus_i2cInit( _MIKROBUS1, &_ACCEL7_I2C_CFG[0] );
    mikrobus_logInit( _LOG_USBUART_A, 115200 );
    mikrobus_logWrite( "--- System init ---", _LOG_LINE);
    Delay_ms( 100 );
}

void applicationInit()
{
    accel7_i2cDriverInit( (T_ACCEL7_P)&_MIKROBUS1_GPIO, (T_ACCEL7_P)&_MIKROBUS1_I2C, 0x0F );
    accel7_init(_ACCEL7_DATA_RESP_14bit, _ACCEL7_RANGE_8g);
    Delay_ms(100);
}

void applicationTask()
{
    X_axis = accel7_getAxis(_ACCEL7_AXIS_X);
    IntToStr(X_axis, demoText);
    mikrobus_logWrite("X axis:  ", _LOG_TEXT);
    mikrobus_logWrite(demoText, _LOG_LINE);
    
    Y_axis = accel7_getAxis(_ACCEL7_AXIS_Y);
    IntToStr(Y_axis, demoText);
    mikrobus_logWrite("Y axis:  ", _LOG_TEXT);
    mikrobus_logWrite(demoText, _LOG_LINE);

    Z_axis = accel7_getAxis(_ACCEL7_AXIS_Z);
    IntToStr(Z_axis, demoText);
    mikrobus_logWrite("Z axis:  ", _LOG_TEXT);
    mikrobus_logWrite(demoText, _LOG_LINE);
    
    mikrobus_logWrite("  ", _LOG_LINE);
    Delay_ms( 1000 );
}

void main()
{
    systemInit();
    applicationInit();

    while (1)
    {
            applicationTask();
    }
}
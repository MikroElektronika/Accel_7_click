#line 1 "C:/Users/katarina.perendic/Desktop/Accel_7_Click/example/c/ARM/STM/Click_Accel7_STM.c"
#line 1 "c:/users/katarina.perendic/desktop/accel_7_click/example/c/arm/stm/click_accel7_types.h"
#line 1 "c:/users/public/documents/mikroelektronika/mikroc pro for arm/include/stdint.h"





typedef signed char int8_t;
typedef signed int int16_t;
typedef signed long int int32_t;
typedef signed long long int64_t;


typedef unsigned char uint8_t;
typedef unsigned int uint16_t;
typedef unsigned long int uint32_t;
typedef unsigned long long uint64_t;


typedef signed char int_least8_t;
typedef signed int int_least16_t;
typedef signed long int int_least32_t;
typedef signed long long int_least64_t;


typedef unsigned char uint_least8_t;
typedef unsigned int uint_least16_t;
typedef unsigned long int uint_least32_t;
typedef unsigned long long uint_least64_t;



typedef signed long int int_fast8_t;
typedef signed long int int_fast16_t;
typedef signed long int int_fast32_t;
typedef signed long long int_fast64_t;


typedef unsigned long int uint_fast8_t;
typedef unsigned long int uint_fast16_t;
typedef unsigned long int uint_fast32_t;
typedef unsigned long long uint_fast64_t;


typedef signed long int intptr_t;
typedef unsigned long int uintptr_t;


typedef signed long long intmax_t;
typedef unsigned long long uintmax_t;
#line 1 "c:/users/katarina.perendic/desktop/accel_7_click/example/c/arm/stm/click_accel7_config.h"
#line 1 "c:/users/katarina.perendic/desktop/accel_7_click/example/c/arm/stm/click_accel7_types.h"
#line 19 "c:/users/katarina.perendic/desktop/accel_7_click/example/c/arm/stm/click_accel7_config.h"
const uint32_t _ACCEL7_I2C_CFG[ 1 ] =
{
 100000
};
#line 1 "c:/users/katarina.perendic/desktop/accel_7_click/library/__accel7_driver.h"
#line 1 "c:/users/public/documents/mikroelektronika/mikroc pro for arm/include/stdint.h"
#line 58 "c:/users/katarina.perendic/desktop/accel_7_click/library/__accel7_driver.h"
extern const uint8_t _ACCEL7_REG_AXIS_X_LSB ;
extern const uint8_t _ACCEL7_REG_AXIS_X_MSB ;
extern const uint8_t _ACCEL7_REG_AXIS_Y_LSB ;
extern const uint8_t _ACCEL7_REG_AXIS_Y_MSB ;
extern const uint8_t _ACCEL7_REG_AXIS_Z_LSB ;
extern const uint8_t _ACCEL7_REG_AXIS_Z_MSB ;
extern const uint8_t _ACCEL7_REG_DCST_RESP ;
extern const uint8_t _ACCEL7_REG_WHO_AM_I ;
extern const uint8_t _ACCEL7_REG_INT_SOURCE1 ;
extern const uint8_t _ACCEL7_REG_INT_SOURCE2 ;
extern const uint8_t _ACCEL7_REG_STATUS ;
extern const uint8_t _ACCEL7_REG_INT_REL ;
extern const uint8_t _ACCEL7_REG_CTRL_REG1 ;
extern const uint8_t _ACCEL7_REG_CTRL_REG2 ;
extern const uint8_t _ACCEL7_REG_INT_CTRL_REG1 ;
extern const uint8_t _ACCEL7_REG_INT_CTRL_REG2 ;
extern const uint8_t _ACCEL7_REG_DATA_CTRL_REG ;
extern const uint8_t _ACCEL7_REG_WAKEUP_COUNTER ;
extern const uint8_t _ACCEL7_REG_NA_CAUNTER ;
extern const uint8_t _ACCEL7_REG_SELF_TEST ;
extern const uint8_t _ACCEL7_REG_WAKEUP_THRESHOLD_MSB;
extern const uint8_t _ACCEL7_REG_WAKEUP_THRESHOLD_LSB;


extern const uint8_t _ACCEL7_CTRL_REG1_MODE_OPERATING ;
extern const uint8_t _ACCEL7_CTRL_REG1_MODE_STANDBY ;
extern const uint8_t _ACCEL7_CTRL_REG1_RES_LOW_CURRENT ;
extern const uint8_t _ACCEL7_CTRL_REG1_RES_HIGH_RESOLUTION;
extern const uint8_t _ACCEL7_CTRL_REG1_DRDYE_ENABLE ;
extern const uint8_t _ACCEL7_CTRL_REG1_DRDYE_DISABLE ;
extern const uint8_t _ACCEL7_CTRL_REG1_RANGE_2g ;
extern const uint8_t _ACCEL7_CTRL_REG1_RANGE_4g ;
extern const uint8_t _ACCEL7_CTRL_REG1_RANGE_8g ;
extern const uint8_t _ACCEL7_CTRL_REG1_RANGE_16g ;
extern const uint8_t _ACCEL7_CTRL_REG1_RANGE_HIGH_RES_8g ;
extern const uint8_t _ACCEL7_CTRL_REG1_RANGE_HIGH_RES_16g ;
extern const uint8_t _ACCEL7_CTRL_REG1_WAKEUP_DISABLE ;
extern const uint8_t _ACCEL7_CTRL_REG1_WAKEUP_ENABLE ;


extern const uint8_t _ACCEL7_CTRL_REG2_START_RAM_REBOOT ;
extern const uint8_t _ACCEL7_CTRL_REG2_DCST_ENABLE ;
extern const uint8_t _ACCEL7_CTRL_REG2_DCST_DISABLE ;
extern const uint8_t _ACCEL7_CTRL_REG2_OUT_DATA_RATE_0_781Hz;
extern const uint8_t _ACCEL7_CTRL_REG2_OUT_DATA_RATE_1_563Hz;
extern const uint8_t _ACCEL7_CTRL_REG2_OUT_DATA_RATE_3_125Hz;
extern const uint8_t _ACCEL7_CTRL_REG2_OUT_DATA_RATE_6_25Hz ;
extern const uint8_t _ACCEL7_CTRL_REG2_OUT_DATA_RATE_12_5Hz ;
extern const uint8_t _ACCEL7_CTRL_REG2_OUT_DATA_RATE_25Hz ;
extern const uint8_t _ACCEL7_CTRL_REG2_OUT_DATA_RATE_50Hz ;
extern const uint8_t _ACCEL7_CTRL_REG2_OUT_DATA_RATE_100Hz ;


extern const uint8_t _ACCEL7_INT_CTRL_REG1_IEN_DISABLE;
extern const uint8_t _ACCEL7_INT_CTRL_REG1_IEN_ENABLE ;
extern const uint8_t _ACCEL7_INT_CTRL_REG1_IEA_DISABLE;
extern const uint8_t _ACCEL7_INT_CTRL_REG1_IEA_ENABLE ;
extern const uint8_t _ACCEL7_INT_CTRL_REG1_IEL_DISABLE;
extern const uint8_t _ACCEL7_INT_CTRL_REG1_IEL_ENABLE ;
extern const uint8_t _ACCEL7_INT_CTRL_REG1_SELF_TEST_POL_NEGATIVE;
extern const uint8_t _ACCEL7_INT_CTRL_REG1_SELF_TEST_POL_POSITIVE;


extern const uint8_t _ACCEL7_INT_CTRL_REG2_ULMODE_ENABLE ;
extern const uint8_t _ACCEL7_INT_CTRL_REG2_ULMODE_DISABLE ;
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


extern const uint8_t _ACCEL7_DATA_CTRL_REG_ODR_0_781Hz;
extern const uint8_t _ACCEL7_DATA_CTRL_REG_ODR_1_563Hz;
extern const uint8_t _ACCEL7_DATA_CTRL_REG_ODR_3_125Hz;
extern const uint8_t _ACCEL7_DATA_CTRL_REG_ODR_6_25Hz ;
extern const uint8_t _ACCEL7_DATA_CTRL_REG_ODR_12_5Hz ;
extern const uint8_t _ACCEL7_DATA_CTRL_REG_ODR_25Hz ;
extern const uint8_t _ACCEL7_DATA_CTRL_REG_ODR_50Hz ;
extern const uint8_t _ACCEL7_DATA_CTRL_REG_ODR_100Hz ;
extern const uint8_t _ACCEL7_DATA_CTRL_REG_ODR_200Hz ;
extern const uint8_t _ACCEL7_DATA_CTRL_REG_ODR_400Hz ;
extern const uint8_t _ACCEL7_DATA_CTRL_REG_ODR_800Hz ;
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
#line 174 "c:/users/katarina.perendic/desktop/accel_7_click/library/__accel7_driver.h"
void accel7_i2cDriverInit( const uint8_t*  gpioObj,  const uint8_t*  i2cObj, uint8_t slave);
#line 181 "c:/users/katarina.perendic/desktop/accel_7_click/library/__accel7_driver.h"
void accel7_gpioDriverInit( const uint8_t*  gpioObj);



void accel7_writeByte(uint8_t reg, uint8_t _data);

uint8_t accel7_readByte(uint8_t reg);

int16_t accel7_getAxis(uint8_t _axis);

uint8_t accel7_init(uint8_t dataRes, uint8_t range);

uint8_t accel7_getInterruptState();
#line 29 "C:/Users/katarina.perendic/Desktop/Accel_7_Click/example/c/ARM/STM/Click_Accel7_STM.c"
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
 accel7_i2cDriverInit( ( const uint8_t* )&_MIKROBUS1_GPIO, ( const uint8_t* )&_MIKROBUS1_I2C, 0x0F );
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

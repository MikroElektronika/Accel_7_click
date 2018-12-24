![MikroE](http://www.mikroe.com/img/designs/beta/logo_small.png)

---

# Accel7 Click

- **CIC Prefix**  : ACCEL7
- **Author**      : Katarina Perendic
- **Verison**     : 1.0.0
- **Date**        : jul 2018.

---

### Software Support

We provide a library for the Accel7 Click on our [LibStock](https://libstock.mikroe.com/projects/view/2479/accel-7-click) 
page, as well as a demo application (example), developed using MikroElektronika 
[compilers](http://shop.mikroe.com/compilers). The demo can run on all the main 
MikroElektronika [development boards](http://shop.mikroe.com/development-boards).

**Library Description**

The library initializes and defines the I2C bus driver and drivers that offer a choice for writing data in register.
The library includes function for read X/Y/Z axis data.
The user also has the function for initializes chip and function for read interrupt state.

Key functions :

- ``` int16_t accel7_getAxis(uint8_t _axis) ``` - Functions for read axis data
- ``` uint8_t accel7_init(uint8_t dataRes, uint8_t range) ``` - Functions for initialize the chip 

**Examples Description**

The application is composed of three sections :

- System Initialization - Initializes I2C module and set INT pin as INPUT
- Application Initialization - Initializes Driver init and settings accelerometer data range and 
                               data resolution which are necessary for the init chip.
- Application Task - (code snippet) - Reads the accel X / Y / Z axis data.


```.c
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
```

The full application code, and ready to use projects can be found on our 
[LibStock](https://libstock.mikroe.com/projects/view/2479/accel-7-click) page.

Other mikroE Libraries used in the example:

- I2C
- UART
- Conversions

**Additional notes and informations**

Depending on the development board you are using, you may need 
[USB UART click](http://shop.mikroe.com/usb-uart-click), 
[USB UART 2 Click](http://shop.mikroe.com/usb-uart-2-click) or 
[RS232 Click](http://shop.mikroe.com/rs232-click) to connect to your PC, for 
development systems with no UART to USB interface available on the board. The 
terminal available in all Mikroelektronika 
[compilers](http://shop.mikroe.com/compilers), or any other terminal application 
of your choice, can be used to read the message.

---
### Architectures Supported

#### mikroC

| STM | KIN | CEC | MSP | TIVA | PIC | PIC32 | DSPIC | AVR | FT90x |
|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|
| x | x | x | x | x | x | x | x | x | x |

#### mikroBasic

| STM | KIN | CEC | MSP | TIVA | PIC | PIC32 | DSPIC | AVR | FT90x |
|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|
| x | x | x | x | x | x | x | x | x | x |

#### mikroPascal

| STM | KIN | CEC | MSP | TIVA | PIC | PIC32 | DSPIC | AVR | FT90x |
|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|
| x | x | x | x | x | x | x | x | x | x |

---
---

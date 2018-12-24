_systemInit:
;Click_Accel7_STM.c,34 :: 		void systemInit()
SUB	SP, SP, #4
STR	LR, [SP, #0]
;Click_Accel7_STM.c,36 :: 		mikrobus_gpioInit( _MIKROBUS1, _MIKROBUS_INT_PIN, _GPIO_INPUT );
MOVS	R2, #1
MOVS	R1, #7
MOVS	R0, #0
BL	_mikrobus_gpioInit+0
;Click_Accel7_STM.c,37 :: 		mikrobus_i2cInit( _MIKROBUS1, &_ACCEL7_I2C_CFG[0] );
MOVW	R0, #lo_addr(__ACCEL7_I2C_CFG+0)
MOVT	R0, #hi_addr(__ACCEL7_I2C_CFG+0)
MOV	R1, R0
MOVS	R0, #0
BL	_mikrobus_i2cInit+0
;Click_Accel7_STM.c,38 :: 		mikrobus_logInit( _LOG_USBUART_A, 115200 );
MOV	R1, #115200
MOVS	R0, #32
BL	_mikrobus_logInit+0
;Click_Accel7_STM.c,39 :: 		mikrobus_logWrite( "--- System init ---", _LOG_LINE);
MOVW	R0, #lo_addr(?lstr1_Click_Accel7_STM+0)
MOVT	R0, #hi_addr(?lstr1_Click_Accel7_STM+0)
MOVS	R1, #2
BL	_mikrobus_logWrite+0
;Click_Accel7_STM.c,40 :: 		Delay_ms( 100 );
MOVW	R7, #20351
MOVT	R7, #18
NOP
NOP
L_systemInit0:
SUBS	R7, R7, #1
BNE	L_systemInit0
NOP
NOP
NOP
;Click_Accel7_STM.c,41 :: 		}
L_end_systemInit:
LDR	LR, [SP, #0]
ADD	SP, SP, #4
BX	LR
; end of _systemInit
_applicationInit:
;Click_Accel7_STM.c,43 :: 		void applicationInit()
SUB	SP, SP, #4
STR	LR, [SP, #0]
;Click_Accel7_STM.c,45 :: 		accel7_i2cDriverInit( (T_ACCEL7_P)&_MIKROBUS1_GPIO, (T_ACCEL7_P)&_MIKROBUS1_I2C, 0x0F );
MOVS	R2, #15
MOVW	R1, #lo_addr(__MIKROBUS1_I2C+0)
MOVT	R1, #hi_addr(__MIKROBUS1_I2C+0)
MOVW	R0, #lo_addr(__MIKROBUS1_GPIO+0)
MOVT	R0, #hi_addr(__MIKROBUS1_GPIO+0)
BL	_accel7_i2cDriverInit+0
;Click_Accel7_STM.c,46 :: 		accel7_init(_ACCEL7_DATA_RESP_14bit, _ACCEL7_RANGE_8g);
MOVS	R1, __ACCEL7_RANGE_8g
MOVS	R0, __ACCEL7_DATA_RESP_14bit
BL	_accel7_init+0
;Click_Accel7_STM.c,47 :: 		Delay_ms(100);
MOVW	R7, #20351
MOVT	R7, #18
NOP
NOP
L_applicationInit2:
SUBS	R7, R7, #1
BNE	L_applicationInit2
NOP
NOP
NOP
;Click_Accel7_STM.c,48 :: 		}
L_end_applicationInit:
LDR	LR, [SP, #0]
ADD	SP, SP, #4
BX	LR
; end of _applicationInit
_applicationTask:
;Click_Accel7_STM.c,50 :: 		void applicationTask()
SUB	SP, SP, #4
STR	LR, [SP, #0]
;Click_Accel7_STM.c,52 :: 		X_axis = accel7_getAxis(_ACCEL7_AXIS_X);
MOVS	R0, __ACCEL7_AXIS_X
BL	_accel7_getAxis+0
MOVW	R1, #lo_addr(_X_axis+0)
MOVT	R1, #hi_addr(_X_axis+0)
STRH	R0, [R1, #0]
;Click_Accel7_STM.c,53 :: 		IntToStr(X_axis, demoText);
MOVW	R1, #lo_addr(_demoText+0)
MOVT	R1, #hi_addr(_demoText+0)
BL	_IntToStr+0
;Click_Accel7_STM.c,54 :: 		mikrobus_logWrite("X axis:  ", _LOG_TEXT);
MOVW	R0, #lo_addr(?lstr2_Click_Accel7_STM+0)
MOVT	R0, #hi_addr(?lstr2_Click_Accel7_STM+0)
MOVS	R1, #1
BL	_mikrobus_logWrite+0
;Click_Accel7_STM.c,55 :: 		mikrobus_logWrite(demoText, _LOG_LINE);
MOVS	R1, #2
MOVW	R0, #lo_addr(_demoText+0)
MOVT	R0, #hi_addr(_demoText+0)
BL	_mikrobus_logWrite+0
;Click_Accel7_STM.c,57 :: 		Y_axis = accel7_getAxis(_ACCEL7_AXIS_Y);
MOVS	R0, __ACCEL7_AXIS_Y
BL	_accel7_getAxis+0
MOVW	R1, #lo_addr(_Y_axis+0)
MOVT	R1, #hi_addr(_Y_axis+0)
STRH	R0, [R1, #0]
;Click_Accel7_STM.c,58 :: 		IntToStr(Y_axis, demoText);
MOVW	R1, #lo_addr(_demoText+0)
MOVT	R1, #hi_addr(_demoText+0)
BL	_IntToStr+0
;Click_Accel7_STM.c,59 :: 		mikrobus_logWrite("Y axis:  ", _LOG_TEXT);
MOVW	R0, #lo_addr(?lstr3_Click_Accel7_STM+0)
MOVT	R0, #hi_addr(?lstr3_Click_Accel7_STM+0)
MOVS	R1, #1
BL	_mikrobus_logWrite+0
;Click_Accel7_STM.c,60 :: 		mikrobus_logWrite(demoText, _LOG_LINE);
MOVS	R1, #2
MOVW	R0, #lo_addr(_demoText+0)
MOVT	R0, #hi_addr(_demoText+0)
BL	_mikrobus_logWrite+0
;Click_Accel7_STM.c,62 :: 		Z_axis = accel7_getAxis(_ACCEL7_AXIS_Z);
MOVS	R0, __ACCEL7_AXIS_Z
BL	_accel7_getAxis+0
MOVW	R1, #lo_addr(_Z_axis+0)
MOVT	R1, #hi_addr(_Z_axis+0)
STRH	R0, [R1, #0]
;Click_Accel7_STM.c,63 :: 		IntToStr(Z_axis, demoText);
MOVW	R1, #lo_addr(_demoText+0)
MOVT	R1, #hi_addr(_demoText+0)
BL	_IntToStr+0
;Click_Accel7_STM.c,64 :: 		mikrobus_logWrite("Z axis:  ", _LOG_TEXT);
MOVW	R0, #lo_addr(?lstr4_Click_Accel7_STM+0)
MOVT	R0, #hi_addr(?lstr4_Click_Accel7_STM+0)
MOVS	R1, #1
BL	_mikrobus_logWrite+0
;Click_Accel7_STM.c,65 :: 		mikrobus_logWrite(demoText, _LOG_LINE);
MOVS	R1, #2
MOVW	R0, #lo_addr(_demoText+0)
MOVT	R0, #hi_addr(_demoText+0)
BL	_mikrobus_logWrite+0
;Click_Accel7_STM.c,67 :: 		mikrobus_logWrite("  ", _LOG_LINE);
MOVW	R0, #lo_addr(?lstr5_Click_Accel7_STM+0)
MOVT	R0, #hi_addr(?lstr5_Click_Accel7_STM+0)
MOVS	R1, #2
BL	_mikrobus_logWrite+0
;Click_Accel7_STM.c,69 :: 		Delay_ms( 1000 );
MOVW	R7, #6911
MOVT	R7, #183
NOP
NOP
L_applicationTask4:
SUBS	R7, R7, #1
BNE	L_applicationTask4
NOP
NOP
NOP
;Click_Accel7_STM.c,70 :: 		}
L_end_applicationTask:
LDR	LR, [SP, #0]
ADD	SP, SP, #4
BX	LR
; end of _applicationTask
_main:
;Click_Accel7_STM.c,72 :: 		void main()
;Click_Accel7_STM.c,74 :: 		systemInit();
BL	_systemInit+0
;Click_Accel7_STM.c,75 :: 		applicationInit();
BL	_applicationInit+0
;Click_Accel7_STM.c,77 :: 		while (1)
L_main6:
;Click_Accel7_STM.c,79 :: 		applicationTask();
BL	_applicationTask+0
;Click_Accel7_STM.c,80 :: 		}
IT	AL
BAL	L_main6
;Click_Accel7_STM.c,81 :: 		}
L_end_main:
L__main_end_loop:
B	L__main_end_loop
; end of _main

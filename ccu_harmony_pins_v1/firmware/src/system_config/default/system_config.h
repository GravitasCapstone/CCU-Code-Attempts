/*******************************************************************************
  MPLAB Harmony System Configuration Header

  File Name:
    system_config.h

  Summary:
    Build-time configuration header for the system defined by this MPLAB Harmony
    project.

  Description:
    An MPLAB Project may have multiple configurations.  This file defines the
    build-time options for a single configuration.

  Remarks:
    This configuration header must not define any prototypes or data
    definitions (or include any files that do).  It only provides macro
    definitions for build-time configuration options that are not instantiated
    until used by another MPLAB Harmony module or application.

    Created with MPLAB Harmony Version 2.06
*******************************************************************************/

// DOM-IGNORE-BEGIN
/*******************************************************************************
Copyright (c) 2013-2015 released Microchip Technology Inc.  All rights reserved.

Microchip licenses to you the right to use, modify, copy and distribute
Software only when embedded on a Microchip microcontroller or digital signal
controller that is integrated into your product or third party product
(pursuant to the sublicense terms in the accompanying license agreement).

You should refer to the license agreement accompanying this Software for
additional information regarding your rights and obligations.

SOFTWARE AND DOCUMENTATION ARE PROVIDED AS IS WITHOUT WARRANTY OF ANY KIND,
EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION, ANY WARRANTY OF
MERCHANTABILITY, TITLE, NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR PURPOSE.
IN NO EVENT SHALL MICROCHIP OR ITS LICENSORS BE LIABLE OR OBLIGATED UNDER
CONTRACT, NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION, BREACH OF WARRANTY, OR
OTHER LEGAL EQUITABLE THEORY ANY DIRECT OR INDIRECT DAMAGES OR EXPENSES
INCLUDING BUT NOT LIMITED TO ANY INCIDENTAL, SPECIAL, INDIRECT, PUNITIVE OR
CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA, COST OF PROCUREMENT OF
SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY CLAIMS BY THIRD PARTIES
(INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF), OR OTHER SIMILAR COSTS.
*******************************************************************************/
// DOM-IGNORE-END

#ifndef _SYSTEM_CONFIG_H
#define _SYSTEM_CONFIG_H

// *****************************************************************************
// *****************************************************************************
// Section: Included Files
// *****************************************************************************
// *****************************************************************************
/*  This section Includes other configuration headers necessary to completely
    define this configuration.
*/
#include "bsp.h"


// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility

extern "C" {

#endif
// DOM-IGNORE-END

// *****************************************************************************
// *****************************************************************************
// Section: System Service Configuration
// *****************************************************************************
// *****************************************************************************
// *****************************************************************************
/* Common System Service Configuration Options
*/
#define SYS_VERSION_STR           "2.06"
#define SYS_VERSION               20600

// *****************************************************************************
/* Clock System Service Configuration Options
*/
#define SYS_CLK_FREQ                        200000000ul
#define SYS_CLK_BUS_PERIPHERAL_1            100000000ul
#define SYS_CLK_BUS_PERIPHERAL_2            100000000ul
#define SYS_CLK_BUS_PERIPHERAL_3            100000000ul
#define SYS_CLK_BUS_PERIPHERAL_4            100000000ul
#define SYS_CLK_BUS_PERIPHERAL_5            100000000ul
#define SYS_CLK_BUS_PERIPHERAL_7            200000000ul
#define SYS_CLK_BUS_PERIPHERAL_8            100000000ul
#define SYS_CLK_CONFIG_PRIMARY_XTAL         24000000ul
#define SYS_CLK_CONFIG_SECONDARY_XTAL       32768ul
   
/*** Ports System Service Configuration ***/
#define SYS_PORT_A_ANSEL        0x3F00
#define SYS_PORT_A_TRIS         0xFFFE
#define SYS_PORT_A_LAT          0x0000
#define SYS_PORT_A_ODC          0x0000
#define SYS_PORT_A_CNPU         0x00F2
#define SYS_PORT_A_CNPD         0x0000
#define SYS_PORT_A_CNEN         0x0000

#define SYS_PORT_B_ANSEL        0x8DD0
#define SYS_PORT_B_TRIS         0xFFDD
#define SYS_PORT_B_LAT          0x0000
#define SYS_PORT_B_ODC          0x0000
#define SYS_PORT_B_CNPU         0x7000
#define SYS_PORT_B_CNPD         0x0000
#define SYS_PORT_B_CNEN         0x0000

#define SYS_PORT_C_ANSEL        0xBFE3
#define SYS_PORT_C_TRIS         0xFFFF
#define SYS_PORT_C_LAT          0x0000
#define SYS_PORT_C_ODC          0x0000
#define SYS_PORT_C_CNPU         0x0000
#define SYS_PORT_C_CNPD         0x0000
#define SYS_PORT_C_CNEN         0x0000

#define SYS_PORT_D_ANSEL        0x0100
#define SYS_PORT_D_TRIS         0xDFFE
#define SYS_PORT_D_LAT          0x0000
#define SYS_PORT_D_ODC          0x0000
#define SYS_PORT_D_CNPU         0x0000
#define SYS_PORT_D_CNPD         0x0000
#define SYS_PORT_D_CNEN         0x0000

#define SYS_PORT_E_ANSEL        0xFCF0
#define SYS_PORT_E_TRIS         0xFFFF
#define SYS_PORT_E_LAT          0x0000
#define SYS_PORT_E_ODC          0x0000
#define SYS_PORT_E_CNPU         0x0000
#define SYS_PORT_E_CNPD         0x0000
#define SYS_PORT_E_CNEN         0x0000

#define SYS_PORT_F_ANSEL        0xFEC0
#define SYS_PORT_F_TRIS         0xFFCC
#define SYS_PORT_F_LAT          0x0000
#define SYS_PORT_F_ODC          0x0000
#define SYS_PORT_F_CNPU         0x0000
#define SYS_PORT_F_CNPD         0x0000
#define SYS_PORT_F_CNEN         0x0000

#define SYS_PORT_G_ANSEL        0x8EFC
#define SYS_PORT_G_TRIS         0x8FFC
#define SYS_PORT_G_LAT          0x0000
#define SYS_PORT_G_ODC          0x0000
#define SYS_PORT_G_CNPU         0x0000
#define SYS_PORT_G_CNPD         0x0000
#define SYS_PORT_G_CNEN         0x0000

#define SYS_PORT_H_ANSEL        0x0040
#define SYS_PORT_H_TRIS         0x7778
#define SYS_PORT_H_LAT          0x0000
#define SYS_PORT_H_ODC          0x0000
#define SYS_PORT_H_CNPU         0x0400
#define SYS_PORT_H_CNPD         0x0000
#define SYS_PORT_H_CNEN         0x0000

#define SYS_PORT_J_ANSEL        0x0800
#define SYS_PORT_J_TRIS         0x6B03
#define SYS_PORT_J_LAT          0x0000
#define SYS_PORT_J_ODC          0x0000
#define SYS_PORT_J_CNPU         0x0000
#define SYS_PORT_J_CNPD         0x0000
#define SYS_PORT_J_CNEN         0x0000

#define SYS_PORT_K_ANSEL        0xFF00
#define SYS_PORT_K_TRIS         0xFF7F
#define SYS_PORT_K_LAT          0x0000
#define SYS_PORT_K_ODC          0x0000
#define SYS_PORT_K_CNPU         0x0000
#define SYS_PORT_K_CNPD         0x0000
#define SYS_PORT_K_CNEN         0x0000


/*** Interrupt System Service Configuration ***/
#define SYS_INT                     true

// *****************************************************************************
// *****************************************************************************
// Section: Driver Configuration
// *****************************************************************************
// *****************************************************************************

// *****************************************************************************
// *****************************************************************************
// Section: Middleware & Other Library Configuration
// *****************************************************************************
// *****************************************************************************

// *****************************************************************************
/* BSP Configuration Options
*/
#define BSP_OSC_FREQUENCY 24000000


// *****************************************************************************
// *****************************************************************************
// Section: Application Configuration
// *****************************************************************************
// *****************************************************************************
/*** Application Defined Pins ***/

/*** Functions for U2_EN pin ***/
#define U2_ENToggle() PLIB_PORTS_PinToggle(PORTS_ID_0, PORT_CHANNEL_J, PORTS_BIT_POS_12)
#define U2_ENOn() PLIB_PORTS_PinSet(PORTS_ID_0, PORT_CHANNEL_J, PORTS_BIT_POS_12)
#define U2_ENOff() PLIB_PORTS_PinClear(PORTS_ID_0, PORT_CHANNEL_J, PORTS_BIT_POS_12)
#define U2_ENStateGet() PLIB_PORTS_PinGetLatched(PORTS_ID_0, PORT_CHANNEL_J, PORTS_BIT_POS_12)

/*** Functions for U3_EN pin ***/
#define U3_ENToggle() PLIB_PORTS_PinToggle(PORTS_ID_0, PORT_CHANNEL_J, PORTS_BIT_POS_10)
#define U3_ENOn() PLIB_PORTS_PinSet(PORTS_ID_0, PORT_CHANNEL_J, PORTS_BIT_POS_10)
#define U3_ENOff() PLIB_PORTS_PinClear(PORTS_ID_0, PORT_CHANNEL_J, PORTS_BIT_POS_10)
#define U3_ENStateGet() PLIB_PORTS_PinGetLatched(PORTS_ID_0, PORT_CHANNEL_J, PORTS_BIT_POS_10)

/*** Functions for U4_EN pin ***/
#define U4_ENToggle() PLIB_PORTS_PinToggle(PORTS_ID_0, PORT_CHANNEL_A, PORTS_BIT_POS_0)
#define U4_ENOn() PLIB_PORTS_PinSet(PORTS_ID_0, PORT_CHANNEL_A, PORTS_BIT_POS_0)
#define U4_ENOff() PLIB_PORTS_PinClear(PORTS_ID_0, PORT_CHANNEL_A, PORTS_BIT_POS_0)
#define U4_ENStateGet() PLIB_PORTS_PinGetLatched(PORTS_ID_0, PORT_CHANNEL_A, PORTS_BIT_POS_0)

/*** Functions for U5_EN pin ***/
#define U5_ENToggle() PLIB_PORTS_PinToggle(PORTS_ID_0, PORT_CHANNEL_J, PORTS_BIT_POS_15)
#define U5_ENOn() PLIB_PORTS_PinSet(PORTS_ID_0, PORT_CHANNEL_J, PORTS_BIT_POS_15)
#define U5_ENOff() PLIB_PORTS_PinClear(PORTS_ID_0, PORT_CHANNEL_J, PORTS_BIT_POS_15)
#define U5_ENStateGet() PLIB_PORTS_PinGetLatched(PORTS_ID_0, PORT_CHANNEL_J, PORTS_BIT_POS_15)

/*** Functions for U6_EN pin ***/
#define U6_ENToggle() PLIB_PORTS_PinToggle(PORTS_ID_0, PORT_CHANNEL_B, PORTS_BIT_POS_1)
#define U6_ENOn() PLIB_PORTS_PinSet(PORTS_ID_0, PORT_CHANNEL_B, PORTS_BIT_POS_1)
#define U6_ENOff() PLIB_PORTS_PinClear(PORTS_ID_0, PORT_CHANNEL_B, PORTS_BIT_POS_1)
#define U6_ENStateGet() PLIB_PORTS_PinGetLatched(PORTS_ID_0, PORT_CHANNEL_B, PORTS_BIT_POS_1)

/*** Functions for U1_EN pin ***/
#define U1_ENToggle() PLIB_PORTS_PinToggle(PORTS_ID_0, PORT_CHANNEL_H, PORTS_BIT_POS_7)
#define U1_ENOn() PLIB_PORTS_PinSet(PORTS_ID_0, PORT_CHANNEL_H, PORTS_BIT_POS_7)
#define U1_ENOff() PLIB_PORTS_PinClear(PORTS_ID_0, PORT_CHANNEL_H, PORTS_BIT_POS_7)
#define U1_ENStateGet() PLIB_PORTS_PinGetLatched(PORTS_ID_0, PORT_CHANNEL_H, PORTS_BIT_POS_7)

/*** Functions for LED1 pin ***/
#define LED1Toggle() PLIB_PORTS_PinToggle(PORTS_ID_0, PORT_CHANNEL_H, PORTS_BIT_POS_11)
#define LED1On() PLIB_PORTS_PinSet(PORTS_ID_0, PORT_CHANNEL_H, PORTS_BIT_POS_11)
#define LED1Off() PLIB_PORTS_PinClear(PORTS_ID_0, PORT_CHANNEL_H, PORTS_BIT_POS_11)
#define LED1StateGet() PLIB_PORTS_PinGetLatched(PORTS_ID_0, PORT_CHANNEL_H, PORTS_BIT_POS_11)

/*** Functions for LED2 pin ***/
#define LED2Toggle() PLIB_PORTS_PinToggle(PORTS_ID_0, PORT_CHANNEL_F, PORTS_BIT_POS_4)
#define LED2On() PLIB_PORTS_PinSet(PORTS_ID_0, PORT_CHANNEL_F, PORTS_BIT_POS_4)
#define LED2Off() PLIB_PORTS_PinClear(PORTS_ID_0, PORT_CHANNEL_F, PORTS_BIT_POS_4)
#define LED2StateGet() PLIB_PORTS_PinGetLatched(PORTS_ID_0, PORT_CHANNEL_F, PORTS_BIT_POS_4)

/*** Functions for LED3 pin ***/
#define LED3Toggle() PLIB_PORTS_PinToggle(PORTS_ID_0, PORT_CHANNEL_F, PORTS_BIT_POS_5)
#define LED3On() PLIB_PORTS_PinSet(PORTS_ID_0, PORT_CHANNEL_F, PORTS_BIT_POS_5)
#define LED3Off() PLIB_PORTS_PinClear(PORTS_ID_0, PORT_CHANNEL_F, PORTS_BIT_POS_5)
#define LED3StateGet() PLIB_PORTS_PinGetLatched(PORTS_ID_0, PORT_CHANNEL_F, PORTS_BIT_POS_5)

/*** Functions for CS pin ***/
#define CSToggle() PLIB_PORTS_PinToggle(PORTS_ID_0, PORT_CHANNEL_H, PORTS_BIT_POS_15)
#define CSOn() PLIB_PORTS_PinSet(PORTS_ID_0, PORT_CHANNEL_H, PORTS_BIT_POS_15)
#define CSOff() PLIB_PORTS_PinClear(PORTS_ID_0, PORT_CHANNEL_H, PORTS_BIT_POS_15)
#define CSStateGet() PLIB_PORTS_PinGetLatched(PORTS_ID_0, PORT_CHANNEL_H, PORTS_BIT_POS_15)

/*** Functions for CD pin ***/
#define CDToggle() PLIB_PORTS_PinToggle(PORTS_ID_0, PORT_CHANNEL_D, PORTS_BIT_POS_0)
#define CDOn() PLIB_PORTS_PinSet(PORTS_ID_0, PORT_CHANNEL_D, PORTS_BIT_POS_0)
#define CDOff() PLIB_PORTS_PinClear(PORTS_ID_0, PORT_CHANNEL_D, PORTS_BIT_POS_0)
#define CDStateGet() PLIB_PORTS_PinGetLatched(PORTS_ID_0, PORT_CHANNEL_D, PORTS_BIT_POS_0)

/*** Functions for D8_EN pin ***/
#define D8_ENToggle() PLIB_PORTS_PinToggle(PORTS_ID_0, PORT_CHANNEL_D, PORTS_BIT_POS_13)
#define D8_ENOn() PLIB_PORTS_PinSet(PORTS_ID_0, PORT_CHANNEL_D, PORTS_BIT_POS_13)
#define D8_ENOff() PLIB_PORTS_PinClear(PORTS_ID_0, PORT_CHANNEL_D, PORTS_BIT_POS_13)
#define D8_ENStateGet() PLIB_PORTS_PinGetLatched(PORTS_ID_0, PORT_CHANNEL_D, PORTS_BIT_POS_13)

/*** Functions for D7_EN pin ***/
#define D7_ENToggle() PLIB_PORTS_PinToggle(PORTS_ID_0, PORT_CHANNEL_J, PORTS_BIT_POS_2)
#define D7_ENOn() PLIB_PORTS_PinSet(PORTS_ID_0, PORT_CHANNEL_J, PORTS_BIT_POS_2)
#define D7_ENOff() PLIB_PORTS_PinClear(PORTS_ID_0, PORT_CHANNEL_J, PORTS_BIT_POS_2)
#define D7_ENStateGet() PLIB_PORTS_PinGetLatched(PORTS_ID_0, PORT_CHANNEL_J, PORTS_BIT_POS_2)

/*** Functions for D6_EN pin ***/
#define D6_ENToggle() PLIB_PORTS_PinToggle(PORTS_ID_0, PORT_CHANNEL_J, PORTS_BIT_POS_3)
#define D6_ENOn() PLIB_PORTS_PinSet(PORTS_ID_0, PORT_CHANNEL_J, PORTS_BIT_POS_3)
#define D6_ENOff() PLIB_PORTS_PinClear(PORTS_ID_0, PORT_CHANNEL_J, PORTS_BIT_POS_3)
#define D6_ENStateGet() PLIB_PORTS_PinGetLatched(PORTS_ID_0, PORT_CHANNEL_J, PORTS_BIT_POS_3)

/*** Functions for D5_EN pin ***/
#define D5_ENToggle() PLIB_PORTS_PinToggle(PORTS_ID_0, PORT_CHANNEL_F, PORTS_BIT_POS_0)
#define D5_ENOn() PLIB_PORTS_PinSet(PORTS_ID_0, PORT_CHANNEL_F, PORTS_BIT_POS_0)
#define D5_ENOff() PLIB_PORTS_PinClear(PORTS_ID_0, PORT_CHANNEL_F, PORTS_BIT_POS_0)
#define D5_ENStateGet() PLIB_PORTS_PinGetLatched(PORTS_ID_0, PORT_CHANNEL_F, PORTS_BIT_POS_0)

/*** Functions for D4_EN pin ***/
#define D4_ENToggle() PLIB_PORTS_PinToggle(PORTS_ID_0, PORT_CHANNEL_F, PORTS_BIT_POS_1)
#define D4_ENOn() PLIB_PORTS_PinSet(PORTS_ID_0, PORT_CHANNEL_F, PORTS_BIT_POS_1)
#define D4_ENOff() PLIB_PORTS_PinClear(PORTS_ID_0, PORT_CHANNEL_F, PORTS_BIT_POS_1)
#define D4_ENStateGet() PLIB_PORTS_PinGetLatched(PORTS_ID_0, PORT_CHANNEL_F, PORTS_BIT_POS_1)

/*** Functions for D3_EN pin ***/
#define D3_ENToggle() PLIB_PORTS_PinToggle(PORTS_ID_0, PORT_CHANNEL_K, PORTS_BIT_POS_7)
#define D3_ENOn() PLIB_PORTS_PinSet(PORTS_ID_0, PORT_CHANNEL_K, PORTS_BIT_POS_7)
#define D3_ENOff() PLIB_PORTS_PinClear(PORTS_ID_0, PORT_CHANNEL_K, PORTS_BIT_POS_7)
#define D3_ENStateGet() PLIB_PORTS_PinGetLatched(PORTS_ID_0, PORT_CHANNEL_K, PORTS_BIT_POS_7)

/*** Functions for D2_EN pin ***/
#define D2_ENToggle() PLIB_PORTS_PinToggle(PORTS_ID_0, PORT_CHANNEL_G, PORTS_BIT_POS_1)
#define D2_ENOn() PLIB_PORTS_PinSet(PORTS_ID_0, PORT_CHANNEL_G, PORTS_BIT_POS_1)
#define D2_ENOff() PLIB_PORTS_PinClear(PORTS_ID_0, PORT_CHANNEL_G, PORTS_BIT_POS_1)
#define D2_ENStateGet() PLIB_PORTS_PinGetLatched(PORTS_ID_0, PORT_CHANNEL_G, PORTS_BIT_POS_1)

/*** Functions for D1_EN pin ***/
#define D1_ENToggle() PLIB_PORTS_PinToggle(PORTS_ID_0, PORT_CHANNEL_G, PORTS_BIT_POS_0)
#define D1_ENOn() PLIB_PORTS_PinSet(PORTS_ID_0, PORT_CHANNEL_G, PORTS_BIT_POS_0)
#define D1_ENOff() PLIB_PORTS_PinClear(PORTS_ID_0, PORT_CHANNEL_G, PORTS_BIT_POS_0)
#define D1_ENStateGet() PLIB_PORTS_PinGetLatched(PORTS_ID_0, PORT_CHANNEL_G, PORTS_BIT_POS_0)

/*** Functions for F3_EN pin ***/
#define F3_ENToggle() PLIB_PORTS_PinToggle(PORTS_ID_0, PORT_CHANNEL_J, PORTS_BIT_POS_4)
#define F3_ENOn() PLIB_PORTS_PinSet(PORTS_ID_0, PORT_CHANNEL_J, PORTS_BIT_POS_4)
#define F3_ENOff() PLIB_PORTS_PinClear(PORTS_ID_0, PORT_CHANNEL_J, PORTS_BIT_POS_4)
#define F3_ENStateGet() PLIB_PORTS_PinGetLatched(PORTS_ID_0, PORT_CHANNEL_J, PORTS_BIT_POS_4)

/*** Functions for F2_EN pin ***/
#define F2_ENToggle() PLIB_PORTS_PinToggle(PORTS_ID_0, PORT_CHANNEL_J, PORTS_BIT_POS_5)
#define F2_ENOn() PLIB_PORTS_PinSet(PORTS_ID_0, PORT_CHANNEL_J, PORTS_BIT_POS_5)
#define F2_ENOff() PLIB_PORTS_PinClear(PORTS_ID_0, PORT_CHANNEL_J, PORTS_BIT_POS_5)
#define F2_ENStateGet() PLIB_PORTS_PinGetLatched(PORTS_ID_0, PORT_CHANNEL_J, PORTS_BIT_POS_5)

/*** Functions for F1_EN pin ***/
#define F1_ENToggle() PLIB_PORTS_PinToggle(PORTS_ID_0, PORT_CHANNEL_J, PORTS_BIT_POS_6)
#define F1_ENOn() PLIB_PORTS_PinSet(PORTS_ID_0, PORT_CHANNEL_J, PORTS_BIT_POS_6)
#define F1_ENOff() PLIB_PORTS_PinClear(PORTS_ID_0, PORT_CHANNEL_J, PORTS_BIT_POS_6)
#define F1_ENStateGet() PLIB_PORTS_PinGetLatched(PORTS_ID_0, PORT_CHANNEL_J, PORTS_BIT_POS_6)

/*** Functions for C2_EN pin ***/
#define C2_ENToggle() PLIB_PORTS_PinToggle(PORTS_ID_0, PORT_CHANNEL_J, PORTS_BIT_POS_7)
#define C2_ENOn() PLIB_PORTS_PinSet(PORTS_ID_0, PORT_CHANNEL_J, PORTS_BIT_POS_7)
#define C2_ENOff() PLIB_PORTS_PinClear(PORTS_ID_0, PORT_CHANNEL_J, PORTS_BIT_POS_7)
#define C2_ENStateGet() PLIB_PORTS_PinGetLatched(PORTS_ID_0, PORT_CHANNEL_J, PORTS_BIT_POS_7)

/*** Functions for C1_EN pin ***/
#define C1_ENToggle() PLIB_PORTS_PinToggle(PORTS_ID_0, PORT_CHANNEL_G, PORTS_BIT_POS_14)
#define C1_ENOn() PLIB_PORTS_PinSet(PORTS_ID_0, PORT_CHANNEL_G, PORTS_BIT_POS_14)
#define C1_ENOff() PLIB_PORTS_PinClear(PORTS_ID_0, PORT_CHANNEL_G, PORTS_BIT_POS_14)
#define C1_ENStateGet() PLIB_PORTS_PinGetLatched(PORTS_ID_0, PORT_CHANNEL_G, PORTS_BIT_POS_14)

/*** Functions for H2_EN pin ***/
#define H2_ENToggle() PLIB_PORTS_PinToggle(PORTS_ID_0, PORT_CHANNEL_G, PORTS_BIT_POS_12)
#define H2_ENOn() PLIB_PORTS_PinSet(PORTS_ID_0, PORT_CHANNEL_G, PORTS_BIT_POS_12)
#define H2_ENOff() PLIB_PORTS_PinClear(PORTS_ID_0, PORT_CHANNEL_G, PORTS_BIT_POS_12)
#define H2_ENStateGet() PLIB_PORTS_PinGetLatched(PORTS_ID_0, PORT_CHANNEL_G, PORTS_BIT_POS_12)

/*** Functions for H1_EN pin ***/
#define H1_ENToggle() PLIB_PORTS_PinToggle(PORTS_ID_0, PORT_CHANNEL_G, PORTS_BIT_POS_13)
#define H1_ENOn() PLIB_PORTS_PinSet(PORTS_ID_0, PORT_CHANNEL_G, PORTS_BIT_POS_13)
#define H1_ENOff() PLIB_PORTS_PinClear(PORTS_ID_0, PORT_CHANNEL_G, PORTS_BIT_POS_13)
#define H1_ENStateGet() PLIB_PORTS_PinGetLatched(PORTS_ID_0, PORT_CHANNEL_G, PORTS_BIT_POS_13)

/*** Functions for B3 pin ***/
#define B3StateGet() PLIB_PORTS_PinGet(PORTS_ID_0, PORT_CHANNEL_A, PORTS_BIT_POS_5)

/*** Functions for B5 pin ***/
#define B5StateGet() PLIB_PORTS_PinGet(PORTS_ID_0, PORT_CHANNEL_A, PORTS_BIT_POS_1)

/*** Functions for HDC_INT pin ***/
#define HDC_INTStateGet() PLIB_PORTS_PinGet(PORTS_ID_0, PORT_CHANNEL_H, PORTS_BIT_POS_10)

/*** Functions for B1 pin ***/
#define B1StateGet() PLIB_PORTS_PinGet(PORTS_ID_0, PORT_CHANNEL_A, PORTS_BIT_POS_4)

/*** Functions for B2 pin ***/
#define B2StateGet() PLIB_PORTS_PinGet(PORTS_ID_0, PORT_CHANNEL_A, PORTS_BIT_POS_6)

/*** Functions for B4 pin ***/
#define B4StateGet() PLIB_PORTS_PinGet(PORTS_ID_0, PORT_CHANNEL_A, PORTS_BIT_POS_7)


/*** Application Instance 0 Configuration ***/

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // _SYSTEM_CONFIG_H
/*******************************************************************************
 End of File
*/

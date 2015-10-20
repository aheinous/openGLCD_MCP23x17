/*
 * ks0108_Mega.h - User specific configuration for openGLCD library
 *
 * Use this file to set io pins
 * when using an Arduino Mega1280 or Mega2560 board
 *
 * The configuration below uses a single port for data 
 *
 */

#ifndef GLCD_PIN_CONFIG_H
#define GLCD_PIN_CONFIG_H


/*
 * define name for pin configuration
 */
#define glcd_PinConfigName "ks0108-Mega"

/******************************************************************/
/*  The configuartion below is for use of a MCP23x17 io-expander  */
/******************************************************************/



#include <MCP23x17.h> 

// The function get_glcd_MCP23x17() must be defined in sketch.
I_IOExpander16 * get_glcd_MCP23x17();


#define GLCD_MCP23x17 (*get_glcd_MCP23x17())

// data pins are Port B //

#define glcdPinCSEL1     IOEX16_A3    // CS1 Bit  
#define glcdPinCSEL2     IOEX16_A4    // CS2 Bit
#define glcdPinRW        IOEX16_A1    // R/W Bit
#define glcdPinDI        IOEX16_A0    // D/I Bit 
#define glcdPinEN        IOEX16_A2    // EN Bit

#if NBR_CHIP_SELECT_PINS > 2
#define glcdPinCSEL3     IOEX16_A5   // third chip select if needed
#endif

#if NBR_CHIP_SELECT_PINS > 3
#define glcdPinCSEL4     IOEX16_A6   // fourth chip select if needed
#endif


// #define glcdPinRES         IOEX16_A7    // optional s/w Reset control



// both mcpDataPort and the individual data
// pin definitions below are nessasary.
#define mcpDataPort IOEX16_PORTB

/*
 * Data pin definitions
 */
#define glcdPinData0 IOEX16_B0
#define glcdPinData1 IOEX16_B1
#define glcdPinData2 IOEX16_B2
#define glcdPinData3 IOEX16_B3
#define glcdPinData4 IOEX16_B4
#define glcdPinData5 IOEX16_B5
#define glcdPinData6 IOEX16_B6
#define glcdPinData7 IOEX16_B7


/*****************************/
/*  Normal Configuration     */
/*****************************/

// #define glcdPinData0    22
// #define glcdPinData1    23
// #define glcdPinData2    24
// #define glcdPinData3    25
// #define glcdPinData4    26
// #define glcdPinData5    27
// #define glcdPinData6    28
// #define glcdPinData7    29

/*
 * Pins used for Control
 */
// #define glcdPinCSEL1     33    // CS1 Bit  
// #define glcdPinCSEL2     34    // CS2 Bit
// #define glcdPinRW        35    // R/W Bit
// #define glcdPinDI        36    // D/I Bit 
// #define glcdPinEN        37    // EN Bit

// #if NBR_CHIP_SELECT_PINS > 2
// #define glcdPinCSEL3     32   // third chip select if needed
// #endif

// #if NBR_CHIP_SELECT_PINS > 3
// #define glcdPinCSEL4     31   // fourth chip select if needed
// #endif

// Reset - uncomment the next line if glcd module reset is connected to an Arduino pin
//#define glcdPinRES         30    // optional s/w Reset control

//#define glcdPinBL	XX // optional backlight control pin controls BL circuit



#endif //GLCD_PIN_CONFIG_H

/*
 *  openGLCD Library - Hello World
 * 
 * This sketch prints "Hello World!" to the LCD
 * and shows the time in seconds since Arduino board was reset.
 * 
 * 2015-10-10 Alex Haynes - added MCP23x17 IO expander support.
 *  aheinous@gmail.com
 *  2013-06-15 bperrybap   - updates for openGLCD
 *  2011-09-14 Bill Perry  - original creation
 *  	bperrybap@opensource.billsworld.billandterrie.com
 */

// include the library header
// no font headers have to be included
#include <openGLCD.h>


////// begin SPI version //////////////////////
// #include <MCP23S17.h>  

// #include <SPI.h>   // These have to be #included here so the Arduino IDE/Makefile knows about it. 
// #include <Wire.h>  // Both are always required since the Arduino IDE/Makefile wants to compile
//            // the entire MCP23x17 library.

// const uint8_t cs = 53;
// const uint8_t addr = 0;

// MCP23S17 mcp(addr, cs); 

// // This funtion is called by the openGLCD code.
// I_IOExpander16 * get_glcd_MCP23x17() {
//    return &mcp;
// }
///// end SPI version ////////////////////////


///// begin I2C version //////////////////////
#include <MCP23017.h>  

#include <SPI.h>  // These have to be #included here so the Arduino IDE/Makefile knows about it. 
#include <Wire.h>   // Both are always required since the Arduino IDE/Makefile wants to compile
                   // the entire MCP23x17 library.

const uint8_t addr = 0;

MCP23017 mcp(addr); 

// This funtion is called by the openGLCD code.
I_IOExpander16 * get_glcd_MCP23x17() {
    return &mcp;
}
//// end I2C version /////////////////////////


void setup()
{
    // remember to call mcp.begin() 
    mcp.begin();

    GLCD.Init();
    // Select the font for the default text area
    GLCD.SelectFont(System5x7);

    GLCD.print(F("hello, world!")); // keep string in flash on AVR boards with IDE 1.x 
}

void loop()
{

  GLCD.CursorTo(0, 1);

  
  GLCD.print(millis()/1000);

}

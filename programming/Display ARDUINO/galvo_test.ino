/*
    This sketch demonstrates how we can output a value in both channels of MCP4822 or MCP4812 or MCP4802.
*/

#include <MCP48xx.h>

// Define the MCP4822 instance, giving it the SS (Slave Select) pin
// The constructor will also initialize the SPI library
// We can also define a MCP4812 or MCP4802
MCP4822 dac(10);
MCP4822 dac1(9);
// We define an int variable to store the voltage in mV so 100mV = 0.1V
int voltage = 100;
int minx = 1500;
int miny = 1500;
int maxx = 2500;
int maxy = 2500;
int stepsx;
int stepsy;

void setup() {
    // We call the init() method to initialize the instance

    dac.init();
    dac1.init();
    // The channels are turned off at startup so we need to turn the channel we need on
    dac.turnOnChannelA();
    dac.turnOnChannelB();
    dac1.turnOnChannelA();
    dac1.turnOnChannelB();
    pinMode(8, OUTPUT);
    // We configure the channels in High gain
    // It is also the default value so it is not really needed
    dac.setGainA(MCP4822::High);
    dac.setGainB(MCP4822::High);
    dac1.setGainA(MCP4822::High);
    dac1.setGainB(MCP4822::High);
    
}

// We loop from 100mV to 2000mV for channel A and 4000mV for channel B
void loop() {
    // We set channel A to output 500mV
    A(1000,500);
    
    R(875,500);
    
    D(750,500);
    
    U(625,500);
    
    I(500,500);
    
    N(375,500);
    
    O(250,500);
    
    /*
   int startpunktx = 500;
   int startpunkty = 500;
   setPos(startpunktx,startpunkty);
   delay(1);
   setPos(startpunktx+100,startpunkty);
   delay(1);
   setPos(startpunktx+100,startpunkty+100);
   delay(1);
   setPos(startpunktx,startpunkty+100);
   delay(1);
   setPos(startpunktx+100,startpunkty+100);
   delay(1);
   setPos(startpunktx+100,startpunkty+200);
   delay(1);
   setPos(startpunktx,startpunkty+200);
   delay(1);
   
   setPos(startpunktx+100,startpunkty+200);
   delay(1);
   setPos(startpunktx+100,startpunkty+100);
   delay(1);
   setPos(startpunktx,startpunkty+100);
   delay(1);
   setPos(startpunktx+100,startpunkty+100);
   delay(1);
   setPos(startpunktx+100,startpunkty);
   delay(1);
   */
  
  /* Buchstabe A zeichnen mit variabler Startposition
int startpunktx = 500;
int startpunkty = 500;

setPos(startpunktx + 50, startpunkty);  // Startpunkt (unterer linker "Fuß" von A)
delay(1);
setPos(startpunktx + 100, startpunkty + 200);  // Spitze von A

delay(1);
setPos(startpunktx + 150, startpunkty);  // Unterer rechter "Fuß" von A

delay(1);
setPos(startpunktx + 125, startpunkty + 100);  // Horizontaler Strich Mitte rechts

delay(1);
setPos(startpunktx + 75, startpunkty + 100);  // Horizontaler Strich Mitte links
delay(1);
  */
}

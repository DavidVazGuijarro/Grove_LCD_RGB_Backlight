#include <Wire.h>
#include "rgb_lcd.h"

rgb_lcd lcd;

const int colorR = 000;
const int colorG = 100;
const int colorB = 255;

void setup() 
{
    // set up the LCD's number of columns and rows:
    lcd.begin(16, 2);
    
    lcd.setRGB(colorR, colorG, colorB);
    
    // Print a message to the LCD.
    lcd.print("Aqui 1 mensaje");

    delay(1000);
}

void loop() 
{
    // set the cursor to column 0, line 1
    // (note: line 1 is the second row, since counting begins with 0):
    lcd.setCursor(0, 1);
    // print the number of seconds since reset:
    lcd.print("Aqui el otro");

    delay(100);
}

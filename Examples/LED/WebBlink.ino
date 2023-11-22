/**
 * @file WebBlink.ino
 * @author @balaji303 (https://github.com/balaji303)
 * @brief LED blink code using arguments from the webpage
 * Program the below code in build.particle.io
 *   Check the Console in console.particle.io
 *   In functions section you can see LED function that function enter "HIGH"
 *   or "LOW" to turn the LED ON and OFF
 *   as per your requirement
 * @version 1
 * @date 20-11-2023
 *
 * Copyright (c) 2023 @balaji303
 *
 */

void setup() 
{
    pinMode(D7,OUTPUT); // in-build LED
    pinMode(D6,OUTPUT); // user LED
    Particle.function("ledaw",ledtoggle);
}

void loop() 
{
    digitalWrite(D7,HIGH);
    delay(100);
    digitalWrite(D7,LOW);
    delay(100);
}

/**
 * @brief ledtoggle function is called from console and cmd string is sent from console
 * 
 * @param cmd 
 * @return int 
 */
int ledtoggle(String cmd )
{
    if (cmd=="0")
    {
        digitalWrite(D6,HIGH);
        digitalWrite(D7,HIGH);
        delay(5000);
        return 1;
    }
    
    else if(cmd == "1")
    {
        digitalWrite(D6,LOW);
        digitalWrite(D7,LOW);
        delay(5000);
        return 0;
    }
    
    else
    {
        return -1;
    }
}

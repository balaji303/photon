/**
 * @file LDRcontrolLED.ino
 * @author @balaji303 (https://github.com/balaji303)
 * @brief LED Blink using LDR value
 * @version 1
 * @date 20-11-2023
 *
 * Copyright (c) 2023 @balaji303
 *
 */

int light=0;
void setup()
{
    pinMode(A0,INPUT);
    pinMode(D7,OUTPUT);
    Particle.variable("light",light);
}

void loop()
{
    light=analogRead(A0);
    if(light<300)
    {
        digitalWrite(D7,HIGH);
        delay(500);
    }
    else
    {
        digitalWrite(D7,LOW);
        delay(500);
    }
}

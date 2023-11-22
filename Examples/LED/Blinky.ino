/**
 * @file Blinky.ino
 * @author @balaji303 (https://github.com/balaji303)
 * @brief Blink 2 LED
 * @version 1
 * @date 20-11-2023
 *
 * Copyright (c) 2023 @balaji303
 *
 */

void setup() 
{
    pinMode(D7,OUTPUT);
    pinMode(D6,OUTPUT);
}

void loop()
{
    digitalWrite(D7,LOW);
    digitalWrite(D6,HIGH);
    delay(500);
    digitalWrite(D6,LOW);
    digitalWrite(D7,HIGH);
    delay(500);
}


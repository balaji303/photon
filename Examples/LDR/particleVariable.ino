/**
 * @file particleVariable.ino
 * @author @balaji303 (https://github.com/balaji303)
 * @brief LDR value send to cloud
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
    Particle.variable("light",light);
}

void loop()
{
    light=analogRead(A0);
    delay(1000);
}

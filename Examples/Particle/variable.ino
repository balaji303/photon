/**
 * @file variable.ino
 * @author @balaji303 (https://github.com/balaji303)
 * @brief Make the LED Glow on and off by writting in the Particle Console-> console.particle.io
            Can Get the variable status in Particle Console-> console.particle.io
 * @version 1
 * @date 20-11-2023
 *
 * Copyright (c) 2023 @balaji303
 *
 */
int status=0;

void setup() 
{
    pinMode(D7,OUTPUT);
    pinMode(D6,OUTPUT);
    Particle.function("D6 led",ledtoggle);
    Particle.variable("D6 status",status);
}

void loop() 
{
    digitalWrite(D7,HIGH);
    delay(1000);
    digitalWrite(D7,LOW);
    delay(1000);
    status=digitalRead(D6);
}


int ledtoggle(String cmd )
{
    if (cmd=="HIGH")
    {
        digitalWrite(D6,1);
        return 1;
    }
    
    else if(cmd == "LOW")
    {
        digitalWrite(D6,0);
        return 0;
    }
    else
    {
        return -1;
    }
}

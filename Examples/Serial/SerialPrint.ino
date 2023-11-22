/*

*/
/**
 * @file LDRcontrolLED.ino
 * @author @balaji303 (https://github.com/balaji303)
 * @brief Connect the Photon to your Computer
 *          Open any serial Terminal APP (TeraTerm)
 *          Give the Port the photon is connected
 *          select Baud Rate as 9600
 *          Enter any value: 1
 *          It will display as follows
 *          Photon says it receieved
 *          49
 * @version 1
 * @date 20-11-2023
 *
 * Copyright (c) 2023 @balaji303
 *
 */
int input=0;
void setup()
{
    Serial.begin(9600);
}

void loop()
{
    if(Serial.available()>0)
    {
        input= Serial.read();
    
        Serial.println("Photon says it receieved");
        Serial.println(input,DEC);
    }
}

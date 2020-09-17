/*
Program the below code in build.particle.io
Check the Console in console.particle.io
In functions section you can see LED function that function enter "HIGH"
or "LOW" to turn the LED ON and OFF
as per your requirement
*/
void setup() {
pinMode(D7,OUTPUT);
pinMode(D6,OUTPUT);

Particle.function("led",ledtoggle);
}

void loop() {
digitalWrite(D7,HIGH);
delay(1000);
digitalWrite(D7,LOW);
delay(1000);
}


int ledtoggle(String cmd ){
    if (cmd=="HIGH"){
        digitalWrite(D6,HIGH);
        return 1;
    }
    
    else if(cmd == "LOW"){
        digitalWrite(D6,LOW);
        return 0;
    }
    else{
        return -1;
    }
}

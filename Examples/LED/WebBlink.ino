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

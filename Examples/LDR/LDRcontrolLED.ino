int light=0;
void setup() {
pinMode(A0,INPUT);
pinMode(D7,OUTPUT);
Particle.variable("light",light);
}

void loop() {
light=analogRead(A0);
if(light<300){
    digitalWrite(D7,HIGH);
    delay(500);
}
else{
    digitalWrite(D7,LOW);
    delay(500);
}
}

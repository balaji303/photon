void setup() {
pinMode(D7,OUTPUT);
pinMode(D6,OUTPUT);
}

void loop() {
    digitalWrite(D7,LOW);
    digitalWrite(D6,HIGH);
    delay(500);
    digitalWrite(D6,LOW);
    digitalWrite(D7,HIGH);
    delay(500);
}

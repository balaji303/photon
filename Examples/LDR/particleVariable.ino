int light=0;
void setup() {
pinMode(A0,INPUT);
Particle.variable("light",light);
}

void loop() {
light=analogRead(A0);
}

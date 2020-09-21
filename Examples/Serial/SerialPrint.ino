/*
Connect the Photon to your Computer
Open any serial Terminal APP (TeraTerm)
Give the Port the photon is connected
select Baud Rate as 9600
Enter any value: 1
It will display as follows
Photon says it receieved
49
*/
int input=0;
void setup() {
Serial.begin(9600);
}

void loop() {
if(Serial.available()>0){
    input= Serial.read();
    
    Serial.println("Photon says it receieved");
    Serial.println(input,DEC);
}
}

// Variables
const int ledPin =  13;
const int analogPin = 0;
float voltage = 0;

// Configuration
void setup() {
  Serial.begin(9600);
}

//Boucle principale
void loop() {
  int sensorValue = analogRead(analogPin); // de 0 à 1023; N.B.: cela pourrait être aussi 
  voltage = sensorValue * (5.0 / 1023.0); //Conversion en V
  Serial.println(voltage);
  delay(1000);              // en ms
}

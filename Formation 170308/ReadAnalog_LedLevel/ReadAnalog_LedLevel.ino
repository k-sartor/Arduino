// Programme de démonstration pour allumer une led en fonction d'une tension
// Variables
const int ledPin =  13;                                       //Pin pour la led
const int analogPin = 0;                                      //Pin pour la lecture analogique
float voltage = 0;                                            //Définition de la variable en volt

// Configuration
void setup() {
  Serial.begin(9600);                                         // Initialisation du port série à 9600
  digitalWrite(ledPin, LOW);                                  //Par défaut la led est éteinte
}

//Boucle principale
void loop() {
  int sensorValue = analogRead(analogPin);                    //Sort une valeur de 0 à 1023; N.B.: cela pourrait être aussi 
  voltage = sensorValue * (5.0 / 1023.0);                     //Conversion en V
  Serial.println(voltage);                                    //Impression sur le port série avec retour à la ligne
  if (voltage >0.99){                                         //Comparaison de la valeur mesurée à un seul défini
    digitalWrite(ledPin, HIGH);                               //Allume la led connectée
  }else{
    digitalWrite(ledPin, LOW);                                //Éteint la led connectée
  }
  delay(1000);                                                //Délai en ms
}

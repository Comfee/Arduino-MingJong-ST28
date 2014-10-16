const int ledPin = 13;

const int motorPin1 = 8;   // Pin Orange
const int motorPin2 = 9;   // Pin Yellow
const int motorPin3 = 10;  // Pin Pink
const int motorPin4 = 11;  // Pin Blue
int delayTime = 10; // Delay que determina la velocidad de giro

void setup() {

//   pinMode(ledPin, OUTPUT);
   // Configuración de los PIN-es como salida digital
   pinMode(motorPin1, OUTPUT); 
   pinMode(motorPin2, OUTPUT);
   pinMode(motorPin3, OUTPUT);
   pinMode(motorPin4, OUTPUT);

   // Los pongo todos a Cero
//   digitalWrite(motorPin1, HIGH);
//   digitalWrite(motorPin2, HIGH);
//   digitalWrite(motorPin3, HIGH);
//   digitalWrite(motorPin4, HIGH);
//   delay(delayTime);
   
   // Los pongo todos a Cero
//   digitalWrite(motorPin1, LOW);
//   digitalWrite(motorPin2, LOW);
//   digitalWrite(motorPin3, LOW);
//   digitalWrite(motorPin4, LOW);
//   delay(delayTime);
}

//void blink() {
//  digitalWrite(ledPin,HIGH);
//  delay(10);
//  digitalWrite(ledPin,LOW);
//}


void loop() {
  
  digitalWrite(motorPin1, HIGH); //TAKE IT OUT AND NOTHING works 
  digitalWrite(motorPin2, LOW);
  digitalWrite(motorPin3, LOW);
  digitalWrite(motorPin4, HIGH);
//  blink();
  delay(delayTime);

  digitalWrite(motorPin1, LOW); //TAKE IT OUT AND NOTHING works 
  digitalWrite(motorPin2, LOW);
  digitalWrite(motorPin3, HIGH);
  digitalWrite(motorPin4, HIGH);
//  blink();
  delay(delayTime);

  digitalWrite(motorPin1, LOW); // TAKE IT OUT AND NOTHING works 
  digitalWrite(motorPin2, HIGH);
  digitalWrite(motorPin3, HIGH);
  digitalWrite(motorPin4, LOW);
//  blink();
  delay(delayTime);

  digitalWrite(motorPin1, HIGH); //TAKE IT OUT AND NOTHING works 
  digitalWrite(motorPin2, HIGH);
  digitalWrite(motorPin3, LOW);
  digitalWrite(motorPin4, LOW);
//  blink();
  delay(delayTime);
}

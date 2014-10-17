const int motorPin1 = 8;   // Pin Orange
const int motorPin2 = 9;   // Pin Yellow
const int motorPin3 = 10;  // Pin Pink
const int motorPin4 = 11;  // Pin Blue
const int buttonPin = 2;
int buttonState = 0;

void setup() {
   pinMode(motorPin1, OUTPUT); 
   pinMode(motorPin2, OUTPUT);
   pinMode(motorPin3, OUTPUT);
   pinMode(motorPin4, OUTPUT);
   pinMode(buttonPin, INPUT);
   
}

void step1(){
  digitalWrite(motorPin1, LOW);
  digitalWrite(motorPin2, LOW);
  digitalWrite(motorPin3, HIGH);
  digitalWrite(motorPin4, HIGH);
}

void step2(){
  digitalWrite(motorPin1, LOW); 
  digitalWrite(motorPin2, HIGH);
  digitalWrite(motorPin3, HIGH);
  digitalWrite(motorPin4, LOW);
}

void step3(){
  digitalWrite(motorPin1, HIGH);
  digitalWrite(motorPin2, HIGH);
  digitalWrite(motorPin3, LOW);
  digitalWrite(motorPin4, LOW);
}

void step4(){
  digitalWrite(motorPin1, HIGH);
  digitalWrite(motorPin2, LOW);
  digitalWrite(motorPin3, LOW);
  digitalWrite(motorPin4, HIGH);  
}

void turnNrRevsAndDelayTime(int delayMs, int turns){
  int delayTime = delayMs;
  int i;
  for(i = turns; i >= 0;i--)
  {
    step1();
    delay(delayTime);
    step2();
    delay(delayTime);
    step3();
    delay(delayTime);
    step4();
    delay(delayTime);
  }
}

void reverseTurnNrRevsAndDelayTime(int delayMs, int turns){
  int delayTime = delayMs;
  int i;
  for(i = turns; i >= 0;i--)
  {
    step4();
    delay(delayTime);
    step3();
    delay(delayTime);
    step2();
    delay(delayTime);
    step1();
    delay(delayTime);
  }
}

void loop() {
  buttonState = digitalRead(buttonPin);

  if (buttonState == HIGH){
    turnNrRevsAndDelayTime(3,5);
    turnNrRevsAndDelayTime(2,50000);  
  }
}

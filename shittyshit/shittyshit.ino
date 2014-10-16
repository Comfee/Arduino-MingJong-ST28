const int motorPin1 = 8;   // Pin Orange
const int motorPin2 = 9;   // Pin Yellow
const int motorPin3 = 10;  // Pin Pink
const int motorPin4 = 11;  // Pin Blue
//int delayTime = 3; 

void setup() {
   pinMode(motorPin1, OUTPUT); 
   pinMode(motorPin2, OUTPUT);
   pinMode(motorPin3, OUTPUT);
   pinMode(motorPin4, OUTPUT);
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
  turnNrRevsAndDelayTime(3,0);
  turnNrRevsAndDelayTime(2,500);
  reverseTurnNrRevsAndDelayTime(3,0);
  reverseTurnNrRevsAndDelayTime(2,500);

  delay(1000);
//  digitalWrite(motorPin1, LOW);
//  digitalWrite(motorPin2, LOW);
//  digitalWrite(motorPin3, HIGH);
//  digitalWrite(motorPin4, HIGH);
//  delay(delayTime);

//  digitalWrite(motorPin1, LOW); 
//  digitalWrite(motorPin2, HIGH);
//  digitalWrite(motorPin3, HIGH);
//  digitalWrite(motorPin4, LOW);
//  delay(delayTime);

//  digitalWrite(motorPin1, HIGH);
//  digitalWrite(motorPin2, HIGH);
//  digitalWrite(motorPin3, LOW);
//  digitalWrite(motorPin4, LOW);
//  delay(delayTime);
  
//  digitalWrite(motorPin1, HIGH);
//  digitalWrite(motorPin2, LOW);
//  digitalWrite(motorPin3, LOW);
//  digitalWrite(motorPin4, HIGH);
//  delay(delayTime);
}

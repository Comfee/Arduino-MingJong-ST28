#include <SoftwareSerial.h>

SoftwareSerial mySerial(0, 1); // указываем пины rx и tx соответственно
int senseur=0;

void setup()  
{
  Serial.begin(9600);
  mySerial.begin(9600);
  pinMode(13, OUTPUT);
}

void loop()
{
  if (mySerial.available())
  {
    int c = mySerial.read(); // читаем из software-порта
    Serial.write(c); // пишем в hardware-порт
  }
  if (Serial.available())
  {
    int c = Serial.read(); // читаем из hardware-порта
    mySerial.write(c); // пишем в software-порт
  }
  
  int val=analogRead(senseur);
  Serial.println(val);
  delay(100); 
}

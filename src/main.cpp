#include <Arduino.h>

#define led 9
#define touchSensor 8

int ledState = 0;

void setup() {
  pinMode (led, OUTPUT);
  pinMode (touchSensor,INPUT);
  Serial.begin(9600);
  digitalWrite(led, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  int touchValue = digitalRead(touchSensor);
  if (touchValue == HIGH && ledState == 0) {
    digitalWrite(led, HIGH);
    ledState = 1;
    delay(500);
  } else if (touchValue == HIGH && ledState == 1) {
    digitalWrite(led, LOW);
    ledState = 0;
    delay(500);
  }
}
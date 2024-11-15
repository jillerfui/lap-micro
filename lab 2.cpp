#include <Arduino.h>

int buttonpin = 2;
int ledpin = 13;
int buttonstate =0;

void setup() {
 pinMode(ledpin, INPUT_PULLUP);
 pinMode(ledpin,OUTPUT);
 Serial.begin(9600);
}

void loop() {
buttonstate = digitalRead(buttonpin);

if (buttonstate == LOW) {
  digitalWrite(ledpin, HIGH);
  Serial.println("botton pressed, LED ON");
} else {
  digitalWrite(ledpin, LOW);
  Serial.println("botton not pressed, LED OFF");
}
delay(100);
}


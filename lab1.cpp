#include <Arduino.h>

// put function declarations here:
int myFunction(int, int);

void setup() {
 pinMode(LED_BUILTIN ,OUTPUT);
 }
void loop() {
digitalWrite(LED_BUILTIN, HIGH); // เปิด LED
  delay(200); // รอ 1 วินาที (1000 มิลลิวินาที)
  
  digitalWrite(LED_BUILTIN, LOW); // ปิด LED
  delay(200); //  
  }
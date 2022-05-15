#include <Arduino.h>

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("Starting");
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("Blink on\n");
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000);

  Serial.print("Blink off\n");
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);
}
#include <HCSR04.h>

const byte TRIGGER_PIN = 13;
const byte ECHO_PIN = 12;

UltraSonicDistanceSensor distance_sensor(TRIGGER_PIN, ECHO_PIN);

void setup() {
  Serial.begin(9600);
}

void loop() {
  float distance = distance_sensor.measureDistanceCm();

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println("cm");

  delay(100);
}

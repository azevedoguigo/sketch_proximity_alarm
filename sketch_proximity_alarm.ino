#include <HCSR04.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

const byte TRIGGER_PIN = 13;
const byte ECHO_PIN = 12;
const int BUZZER_PIN = 11;

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

#define OLED_RESET -1

UltraSonicDistanceSensor distance_sensor(TRIGGER_PIN, ECHO_PIN);

Adafruit_SSD1306 display(
  SCREEN_WIDTH,
  SCREEN_HEIGHT,
  &Wire,
  OLED_RESET
);

void setup() {
  if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println("Fail to init display SSD1306!"); 
    for (;;);
  }
  display.clearDisplay();

  Serial.begin(9600);
}

void loop() {
  float distance = distance_sensor.measureDistanceCm();

  display.clearDisplay();
  display.setTextSize(2);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(20, 28);
  display.print(distance);
  display.println("cm");
  display.display();

  if (distance <= 10) {
    tone(BUZZER_PIN, 261, 250);
  }

  if (distance > 10 && distance <= 15) {
    tone(BUZZER_PIN, 261, 250);
    delay(100);
    noTone(BUZZER_PIN);
  }

  if (distance > 15 && distance <= 20) {
    tone(BUZZER_PIN, 261, 250);
    delay(150);
    noTone(BUZZER_PIN);
  }

  if (distance > 20 && distance <= 25) {
    tone(BUZZER_PIN, 261, 250);
    delay(200);
    noTone(BUZZER_PIN);
  }

  delay(50);
}

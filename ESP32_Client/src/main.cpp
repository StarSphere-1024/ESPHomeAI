#include <Arduino.h>

const int LED_Pin = 48; // 定义LED引脚

void setup()
{
  Serial.begin(115200);
  pinMode(LED_Pin, OUTPUT);
}

void loop()
{
  Serial.write("H");
  digitalWrite(LED_Pin, HIGH);
  delay(1000);
  Serial.write("L");
  digitalWrite(LED_Pin, LOW);
  delay(1000);
}

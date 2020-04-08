#include <PwmDevice.h>

PwmDevice device(3);

void setup() {
  Serial.begin(9600);
}

void loop() {
  if (Serial.available()) {
    byte value = Serial.readString().toInt();
    device.setPwm(value);
    Serial.print("PWM = ");
    Serial.println(device.getPwm());
  }
}
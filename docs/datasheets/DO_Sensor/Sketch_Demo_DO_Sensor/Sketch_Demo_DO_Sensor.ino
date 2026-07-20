#include <ESP32Servo.h>

Servo myServo;

const int servoPin = 4;   // D4 / GPIO4
int angle = 0;
int stepSize = 1;

void setup() {
  myServo.setPeriodHertz(50);      // Standard servo frequency
  myServo.attach(servoPin, 500, 2400); // Min/max pulse width in microseconds
}

void loop() {
  myServo.write(angle);
  delay(15);   // Controls sweep speed

  angle += stepSize;

  if (angle >= 180 || angle <= 0) {
    stepSize = -stepSize;  // Reverse direction
  }
}
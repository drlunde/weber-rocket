#include <Servo.h>

Servo servo1;
Servo servo2;

int pos = 0;

void setup() {
  servo1.write(pos);
  servo2.write(pos);
  servo1.attach(9);
  servo2.attach(10);
}

void loop() {
  for (int angle = 0; angle <= 180; angle++) {
    servo1.write(angle);
    servo2.write(angle);
    delay(15); // Adjust the delay time as needed
  }

  for (int angle = 180; angle >= 0; angle--) {
    servo1.write(angle);
    servo2.write(angle);
    delay(15); // Adjust the delay time as needed
  }
}

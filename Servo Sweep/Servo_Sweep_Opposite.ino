#include <Servo.h>

Servo servo1;
Servo servo2;

int pos1 = 0;
int pos2 = 180;
int increment = 1;

void setup() {
  servo1.attach(9);
  servo2.attach(10);
}

void loop() {
  servo1.write(pos1);
  servo2.write(pos2);

  pos1 += increment;
  pos2 -= increment;

  if (pos1 >= 180 || pos1 <= 0) {
    increment *= -1;
  }

  delay(15);
}

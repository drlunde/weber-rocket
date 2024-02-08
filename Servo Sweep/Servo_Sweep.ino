#include <Servo.h>

Servo servo1;
Servo servo2;

bool run = true;
int pos = 0;

void setup() {
  servo1.write(pos);
  servo2.write(pos);
  servo1.attach(9);
  servo2.attach(10);
}

void loop() {
  while (run) {
    for (int pos = 0; pos <= 180; pos++) {
      servo1.write(pos);
      servo2.write(pos);
      delay(15); 
    }

    for (int pos = 180; pos >= 0; pos--) {
      servo1.write(pos);
      servo2.write(pos);
      delay(15); 
    }
  }
}

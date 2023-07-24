#include <Servo.h>
Servo myservo;
int val;
char ch;

void setup() {
  myservo.attach(14);
  Serial.begin(9600);
}

void loop() {
  if (Serial.available()) {
    if (Serial.read() == 's') {
      val = Serial.parseInt();
      myservo.write(val);
    }
  }
}

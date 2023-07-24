#include <BluetoothSerial.h>
#include <Servo.h>
BluetoothSerial jagmeet_da_serial;
Servo myservo;
int val;
char ch;

void setup() {
  myservo.attach(14);
  jagmeet_da_serial.begin("Jagmeet di machine");  
}

void loop() {
  if (jagmeet_da_serial.available()) {
    if (jagmeet_da_serial.read() == 's') {
      val = jagmeet_da_serial.parseInt();
      myservo.write(val);
    }
  }
}

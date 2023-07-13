const int segmentA = 6;
const int segmentB = 5;
const int segmentC = 2;
const int segmentD = 3;
const int segmentE = 4;
const int segmentF = 7;
const int segmentG = 8;
const int digit1 = A4;
const int digit2 = A3;
const int digit3 = A2;
const int digit4 = A1;
const int digit5 = A0;
const int adjustPin = A7;

int del;

void setup()
{
//  Serial.begin(115200);
  pinMode(segmentA, OUTPUT);
  pinMode(segmentB, OUTPUT);
  pinMode(segmentC, OUTPUT);
  pinMode(segmentD, OUTPUT);
  pinMode(segmentE, OUTPUT);
  pinMode(segmentF, OUTPUT);
  pinMode(segmentG, OUTPUT);
  pinMode(digit1, OUTPUT);
  pinMode(digit2, OUTPUT);
  pinMode(digit3, OUTPUT);
  pinMode(digit4, OUTPUT);
  pinMode(digit5, OUTPUT);
}

void loop()
{
  del = (analogRead(adjustPin)>>2)-10;
  if(del<1)del=1;
//  Serial.println(del);
  
  selectDigit(0);
  displayDigit('H');
  selectDigit(1);
  delay(del);

  selectDigit(0);
  displayDigit('E');
  selectDigit(2);
  delay(del);

  selectDigit(0);
  displayDigit('L');
  selectDigit(3);
  delay(del);

  selectDigit(0);
  displayDigit('L');
  selectDigit(4);
  delay(del);

  selectDigit(0);
  displayDigit('0');
  selectDigit(5);
  delay(del);
}

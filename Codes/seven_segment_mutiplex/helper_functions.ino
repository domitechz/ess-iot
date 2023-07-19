void selectDigit(int num) {
  if (num == 0) {
    digitalWrite(digit1, 0);
    digitalWrite(digit2, 0);
    digitalWrite(digit3, 0);
    digitalWrite(digit4, 0);
    digitalWrite(digit5, 0);
  }
  else  if (num == 1) {
    digitalWrite(digit1, 1);
    digitalWrite(digit2, 0);
    digitalWrite(digit3, 0);
    digitalWrite(digit4, 0);
    digitalWrite(digit5, 0);
  }
  else if (num == 2) {
    digitalWrite(digit1, 0);
    digitalWrite(digit2, 1);
    digitalWrite(digit3, 0);
    digitalWrite(digit4, 0);
    digitalWrite(digit5, 0);
  }
  else if (num == 3) {
    digitalWrite(digit1, 0);
    digitalWrite(digit2, 0);
    digitalWrite(digit3, 1);
    digitalWrite(digit4, 0);
    digitalWrite(digit5, 0);
  }
  else if (num == 4) {
    digitalWrite(digit1, 0);
    digitalWrite(digit2, 0);
    digitalWrite(digit3, 0);
    digitalWrite(digit4, 1);
    digitalWrite(digit5, 0);
  }
  else if (num == 5) {
    digitalWrite(digit1, 0);
    digitalWrite(digit2, 0);
    digitalWrite(digit3, 0);
    digitalWrite(digit4, 0);
    digitalWrite(digit5, 1);
  }

}


void displayDigit(char num) {
  if (num == '0') {
    digitalWrite(segmentA, 0);
    digitalWrite(segmentB, 0);
    digitalWrite(segmentC, 0);
    digitalWrite(segmentD, 0);
    digitalWrite(segmentE, 0);
    digitalWrite(segmentF, 0);
    digitalWrite(segmentG, 1);
  }
  else if (num == '1') {
    digitalWrite(segmentA, 1);
    digitalWrite(segmentB, 0);
    digitalWrite(segmentC, 0);
    digitalWrite(segmentD, 1);
    digitalWrite(segmentE, 1);
    digitalWrite(segmentF, 1);
    digitalWrite(segmentG, 1);
  }
  else if (num == '2') {
    digitalWrite(segmentA, 0);
    digitalWrite(segmentB, 0);
    digitalWrite(segmentC, 1);
    digitalWrite(segmentD, 0);
    digitalWrite(segmentE, 0);
    digitalWrite(segmentF, 1);
    digitalWrite(segmentG, 0);
  }
  else if (num == '3') {
    digitalWrite(segmentA, 0);
    digitalWrite(segmentB, 0);
    digitalWrite(segmentC, 0);
    digitalWrite(segmentD, 0);
    digitalWrite(segmentE, 1);
    digitalWrite(segmentF, 1);
    digitalWrite(segmentG, 0);
  }
  else if (num == '4') {
    digitalWrite(segmentA, 1);
    digitalWrite(segmentB, 0);
    digitalWrite(segmentC, 0);
    digitalWrite(segmentD, 1);
    digitalWrite(segmentE, 1);
    digitalWrite(segmentF, 0);
    digitalWrite(segmentG, 0);
  }
  else if (num == '5') {
    digitalWrite(segmentA, 0);
    digitalWrite(segmentB, 1);
    digitalWrite(segmentC, 0);
    digitalWrite(segmentD, 0);
    digitalWrite(segmentE, 1);
    digitalWrite(segmentF, 0);
    digitalWrite(segmentG, 0);
  }
  else if (num == '6') {
    digitalWrite(segmentA, 0);
    digitalWrite(segmentB, 1);
    digitalWrite(segmentC, 0);
    digitalWrite(segmentD, 0);
    digitalWrite(segmentE, 0);
    digitalWrite(segmentF, 0);
    digitalWrite(segmentG, 0);
  }
  else if (num == '7') {
    digitalWrite(segmentA, 0);
    digitalWrite(segmentB, 0);
    digitalWrite(segmentC, 0);
    digitalWrite(segmentD, 1);
    digitalWrite(segmentE, 1);
    digitalWrite(segmentF, 1);
    digitalWrite(segmentG, 1);
  }
  else if (num == '8') {
    digitalWrite(segmentA, 0);
    digitalWrite(segmentB, 0);
    digitalWrite(segmentC, 0);
    digitalWrite(segmentD, 0);
    digitalWrite(segmentE, 0);
    digitalWrite(segmentF, 0);
    digitalWrite(segmentG, 0);
  }
  else if (num == '9') {
    digitalWrite(segmentA, 0);
    digitalWrite(segmentB, 0);
    digitalWrite(segmentC, 0);
    digitalWrite(segmentD, 0);
    digitalWrite(segmentE, 1);
    digitalWrite(segmentF, 0);
    digitalWrite(segmentG, 0);
  }
  ////////////////////////////////////////////SOME ALPHABETS///////////////
  else if (num == 'H') {
    digitalWrite(segmentA, 1);
    digitalWrite(segmentB, 0);
    digitalWrite(segmentC, 0);
    digitalWrite(segmentD, 1);
    digitalWrite(segmentE, 0);
    digitalWrite(segmentF, 0);
    digitalWrite(segmentG, 0);
  }
  else if (num == 'E') {
    digitalWrite(segmentA, 0);
    digitalWrite(segmentB, 1);
    digitalWrite(segmentC, 1);
    digitalWrite(segmentD, 0);
    digitalWrite(segmentE, 0);
    digitalWrite(segmentF, 0);
    digitalWrite(segmentG, 0);
  }
  else if (num == 'L') {
    digitalWrite(segmentA, 1);
    digitalWrite(segmentB, 1);
    digitalWrite(segmentC, 1);
    digitalWrite(segmentD, 0);
    digitalWrite(segmentE, 0);
    digitalWrite(segmentF, 0);
    digitalWrite(segmentG, 1);
  }
}

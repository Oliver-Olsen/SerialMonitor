//Oliver Olsen s205443
//Nils Wulff   s223968

// 5a. The provided code allows the user to enter a char in the serial monitor.
// This char is then stored in the incomingByte variable. This variable stores the entered char.
// This char is then printed back to the terminal/monitor as a decimal number. The Serial.available() returns an integer
// that represents if there is anything storred in the serial's buffer.
#include <Arduino.h>

// put function declarations here:
int incomingByte = 0;
void setup() {
  Serial.begin(9600);
}
void loop() {
  if (Serial.available() > 0) {
    incomingByte = Serial.read();
    Serial.print("I received: ");
    Serial.println(incomingByte, DEC);
  }
}



// put function definitions here:
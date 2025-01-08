//Oliver Olsen s205443
//Nils Wulff   s223968

// 5a. The provided code allows the user to enter a char in the serial monitor.
// This char is then stored in the incomingByte variable. This variable stores the entered char.
// This char is then printed back to the terminal/monitor as a decimal number. The Serial.available() returns an integer
// that represents if there is anything storred in the serial's buffer.
// The Serial.read() allows the user to enter a char.
#include <Arduino.h>

// 5b. The provided code has been implemented below

// 5d. The Serial.println() contains a DEC. Also because we are storing our data as an integer. This forces the the entered letter to be printed as a decimal.
// This is the decimal representation of the binary value the letter have.
// We could also have written BIN to get the representation of the char's binary value
// put function declarations here:

// 5e 
int incomingByte = 0;
void setup() {
  Serial.begin(9600);
}


void loop() {
  if (Serial.available() > 0) {
    incomingByte = Serial.read();
    Serial.print("I received: ");
    Serial.println((char)incomingByte);
  }
}



// put function definitions here:
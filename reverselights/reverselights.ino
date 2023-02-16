/*
  Kathie Matta
  Group Project - Reverse Lights

  Parts required:
  - one green LED
  - one yelllow LED
  - one blue LED
  - one green LED
  - 2 pushbuttons
  - 2- 10 kilohm resistor
  - four 220 ohm resistors

  created 13 Sep 2012
  by Scott Fitzgerald

  https://store.arduino.cc/genuino-starter-kit

  This example code is part of the public domain.
*/

// Create a global variable to hold the state of the switches. This variable is
// persistent throughout the program. Whenever you refer to switchState, you’re
// talking about the number it holds
int regularswitch = 0;
int reverseswitch =  0;

void setup() {
  // declare the LED pins as outputs
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);

  // declare the switch pins as an input
  pinMode(2, INPUT);
  pinMode(3, INPUT);
}

void loop() {

  // read the value of the switches
  // digitalRead() checks to see if there is voltage on the pins or not
  regularswitch = digitalRead(2);
  reverseswitch = digitalRead(3);

  // if regularswitch is pressed turn on all lights alternatively starting from red to green
  if (regularswitch == HIGH) {
    digitalWrite(4, LOW); // turn the green LED on pin 4 off
    digitalWrite(5, LOW); // turn the blue LED on pin 5 off
    digitalWrite(6, LOW);  // turn the yellow LED on pin 6 off
    digitalWrite(7, HIGH);  // turn the red LED on pin 7 on
    // wait for a quarter second before changing the light
    delay(250);
    digitalWrite(4, LOW); // turn the green LED on pin 4 off
    digitalWrite(5, LOW); // turn the blue LED on pin 5 off
    digitalWrite(6, HIGH);  // turn the yellow LED on pin 6 on
    digitalWrite(7, LOW);  // turn the red LED on pin 7 off
    // wait for a quarter second before changing the light
    delay(250);
    digitalWrite(4, LOW); // turn the green LED on pin 4 off
    digitalWrite(5, HIGH); // turn the blue LED on pin 5 on
    digitalWrite(6, LOW);  // turn the yellow LED on pin 6 off
    digitalWrite(7, LOW);  // turn the red LED on pin 7 off
    // wait for a quarter second before changing the light
    delay(250);
    digitalWrite(4, HIGH); // turn the green LED on pin 4 on
    digitalWrite(5, LOW); // turn the blue LED on pin 5 off
    digitalWrite(6, LOW);  // turn the yellow LED on pin 6 off
    digitalWrite(7, LOW);  // turn the red LED on pin 7 off
    // wait for a quarter second before shutting all lights off
    delay(1000);
  }
  // if reverseswitch is pressed turn on all lights alternatively starting from green to red
  else if (reverseswitch == HIGH) {
    digitalWrite(4, HIGH); // turn the green LED on pin 4 on
    digitalWrite(5, LOW); // turn the blue LED on pin 5 off
    digitalWrite(6, LOW);  // turn the yellow LED on pin 6 off
    digitalWrite(7, LOW);  // turn the red LED on pin 7 off
    // wait for a quarter second before changing the light
    delay(250);
    digitalWrite(4, LOW); // turn the green LED on pin 4 off
    digitalWrite(5, HIGH); // turn the blue LED on pin 5 on
    digitalWrite(6, LOW);  // turn the yellow LED on pin 6 off
    digitalWrite(7, LOW);  // turn the red LED on pin 7 off
    // wait for a quarter second before changing the light
    delay(250);
    digitalWrite(4, LOW); // turn the green LED on pin 4 off
    digitalWrite(5, LOW); // turn the blue LED on pin 5 off
    digitalWrite(6, HIGH);  // turn the yellow LED on pin 6 on
    digitalWrite(7, LOW);  // turn the red LED on pin 7 off
    // wait for a quarter second before changing the light
    delay(250);
    digitalWrite(4, LOW); // turn the green LED on pin 4 off
    digitalWrite(5, LOW); // turn the blue LED on pin 5 off
    digitalWrite(6, LOW);  // turn the yellow LED on pin 6 off
    digitalWrite(7, HIGH);  // turn the red LED on pin 7 on
    // wait for a quarter second before shutting all lights off
    delay(1000);
  }
  // this else is part of the above if() statement.
  // if the switch is not LOW (the button is pressed) turn off the green LED and
  // blink alternatively the red LEDs
  else {
    digitalWrite(4, LOW); // turn the blue LED on pin 4 off
    digitalWrite(5, LOW); // turn the green LED on pin 5 off
    digitalWrite(6, LOW);  // turn the yellow LED on pin 6 off
    digitalWrite(7, LOW);  // turn the red LED on pin 7 on
  }
}

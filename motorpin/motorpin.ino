//Introducing the constants of the switch and the motor
const int switchPin = 2;
const int motorPin = 9;

int switchState = 0;

void setup() {
  // Selecting as an input and an output the switch and the motor
  pinMode(motorPin, OUTPUT);
  pinMode(switchPin, INPUT);
}

void loop() {
  // Reading if the switch has been pushed
  switchState=digitalRead(switchPin);
  if(switchState==HIGH) {
    //If the switch has been pushed make the motor spin
    digitalWrite(motorPin, HIGH);
  }
  else{
    //If the switch has not been pushed don't make the motor spin
    digitalWrite(motorPin, LOW);
  }

}


// Import a library from the Arduino folder
#include <CapacitiveSensor.h>

//Select the two pins that will act as the capacitor
CapacitiveSensor capSensor = CapacitiveSensor(4,2); // Pin 2 is sensor pin

//Insert the minimum value provided by the sensor to detect the touch
int threshold = 1000;
const int ledPin = 13; 

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // read the sensor value:
  long sensorValue = capSensor.capacitiveSensor(30);
  Serial.println(sensorValue);

  //Touch Detected
  if (sensorValue > threshold) {
    // Turn on the led
    digitalWrite(ledPin, HIGH);
  } else{
    //Turn off the led
    digitalWrite(ledPin, LOW);
  }
  delay(10);
}

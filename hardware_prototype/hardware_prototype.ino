/*
  Button

  Turns on and off a light emitting diode(LED) connected to digital pin 13,
  when pressing a pushbutton attached to pin 2.

  The circuit:
  - LED attached from pin 13 to ground
  - pushbutton attached to pin 2 from +5V
  - 10K resistor attached to pin 2 from ground

  - Note: on most Arduinos there is already an LED on the board
    attached to pin 13.

  created 2005
  by DojoDave <http://www.0j0.org>
  modified 30 Aug 2011
  by Tom Igoe

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/Button
  incremented counter using this source: http://forum.arduino.cc/index.php?topic=129170.0
  incremented timer using help from Cody Mitchell.
*/

// constants won't change. They're used here to set pin numbers:
const int sensorPin = 3;     // the number of the pushbutton pin
const int ledPin =  8;      // the number of the LED pin

// variables will change:
int sensorState = 0;         // variable for reading the pushbutton status
int numOpens = 0;            // variable for recording the times the door is opened
int lastsensorState = 0;     // variable for recording whether the door was last opened or closed
int timer = 0;

void setup() {
  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(sensorPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  // read the state of the pushbutton value:
  sensorState = digitalRead(sensorPin);

  if(sensorState != lastsensorState){
    if(sensorState == LOW){
      numOpens++;
      Serial.print(numOpens);
      Serial.println();
      Serial.print(timer);
      Serial.println();
    }
  }
lastsensorState = sensorState;

  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (numOpens >= 5){
    digitalWrite(ledPin, HIGH);
    delay(5000);
    digitalWrite(ledPin, LOW);
    numOpens = 0;
  }
delay(10);
timer++;
if(timer >= 1000){
  numOpens = 0;
  timer = 0;
}
}

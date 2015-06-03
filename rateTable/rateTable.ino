/*
The code for controlling the stepper motor for the table to test the gyroscopes. 

Setup
- get the python script https://github.com/soapy1/WatSat/blob/master/tools/writetocsv.py
  - this will allow you to read the output from the arduino (speed of stepper) and attach
    a timestamp
- attach the arduino+stepper motor to host computer
- you should now be able to control the table by entering "w" or "s" to the serial port
- if you run the python script during the test you will get a csv with the contents
  of the serial port and the timestamp from when that data was retrieved
*/
#include <Stepper.h>
// change this to fit the number of steps per revolution
// for your motor
const int stepsPerRevolution = 200;  

Stepper myStepper(stepsPerRevolution, 8, 9, 10, 11);
int stepCount = 0;  // number of steps the motor has taken
int motorSpeed = 100;
int ib; 
int ledPin = 13;

void setup() {
    Serial.begin(9600);
    pinMode(ledPin, OUTPUT);
}

void loop() {
    if (ib == 'w') {
        motorSpeed += 1;
    } else if (ib == 's') {
        motorSpeed -= 1;
    }
 
    Serial.println(motorSpeed);
    if (motorSpeed > 0) {
        myStepper.setSpeed(motorSpeed);
      // step 1/100 of a revolution:
        myStepper.step(stepsPerRevolution / 100);
    }
}


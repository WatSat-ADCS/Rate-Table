# Rate-Table
Rate table for testing Gyro's!

## Purpose
The purpose of this repo it to provide the code (and perhaps in the future the mechanical and electrical schematics) for a rate table that will be used for testing gyro's.

## Considerations
* the sensors need to be wireless
  * it is suggested to use XBee because WatSat should have all the hardware and implementation is easy
* you should use the provided script writetocsv.py for collecting data

## Setup
1. attach the stepper motor to the arduino as shown in the image below
[setup]
2. upload the provided arduino sketch
3. attach a platform to the stepper motor faching up (this is where the sensor should be placed)
[setup]: https://lh6.googleusercontent.com/b3q-5CNIKd5WE5p6rhvGC0KafwZcp87V6rp7rlrp2O0DbmyDMq-cXmJ1xHu1gQcKApgpeYNSXj1odwU=w1342-h487
At this point, you should have a table that can rotate with some speed. You should further be able to increase the speed by entering ‘w’ and decrease the speed by entering ‘s’.

## Running Tests
* following whichever wireless strategy you chose establish a wireless connection between the sensor and testing computer. If you used [XBee this may be helpful].
* place sensors on the table and start up the table at the desired starting speed
* run the writetocsv.py script to collect the data from the sensors
* the data should be output to a csv and you should be able to do your analysis

[XBee this may be helpful]: https://learn.sparkfun.com/tutorials/exploring-xbees-and-xctu

## Using writetocsv

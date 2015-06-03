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
![rate table fritzing sketch](https://cloud.githubusercontent.com/assets/976973/7950538/21baac68-096a-11e5-8f95-15519e2af054.png)
2. upload the provided arduino sketch
3. attach a platform to the stepper motor faching up (this is where the sensor should be placed)

At this point, you should have a table that can rotate with some speed. You should further be able to increase the speed by entering ‘w’ and decrease the speed by entering ‘s’.

## Running Tests
* following whichever wireless strategy you chose establish a wireless connection between the sensor and testing computer. If you used [XBee this may be helpful].
* place sensors on the table and start up the table at the desired starting speed
* run the writetocsv.py script to collect the data from the sensors
* the data should be output to a csv and you should be able to do your analysis

[XBee this may be helpful]: https://learn.sparkfun.com/tutorials/exploring-xbees-and-xctu

## Using writetocsv
This script uses python2 to collect data from your computer's serial port and write it to a csv file in the same directory that you are running the script from. It takes the command line arguments:

` --port `
This is the port that the arduino is attached to. By default is /dev/ttyACM0 which will most likely be the right port if you are using Linux.

` --duration`
This is the length of time in seconds that the script will collect samples.

For example
```
python2 writetocsv.py --port /dev/ttyACM0 --duration 100
```

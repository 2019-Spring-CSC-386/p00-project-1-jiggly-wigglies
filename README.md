# P00: Stuffer Stopper

**Author(s)**: *Rusty Dotson, Hayes Clark*

**Google Document**: *https://docs.google.com/document/d/1Yr8ZmxMphmbY5k99sDViwSRO1JFI8glimYSl_ks4h9w/edit?usp=sharing*

---
## Purpose
The problem that we are trying to solve is over-eating and/or wasting energy, by locking users out of their refrigerator. Leaving the fridge door open for too long wastes energy and leaving the door open is a bad habit. Also, opening the fridge to grab snacks multiple times could also lead to weight problems that could easily be stopped. We will have a sensor to check how many times and how long a refrigerator is opened and lock the door after a specific amount of time.

## Initial Design Plan
Physical Components:
- refridgerator, the primary subject
- electronic lock, locks the door when opened too many times and too long
- door sensor, checks when the door is opened
- Arduino, used to program the locking mechanism
- capacitor, prevent misreads on the door sensor
- resistor, used to create a voltage divider
- LED, used as an example of a door lock

Coding Components
- timer
- code that sets the door to lock
- checker to see how many times the door opens

## Summary
  During our planning phase, we both encountered issues related to sleep deprivation, and time wasted playing video games.
Bad eating habits seemed to be a less prevalent issue, but we finally decided to create a device to automatically lock a fridge
based on the fact that the other two ideas seemed to already have reasonable solutions to deal with them. 

  For our initial design plan, we were going to use a laser and a light dependent resistor to detect when the door was opened, but elected to use a magnetic door sensor when we found some in the lab. Our final implementation detects when the door opens using a magnetic sensor, then increments a counter. When the counter hits a certain value within a specified amount of time, the electromagnet lock turns on.
  
  We estimate that we spent a total of 10-12 hours to complete this project. A challenge that we overcame that was not required for the project was using a transistor to control an external power supply because we were using a device that required 12 volts.


## Instructions
1. Mount the metal plate on to the desired door
2. Mount the white magnet to same door
3. Mount the door sensor to the frame, such that it aligns with the magnet when the door is shut
4. Mount the electromagnet such that it contacts the metal plate when the door is shut 
5. Power on the device, it will automatically lock the door for an hour after you have opened the door 5 times in the span of an hour

## Errors And Constraints
- User has no way to adjust number of opens or refresh time
- No feedback other than locking
- User can not see how much time is left on the lock
- User can not see number of opens remaining
- Lock is not strong enough to prevent a hard pull

## Reflection

While we think this project ended up good, there are certain things we would like to change, given time to do so. 
We would like to use an LCD screen to perform several functions. We want to have a menu that allows users to set their own parameters, like amount of time that the door stays locked, how many times the door ust be opened, and the time interval before the counter resets.

Our final design meets the expectations that we initally had for this project. Its very simple, yet effective in its execution. It's easy for the end user since it only requires mounting in order to be used. In conclusion, we think this project generally turned out well, and if we had to restart from the beginning, we would do the same project, but implement it with a screen and user input.

## References

This is where we got the example code to increment a counter.
http://forum.arduino.cc/index.php?topic=129170.0

This is where example code for our diital input came from.
http://www.arduino.cc/en/Tutorial/Button

**Images**:

![Prototype #1](images/prototype.jpg)

![Prototype #2](images/prototype2.jpg)

## Files
images            - a folder which will contain images of the project hardware.

LICENSE           - It's the license that allows certain software usage for the project.

README.md         - the README.md is this document which will be used to help users understand what our product does.

example-README.md - an example to help developers create the README.md file.

hardware_prototype/hardware_prototype.ino - The program used for the arduino to use the lock based on the number of opens.

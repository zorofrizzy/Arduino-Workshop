# Arduino-Workshop
Codes for the students who attended the workshop on\
Basics of electronics and Arduino Interfacing.

This repository contains codes for the students who attended the workshop   
on Basic Electronics and Arduino Interfacing held at ADGITM, New Delhi,  
formerly known as Northern India Engineering College.

# The workshop was held on 3 accounts
1. 8th - 9th October, 2018
2. 3rd - 5th March, 2019
3. 4th - 6th April, 2020

There are pin declarations made in the codes to ease out the connections\
the circuits. However, if a pin is not mentioned (only in the case of Bluetooth)\
then no connection is required on those pins.  

VCC and GND pins are automatically assumed to be connected in all cases.

# Points to be Noted

## Bluetooth
HC05 – Read a string with Bluetooth

Pin information:

•	State - The State pin goes HIGH when you are connected to a device (for Bluetooth communication).   
      This pin stays LOW even if a device is paired, therefore unless connected the pin stays LOW.   
•	RXD – This is the pin connected to the Arduino TX pin for communication. It works as a receiver.  
•	TXD – This pin is connected to the Arduino RX pin communication. Works as a transfer pin.  
•	GND – Ground pin   
•	VCC – Power pin, one can supply 5V here.  
•	EN/KEY – This pin is used to enter the AT mode for communication.  

## Ultrasonic

PULSEIN() Reads a pulse (either HIGH or LOW) on a pin. For example, if value is HIGH,  
pulseIn() waits for the pin to go from LOW to HIGH, starts timing, then waits for the  
pin to go LOW and stops timing. Returns the length of the pulse in microseconds or  
gives up and returns 0 if no complete pulse was received within the timeout.

Pulse length finding is basically important for communication type signals and sonar  
type signals where the operations are duration based.




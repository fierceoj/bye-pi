#!/usr/bin/env python3

#Python code to shutdown raspberry pi
#uses gpiozero library and BCM pin numbers

from gpiozero import Button
import subprocess

#wait for button press
#BCM pin 21, physical pin 40, wiringPi pin 29
Button(21).wait_for_press()
print('Powering down the raspberry pi...\n')
subprocess.call(['sudo', 'poweroff'])

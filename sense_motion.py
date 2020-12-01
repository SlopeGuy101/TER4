"""sense_motion.py: GPIO code to be ran on a Raspberry Pi to interface with the 
digital GPIO pins. Exits with code 1 if motion is detected from a PIR sensor module"""
__author__ = "Adrian Joaquin"
__date__ = "11/2020"
__version__ = "0.5 (alpha)"

import RPi.GPIO as GPIO

GPIO.setwarnings(False)
GPIO.setmode(GPIO.BOARD)

#Take input from pin 3
GPIO.setup(3, GPIO.IN)

#Only stops scanning for input if it is recieved (value changes to 1)
def sense():
    while True:
        motion = GPIO.input(3)
        if motion == 1:
            exit(1)
"""command.py: module classifies user voice input into command types"""
__author__ = "Adrian Joaquin"
__date__ = "11/2020"
__version__ = "0.5 (pre-alpha)"

from handle import transcribe
import sys

#Any possible entry will be an object of entry class
class entry:
    def __init__(self, content):
        self.cont = content

    #Class-level variable: all entries either are math or are not
    is_math = False

    #For math entries, check mathematical operation
    def get_op(self):
        words = self.cont.split(" ")
        with open("Math Dictionary.txt") as dict:
            for i in words:
                if words[i] in dict.split("\n"):
                    is_math = True
                    return words[i]

#A command is any instruction for the system to execute as a feature
command = entry(transcribe().lower())

#If the command is to perform a math operation, log the operation and
#pass corresponding command code to BASH
if command.is_math:
    with open("Math Transfer.txt", "w") as trans:
        trans.write(command.cont)
        sys.stdout.write(command.get_op())
        sys.exit(0)
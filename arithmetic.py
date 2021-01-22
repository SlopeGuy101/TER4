"""arithmetic.py: Takes a sentence and an operation code to evaluate a math
expression"""
__author__ = "Adrian Joaquin"
__date__ = "12/2020"
__version__ = "1.0.1"

import sys
from handle import speak

#Finds numbers in the given equation and returns appropriate operation applied
def solve(sentence, op):
    values = []
    commands = sentence.split(" ")
    #if len(commands) > 3:
     #   speak("Please provide an opertion of two numbers and one operand.")
      #  return "Try again"
    for i in range(len(commands)):
        try:
            try:
                numbers = int(commands[i])
                values.append(numbers)
            except(ValueError):
                i += 1
	#Prints an error message and returns error code "FAILED" if
	#parameters are not properly satisfied
        except(IndexError):
            speak("expression could not be evaluated")
            return "FAILED"


    def multiply():
        return (values[1]*1.0)*values[0]
    def divide():
        return (values[1]*1.0) / (values[0]*1.0)
    def add():
        return values[1] + values[0]
    def subtract():
        return values[1] - values[0]
    def exp():
        return values[0]**values[1]

    #Use of dictionary to dictate the operation based on op
    outcomes = {0 : multiply(), 1 : divide(), 2 : add(), 3: subtract(), 4 : exp()}
    if op not in outcomes:
        print(op)
        sys.stdout.write("AN ERROR OCCURED")
        sys.exit(0)
    else:
        return outcomes[op]


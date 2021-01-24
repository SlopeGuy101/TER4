"""arithmetic.py: Takes a sentence and an operation code to evaluate a math
expression"""
__author__ = "Adrian Joaquin"
__date__ = "01/2021"
__version__ = "1.0.2"

import sys
from handle import speak

#Finds numbers in the given equation and returns appropriate operation applied
def solve(sentence, op):
    values = []
    commands = sentence.split(" ")
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


    multiply = lambda: (values[1]*1.0)*values[0]
    divide = lambda: (values[1]*1.0) / (values[0])
    add = lambda: values[1] + values[0]
    subtract = lambda: values[1] - values[0]
    exp = lambda: values[0]**values[1]


    #Use of dictionary to dictate the operation based on op
    outcomes = {0 : multiply, 1 : divide, 2 : add, 3: subtract, 4 : exp}
    if op not in outcomes:
        print(op)
        sys.stdout.write("AN ERROR OCCURED")
        sys.exit(0)
    else:
        return outcomes[op]

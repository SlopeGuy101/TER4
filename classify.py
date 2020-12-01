"""command.py: module classifies user voice input into command types"""
__author__ = "Adrian Joaquin"
__date__ = "11/2020"
__version__ = "0.5 (alpha)"

import sys
import speech_recognition as sr
from arithmetic import solve
from sense_motion import sense


def main():
    #Only move into function when 
    #sense()
    #Method transcribes spoken text into string input
    def transcribe():
        r = sr.Recognizer()
        mic = sr.Microphone()

        #Listens from systems microphone, set to usb sound card for Raspberry Pi 4
        with mic as source:
            audio = r.listen(source)
            t_f_s = r.recognize_google(audio, language = 'en-US')
            print(t_f_s)
        return t_f_s

    #Any possible entry will be an object of entry class
    class entry:
        def __init__(self, content):
            self.cont = content
            self.op = self.get_op()

        #Class-level variable: all entries either are math or are not
        is_math = False

        #For math entries, check mathematical operation
        def get_op(self):
            words = self.cont.split(" ")
            with open("Math_Dictionary.txt") as dict:
                dictionary = dict.read().split("\n")
                #print(words)
                for i in range(len(words)):
                    for j in range(len(dictionary)):
                        if words[i] == dictionary[j]:
                            #print(words[i])
                            return words[i]

    #A command is any instruction for the system to execute as a feature
    command = entry(transcribe().lower())

    #If the command is to perform a math operation, log the operation and
    #pass corresponding command code to BASH
    if command.is_math:
        print(solve(command.cont, command.op.split(" ")[1]))
    
    main()

main()
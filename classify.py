"""classify.py: handles the classification and appropriate modeule executions
based on voice input"""
__author__ = "Adrian Joaquin"
__date__ = "11/2020"
__version__ = "0.5 (alpha)"

import sys
import speech_recognition as sr
from arithmetic import solve
from sense_motion import sense
from handle import speak
import temp


def main():
    #Only move into function when motion is sensed
    sense()
    #Method transcribes spoken text into string input
    def transcribe():
        try:
            r = sr.Recognizer()
            mic = sr.Microphone()

            #Listens from systems microphone, set to usb sound card or bluetooth earpiece
	    #for Raspberry Pi 4 B
            with mic as source:
                r.adjust_for_ambient_noise(source)
                audio = r.listen(source)
                t_f_s = r.recognize_google(audio, language = 'en-US')
                print(t_f_s)
            return t_f_s
        except:
            speak("Sorry, I didn't quite get that. Please try again")
            transcribe()

    #Any possible entry will be an object of entry class
    class entry:
        def __init__(self, content):
            self.cont = content
            self.op = self.get_op()

        #Class-level variable: all entries either are math or are not
        is_math = False

        #For math entries, check mathematical operation
        def get_op(self):
            try:
                dictionary = {"*" : 0, "/" : 1, "+" : 2, "-" : 3, "^" : 4}
                words = self.cont.split(" ")
                for i in range(len(words)):
                    if words[i] in dictionary:
                        self.is_math = True
                        return dictionary[words[i]]
            except(AttributeError):
                speak("Sorry, I didn't quite get that. Please try again.")
                main()

    #A command is any instruction for the system to execute as a feature
    command = entry(transcribe())

    #If the command is to perform a math operation, solve
    if command.is_math:
        speak(str(solve(command.cont, command.op)))

    temp_keywords = ("temperature", "hot", "cold", "warm", "degrees")
    for i in command.cont.split(" "):
        if i in temp_keywords:
            temp.get_temp()

    main()

main()

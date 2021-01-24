"""classify.py: handles the classification and appropriate modeule executions
based on voice input"""
__author__ = "Adrian Joaquin"
__date__ = "01/2021"
__version__ = "1.1"

import sys
import speech_recognition as sr
from arithmetic import solve
from handle import speak
import temp

listening = False

def main():

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
    def process_command():
        if listening:
            command = entry(transcribe())

            #If the command is to perform a math operation, solve
            if command.is_math:
                speak(str(solve(command.cont, command.op)))

            #Identifies commands requesting the temperature feature
            temp_keywords = ("temperature", "hot", "cold", "warm", "degrees")
            for i in command.cont.split(" "):
                if i in temp_keywords:
                    temp.get_temp()

    #Wait for wake keyword before taking command
    active = transcribe()
    if "wake" in active.split(" ") and listening:
        speak("I'm listening")
        process_command()
    elif "wake" in active.split(" "):
        listening = True
        speak("What can I do for you")
        process_command()
    if "thank" or "thanks" in active.split():
        listening = False

    main()

main()

"""handle.py: This modulde handles the intake of speech and the output of spoken text"""
__author__ = "Adrian Joaquin"
__date__ = "11/2020"
__version__ = "0.5 (pre-alpha)"


import speech_recognition as sr
from gtts import gTTS
import sys
import os

#Command line arguments passed to module from BASH
sentence = sys.argv[1]
op = sys.argv[2]

#Function uses google text to speech (gTTS) to speak text
def speak(txt):
    output = gTTS(text = txt, lang = 'en', slow = False)

    #Saves as .mp3 file and uses mpg321 to read file using the system's voice
    output.save("output.mp3")
    os.system("mpg321 output.mp3")


#Method transcribes spoken text into string input
def transcribe():
    r = sr.Recognizer()
    mic = sr.Microphone(device_index = 0)

    #Listens from systems microphone, set to usb sound card for Raspberry Pi 4
    with mic as source:
        audio = r.listen(source)
        t_f_s = r.recognize_google(audio, language = 'en-US')
    return t_f_s


#Execute one of the features depending on input from the command line / BASH script
if op == 1:
    speak(sentence)
else:
    sys.stdout.write(transcribe())
    sys.exit(0)

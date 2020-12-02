"""handle.py: This modulde handles the intake of speech and the output of spoken text"""
__author__ = "Adrian Joaquin"
__date__ = "11/2020"
__version__ = "0.5 (alpha)"


from gtts import gTTS
import os


#Function uses google text to speech (gTTS) to speak text
def speak(txt):
    output = gTTS(text = txt, lang = 'en', slow = False)

    #Saves as .mp3 file and uses mpg321 to read file using the system's voice
    output.save("output.mp3")
    os.system("mpg321 output.mp3")



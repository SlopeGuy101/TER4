import speech_recognition as sr
from gtts import gTTS
import sys
import os

sentence = sys.argv[1]
op = sys.argv[2]

if op == 1:
    speak(sentence)
if op == 2:
    transcribe(sentence)
if op == 3:
    statement = transcribe()
    if "multiply" or "times" or "multiplied" in statement:
        exit(statement + "x")
    if "divide" or "divided" or "over" in statement:
        exit(statement + "/")
    if "to the" or "power" in statement:
        exit(statement + "^")
    if "add" or "plus" in statement:
        exit(statement + "+")
    if "subtract" or "minus" in statement:
        exit(statement + "-")
    else:
        exit(1)

def transcribe():
    r = sr.Recognizer
    mic = sr.Microphone
    with mic as source:
        input = r.listen(source)
        t_f_s = r.recognize_google(audio, language = 'en-us')
    return input


def speak(txt):
    output = gTTS(text = txt, lang = 'en', slow = False)
    output.save("output.mp3")
    os.system("mpg321 output.mp3")

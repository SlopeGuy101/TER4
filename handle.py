import speech_recognition as sr
from gtts import gTTS
import sys
import os

sentence = sys.argv[1]
op = sys.argv[2]

def speak(txt):
    output = gTTS(text = txt, lang = 'en', slow = False)
    output.save("output.mp3")
    os.system("mpg321 output.mp3")


def transcribe():
    r = sr.Recognizer
    mic = sr.Microphone
    with mic as source:
        input = r.listen(source)
        t_f_s = r.recognize_google(audio, language = 'en-us')
    return input


if op == 1:
    speak(sentence)
else:
    exit(transcribe())

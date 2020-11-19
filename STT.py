import speech_recognition as sr
from gtts import gTTS
import sys
import os

sentence = sys.argv[1]
op = sys.argv[2]

if op == 1:
    tanslate(sentence)
if op == 2:
    speak(sentence)

def transcribe(input):
    r = sr.Recognizer
    mic = sr.Microphone
    with mic as source:
        audio = r.listen(source)
        t_f_s = r.recognize_google(audio, language = 'en-us')
    return audio


def speak(txt):
    output = gTTS(text = txt, lang = 'en', slow = False)
    output.save("output.mp3")
    os.system("mpg321 output.mp3")

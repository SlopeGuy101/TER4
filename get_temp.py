import serial
from handle import speak
arduino = serial.Serial('/dev/ttyACM0', 9600, timeout = .1)
while True:
    data = arduino.readline()[:-2]
    if data:
        temp = str(data)[1:]
        speak(("It is" + temp + "degrees in here"))
        exit(0)
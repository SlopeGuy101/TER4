import serial
from handle import speak
arduino = serial.Serial('/dev/ttyACM0', 9600, timeout = .1)
data = arduino.readline()
while data:
    print(data)
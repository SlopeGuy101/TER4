import serial
from handle import speak
arduino = serial.Serial('/dev/ttyACM0', 115200, timeout = .1)
while True:
    data = arduino.readline()[:-2]
    if data:
        print(data)
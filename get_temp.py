import serial
from handle import speak
arduino = serial.Serial('/dev/ttyACM0', 115200, timeout = .1)
data = arduino.readline()
while True:
    print(data)
import RPi.GPIO as GPIO

GPIO.setwarnings(False)
GPIO.setmode(GPIO.BOARD)

GPIO.setup(3, GPIO.IN)

while True:
    motion = GPIO.input(11)
    if motion == 1:
        exit(1)



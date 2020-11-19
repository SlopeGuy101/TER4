# ENSURE TO LAUNCH ALL SCRIPTS FROM SAME DIRECTORY
main(){
	python3 motion_sensor.py
	python3 STT.py
	cmnd=$?
	
	case cmnd in
		1)
			java math.java
			if [[ $? -eq 1 ]]; then
				python3 STT.py "Please provide a calculation with two numbers. Try again." 2
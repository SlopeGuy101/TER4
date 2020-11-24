# ENSURE TO LAUNCH ALL SCRIPTS FROM SAME DIRECTORY

#Checks if an error code was returned from math.java
checkMath(){
	if [[ $? -eq 1 ]]; then
		python3 handle.py "Please provide two numbers and one operation in your equation" 1
		main
	fi
}

main(){
	#Script only moves forward once motion is sensed
	python3 sense_motion.py
	#Command for execution comes from command.py
	cmnd=`python3 classify.py`
	
	#If classify.py returned a math statement, evaluate accordingly
	case $cmnd in
		"*")
			java math.java "1"
			checkMath
			;;
		"/")
			java math.java "2"
			checkMath
			;;
		"+")
			java math.java "3"
			checkMath
			;;
		"-")
			java math.java "4"
			checkMath
			;;
		"^")
			java math.java "5"
			checkMath
			;;
	esac
	
	#main function recurses to acccomodate for future commands
	main
}
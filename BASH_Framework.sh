# ENSURE TO LAUNCH ALL SCRIPTS FROM SAME DIRECTORY
main(){
	python3 sense_motion.py
	python3 command.py
	cmnd = $?
	
	case $cmnd in
		"multiply" | "multiplied" | "multiplied by")
			java math.java $cmnd 1
			checkMath()
		
		"divided by" | "divide" | "over")
			java math.java $cmnd 2
			checkMath()
		
		"plus" | "add" | "added to")
			java math.java $cmnd 3
			checkMath()
				
		"minus" | "subtract" | "subtracted from")
			java math.java $cmnd 4
			checkMath()
				
		"to the")
			java math.java $cmnd 5
			checkMath()
				
	esac
	
	main()
	}
	
	checkMath(){
		if [[ $? -eq 1 ]]; then
				python3 handle.py "Please provide two numbers and one operation in your equation" 1
				main()
	}
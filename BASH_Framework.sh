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
	#python3 sense_motion.py
	#Command for execution comes from command.py
	cmnd=`python3 classify.py`
	echo "SCRIPT ENTERED"
	#echo $cmnd
	
	#If classify.py returned a math statement, evaluate accordingly
	case $cmnd in
		[*])
			echo "CASE WAS 1"
			java math.java "1"
			checkMath
			;;
		/)
			echo "CASE WAS 2"
			java math.java "2"
			checkMath
			;;
		+)
			echo "CASE WAS 3"
			java math.java "3"
			checkMath
			;;
		-)
			echo "CASE WAS 4"
			java math.java "4"
			checkMath
			;;
		^)
			echo "CASE WAS 5"
			java math.java "5"
			checkMath
			;;
		*)
			echo "NO CASE WAS SATISFIED"
			echo $cmnd
			;;
	esac
	
	#main function recurses to acccomodate for future commands
	main
}
main
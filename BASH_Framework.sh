# ENSURE TO LAUNCH ALL SCRIPTS FROM SAME DIRECTORY
main(){
	python3 sense_motion.py
	python3 command.py
	cmnd = $?
	
	
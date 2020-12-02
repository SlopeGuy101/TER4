import sys

def solve(sentence, op):
    commands = sentence.split(" ")
    for i in range(len(commands)):
        try:
            values.append(int(commands[i]))
        except(TypeError):
            print("EXPRESSION CANNOT BE EVALUATED")
            exit(1)
    

    def multiply():
        return (values[1]*1.0)*values[0]
    def divide():
        return (values[1]*1.0) / (values[0]*1.0)
    def add():
        return values[1] + values[0]
    def subtract():
        return values[1] - values[0]
    def exp():
        return values[0]**values[1]

    outcomes = {0 : multiply(), 1 : divide(), 2 : add(), 3: subtract(), 4 : exp()}
    if op not in outcomes:
        print(op)
        sys.stdout.write("AN ERROR OCCURED")
        sys.exit(0)
    else:
        return outcomes[op]


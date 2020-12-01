def solve(sentence, op):
    values = []
    try:
        num_count = 0
        commands = sentence.split(" ")
        for i in range(10):
            for j in range(len(commands)):
                if str(i) == commands[j]:
                    num_count += 1
                    values[num_count-1] = int(commands[j])
    except:
        return 1

    def multiply():
        return (values[1]*1.0)*values[0]
    def divide():
        return (values[1]*1.0) / (values[0]*1.0)
    def add():
        return values[1] + values[0]
    def subtract():
        return values[1] - values[0]
    def exp():
        return values[1]**values[0]

    outcomes = {0 : multiply(), 1 : divide(), 2 : add(), 3: subtract(), 4 : exp()}
    return outcomes[op]


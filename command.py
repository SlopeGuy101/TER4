from handle import transcribe

class entry:
    def __init__(self, content):
        self.cont = content

    is_math = False

    def get_op(self):
        words = self.cont.split(" ")
        with open("Math Dictionary.txt") as dict:
            for i in words:
                if words[i] in dict.split("\n"):
                    math = True
                    return words[i]

command = entry(transcribe().lower())

if command.is_math:
    exit(command.get_op())

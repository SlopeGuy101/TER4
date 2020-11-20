from handle import transcribe

class entry:
    def __init__(self, content):
        self.cont = content

    def is_math(self):
        words = self.cont.split(" ")
        with open("Math Dictionary.txt") as dict:
            for i in words:
                if words[i] in dict:
                    return True

command = entry(transcribe().lower())

if command.is_math():
    

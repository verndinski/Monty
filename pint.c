class MiniBytecodeInterpreter:
    def __init__(self):
        self.stack = []

    def push(self, arg):
        try:
            num = int(arg)
        except ValueError:
            print(f"L{self.line_number}: usage: push integer")
            exit(1)
        self.stack.append(num)

    def pint(self):
        if not self.stack:
            print(f"L{self.line_number}: can't pint, stack empty")
            exit(1)
        print(self.stack.pop())

    def pall(self):
        for num in reversed(self.stack):
            print(num)
        self.stack.clear()

    def run(self, bytecode, line_number):
        self.line_number = line_number
        for instruction in bytecode:
            opcode, arg = instruction
            if opcode == "push":
                self.push(arg)
            elif opcode == "pint":
                self.pint()
            elif opcode == "pall":
                self.pall()
            else:
                raise ValueError(f"Unknown opcode: {opcode}")

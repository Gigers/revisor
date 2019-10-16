class Pilha2():
    def __init__(self):
        self.pilha = []
    def Push(self, item):
        self.pilha.append(item)
    def Pop(self):
        self.pilha.pop()
    def Top(self):
        return self.pilha[-1]
    def isEmpty(self):
        return self.pilha == []

def verificaExg(argup):
    pilha = Pilha2()

    for i in argup:
        if i == "(":
            pilha.Push(i)
        else:
            if pilha.isEmpty():
                return False
            else:
                pilha.Pop()
    if pilha.isEmpty():
        print("Expressão bem formada")
    else:
        print("Expressão mau formada")

verificaExg(input("Insira uma expressão: "))
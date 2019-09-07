# Verifica se as expressões são ou não bem formadas

class Pilha():
    def __init__(self):
        self.pilha = []
    def Push(self, item):
        self.pilha.append(item)
    def Pop(self):
        self.pilha.pop()
    def isEmpty(self):
        return self.pilha == []

def verificaExpressao(argue):
    pilha = Pilha()

    for i in argue:
        if i == '(':
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

expression = input("Insira uma expressão: ")

verificaExpressao(expression)
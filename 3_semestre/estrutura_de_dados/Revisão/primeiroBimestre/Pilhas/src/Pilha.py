class Pilha():
    def __init__(self):
        self.pilha = []
    def push(self, item):
        self.pilha.append(item)
    def pop(self):
        self.pilha.pop()
    def isEmpty():
        return self.pilha == []
    def top(self):
        return self.pilha[-1]
    def allElements(self):
        return self.pilha

pilha = Pilha()

print("Empilhando")
pilha.push(123)
pilha.push(321)
pilha.push(123321)

print(pilha.allElements())

print("Desempilhando")
pilha.pop()

print(pilha.allElements())
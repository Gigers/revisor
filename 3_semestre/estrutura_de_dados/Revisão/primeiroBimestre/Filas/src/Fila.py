class Fila():
    def __init__(self):
        self.fila = []
    def inserir(self, item):
        self.fila.append(item)
    def excluir(self):
        if not self.vazio():
            del self.fila[0]  # Removendo do inicio
    def vazio(self):
        return self.fila == []

fila = Fila()

print(fila.vazio())
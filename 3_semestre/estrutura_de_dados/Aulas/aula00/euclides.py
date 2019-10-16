'''
Calcular o mdc(a, b) recursivamente
Usando o algoritmo de Euclides

'''

def mdc(a, b):
    m = a % b
    print(m)
    if m > 0:
        return mdc(b, m)

print(mdc(23732, 180))

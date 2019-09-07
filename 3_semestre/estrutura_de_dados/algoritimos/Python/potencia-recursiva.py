'''
Calcule a potência de x elevado a n pot(x, n). Ex.: pot(2, 3) = 8.
'''

def pot(a, b):
    if b == 1:
        return a
    if b > 1:
        return a * pot(a, b - 1) 

print(pot(2,3))

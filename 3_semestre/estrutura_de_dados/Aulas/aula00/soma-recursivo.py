'''

Calcule a soma dos dígitos de um inteiro positivo n. Ex.: sd(123) = 6.

'''

def sd(n):
    if n <= 9:
        return n
    else:
        return n % 10 + sd(n//10)

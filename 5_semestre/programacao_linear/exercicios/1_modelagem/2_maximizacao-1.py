'''
Exercício de maximização de modelo (1)
'''

from pulp import *

# Definindo o problema
problema = LpProblem('Maximizar os valores gerados pelo modelo', LpMaximize)

# 1° - Identificar as variáveis de interesse
## Aqui já é declarado que as variáveis x1 e x2 tem que ser maior ou igual zero
x_1 = LpVariable('x1', 0, None)
x_2 = LpVariable('x2', 0, None)

# 2° - Definir a função objetivo
problema += (4 * x_1) + (8 * x_2)

# 3° - Aplicar as restrições
problema += (3 * x_1) + (2 * x_2) <= 18
problema += (x_1 + x_2) <= 5
problema += x_1 <= 4

# Problema resolvido com Simplex (Será visto em sala)
GLPK().solve(problema)

for v in problema.variables():
    print (v.name, '=', v.varValue)


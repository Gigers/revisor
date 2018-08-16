'''
As indústrias Sara Cura de produtos Farmacêuticos
desejam produzir dois medicamentos, um analgésico e
um antibiótico, que dependem de duas matérias-primas
A e B, que estão disponíveis em quantidades de 8 e 5
toneladas, respectivamente.
Na fabricação de uma tonelada de analgésico são
empregadas uma tonelada da matéria A e uma tonelada
da matéria B, e na fabricação de uma tonelada de
antibiótico são empregadas quatro toneladas de A e uma
tonelada de B.
Sabendo que cada tonelada de antibiótico é vendida a
$8,00 e de analgésico a $5,00, encontre a quantidade de
toneladas de medicamentos a ser produzida pelas
indústrias Sara Cura de maneira a maximizar sua
receita.
'''

from pulp import *

# O problema
problema = LpProblem('Maximizar a receira', LpMaximize)

# 1° - Definir as variáveis de interesse
x1_analgesico = LpVariable('x1', 0, None)
x2_antibiotico = LpVariable('x2', 0, None)

# 2° - Definir a função objetivo
problema += (x1_analgesico * 5) + (x2_antibiotico * 8)

# 3° - Definir as restrições
problema += (x1_analgesico * 1) + (x2_antibiotico * 4) <= 8 # Matéria A
problema += (x1_analgesico * 1) + (x2_antibiotico * 1) <= 5 # Matéria B

## Resolvendo 
GLPK().solve(problema)

for v in problema.variables():
    print(v.name, '=', v.varValue)


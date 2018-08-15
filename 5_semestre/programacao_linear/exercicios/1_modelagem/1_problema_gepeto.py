'''
Gepeto fabrica dois tipos de brinquedos e madeira: soldados e trens.
Um soldado é vendido por $27,00 e usa $10 de matéria prima. Cada soldado que é fabricado tem custos indiretos de $14.
Um trem é vendido por $21 e usa $9 de matéria prima. Cada trem tem custos indiretos de $10.
A fabricação destes tipos de brinquedos requer dois tipos de
profissionais: carpinteiros e especialistas em acabamento.
Um soldado necessita 2 horas de acabamento e 1 hora de carpintaria. Um trem necessita 1 hora de acabamento e 1 hora de
carpintaria. Por semana, Gepeto pode obter toda a matéria prima necessária,
porém conta com 100 horas no acabamento e 80 na carpintaria.
A demanda por trens é ilimitada, porém no máximo, 40 soldados
são vendidos por semana. Gepeto gostaria de maximizar seus lucros semanais ( receita –custos)
'''

from pulp import *

# O problema
problema = LpProblem('Maximizar lucros semanais', LpMaximize)

# 1° Passo - Definir as variáveis de interesse
x1_soldado = LpVariable('x1', 0, None)
x2_trens = LpVariable('x2', 0, None)

# 2° Passo - Definir a função objetivo
## A função objetivo é adicionada ao problema, neste caso houve a subtração dos gastos para saber o custo
problema += (x1_soldado * (27 - (10 + 14))) + (x2_trens * (21 - (9 + 10))) 

# 3° Passo - Definir as restrições

## Tempo
problema += ((x1_soldado * 2) + x2_trens) <= 100 # Acabamento
problema += (x1_soldado + x2_trens) <= 80 # Carpintária
problema += x2_trens <= 40 # Quantidade de trens

## Resolvendo

### Simplex (Ainda será visto em sala de aula)
GLPK().solve(problema)

## Exibindo o resultado
for v in problema.variables():
    print (v.name, '=', v.varValue)

## Valor objetivo
# print("Objetivo = ", value(problema.objective))

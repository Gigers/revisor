#!/usr/bin/bash

# Execução:
# chmod +x teste-fatorial nome-arquivo-a-ser-testado-sem-fatorial nome-arquivo-a-ser-testado-com-fatorial

echo " " 

echo "Sem fatorial"
time python $1

echo " "

echo "Com fatorial"
time python $2

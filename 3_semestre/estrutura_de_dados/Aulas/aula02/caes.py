# Listando os nomes dos cachorros de a-z

import requests
import string
from bs4 import BeautifulSoup

html = 'https://www.bayerpet.com.br/caes/lista-nomes/A/1'

def mostraNome(pagina):

    r = requests.get(pagina)

    bsObj = BeautifulSoup(r.content, 'html.parser')


    #Puxando toda a estrutura ul que tenha a classe listNames
    #Não é necessário utilizar o findAll, isso porque em análise da estrutura, foi percebido que há apenas uma tabela
    #Tirando a necessidade de buscar por toda a página pela tabela
    nomes = bsObj.findAll('ul', {'class': 'listNames'})

    # Estrutura a ser utilizada para a coleta dos nomes
    for nome in nomes:
        print(nome.text)


for letra in string.ascii_uppercase:
    for n in (1, 2 ,3):
        
        novo = html[:-3] + letra + '/' + str(n)

        mostraNome(novo)

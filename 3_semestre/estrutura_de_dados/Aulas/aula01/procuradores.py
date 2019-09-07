# Lista os procuradores do estado de São Paulo

# Perceba que para extrair as informações, foi necessário antes entender a estrutura ao qual o dado estava armazenada

from urllib.request import urlopen
from bs4 import BeautifulSoup

html = urlopen('https://sismpconsultapublica.mpsp.mp.br/ConsultarDistribuicao/ObterFiltrosPorMembro')

bsObj = BeautifulSoup(html, 'html.parser')

lista = bsObj.findAll('option')

for name in lista:
    print(name.get_text())

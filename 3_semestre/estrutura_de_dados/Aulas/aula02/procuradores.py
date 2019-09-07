# Lista os procuradores do estado de São Paulo

from urllib.request import urlopen
from bs4 import BeautifulSoup

html = urlopen('https://sismpconsultapublica.mpsp.mp.br/ConsultarDistribuicao/ObterFiltrosPorMembro')

bsObj = BeautifulSoup(html, 'html.parser')

lista = bsObj.findAll('option')

for name in lista[1:-5]:
    print(name.get_text())

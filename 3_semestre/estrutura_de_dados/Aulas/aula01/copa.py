#Parse dos valores das obras da Copa do mundo no Brasil

from urllib.request import urlopen
from bs4 import BeautifulSoup

html = urlopen("http://www.portaltransparencia.gov.br/copa2014/api/rest/empreendimento")

bsObj = BeautifulSoup(html, 'xml')

valor = bsObj.findAll('valorTotalPrevisto')

total = 0;

for name in valor:
    total += float(name.get_text())

print(total)

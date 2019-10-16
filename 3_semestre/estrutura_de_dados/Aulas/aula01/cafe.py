# Pegando valor do cafe 

from urllib.request import urlopen
from bs4 import BeautifulSoup


# Colocando a página dentro da variavel html
html = urlopen('http://beans.itcarlow.ie/prices.html')

bsObj = BeautifulSoup(html.read(), 'html.parser')


print("Valor do café agora: " + bsObj.strong.getText());

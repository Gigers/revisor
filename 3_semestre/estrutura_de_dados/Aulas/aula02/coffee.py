import requests
import string
from bs4 import BeautifulSoup

html = 'https://www.yellowpages.com/search?search_terms=coffe&geo_location_terms=Los+Angeles%2C+CA'

r = requests.get(html)

bsObj = BeautifulSoup(r.content, 'html.parser')

lojas = bsObj.findAll('span')

cont = 0
for loja in lojas:
    cont += 1
    print(loja.text)

    if cont == 7:
        print('-----')
        cont = 0

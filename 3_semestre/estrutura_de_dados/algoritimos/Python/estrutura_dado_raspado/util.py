import sqlite3

def connect():

    conn = sqlite3.connect('data.db')
    sql = conn.cursor()

    sql.execute("""
        CREATE TABLE infos (
            valor_gasto INTEGER NOT NULL PRIMARY KEY,
            nome_deputado TEXT NOT NULL
        );
    """)

def getData():
    files = open('9678-2014.txt', 'r')

    dados = files.readlines()

    dados = str(dados)

    dados = dados.replace('[', '')

    return dados

def resolveData(data):

    search = data[52:]

    valores = []

    for i in search:
        if(i == '-' or i == '+'):
            break
        else:
            valores.append(i)

    return valores

def genValues(valores):

    temp = ''
    dinheiros = []

    for i in valores:
        if(i != ' '):
            temp += i
        else:
            dinheiros.append(temp)
            temp = ''

    return dinheiros

def getDeputados(data):

    start = data.find(('AUTOR(ES):'))
    start = start + 10
    end = data.find('ASSINATURA _')

    return data[start: end]

connect()

'''
data = getData()
valores = resolveData(data)
dinheiro_gasto = genValues(valores)
deputados_envolvidos = getDeputados(data)

print('Foram gastos: ')

for i in range(0, len(dinheiro_gasto)):

    if(dinheiro_gasto[i] == '0'):
        continue
    else:
        print(dinheiro_gasto[i])

print('Responsáveis: ')
print(deputados_envolvidos)
'''
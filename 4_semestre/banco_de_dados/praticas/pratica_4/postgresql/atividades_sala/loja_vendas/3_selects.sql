-- A cláusula SELECT

-- 1. Listar a descrição do produto, o valor e o seu valor acrescido de 10%
SELECT pro_descricao, 
       pro_valor_unidade,
       TRUNC(pro_valor_unidade * 1.10, 2) AS Acrescido
FROM produto;

-- Restringindo e classificando dados
-- cláusula WHERE

-- 1. Limitando clientes apenas do Rio de Janeiro
SELECT cli_nome, cli_endereco
FROM cliente
WHERE cli_estado = 'RJ';

-- 2. Listar os pedidos que foram realizados em '10/06/2012'
SELECT ped_numero, ped_data
FROM pedido
WHERE ped_data = TO_DATE('10/06/2012', 'DD/MM/YYYY');

-- 3. Listar os pedidos que forma realizados entre '10/06/2011' e '10/06/2012'

SELECT ped_numero, ped_data
FROM pedido
WHERE ped_data BETWEEN TO_DATE('10/06/2011', 'DD/MM/YYYY') AND TO_DATE('10/06/2012', 'DD/MM/YYYY');

-- Exibindo dados de várias tabelas
-- Lembre-se de que, o WHERE serve para que possamos aplicar uma condição de junção válida.
-- As junções (JOINS) são utilizados para obter dados de várias tabelas
-- Junções idênticas (Equi-Join) (Junções simples / Junções internas) - Para a realização destes utiliza-se o WHERE

-- 4. Listar os pedidos realizados. Nome do cliente e data do pedido
SELECT c.cli_nome AS Nome, p.ped_data AS Data
FROM pedido p, cliente c
WHERE c.cli_codigo = p.cli_codigo;

-- 5. Listar os nomes e os telefones dos clientes
SELECT c.cli_nome, t.tel_numero
FROM cliente c, telefone t
WHERE c.cli_codigo = t.cli_codigo;

-- Junções externas (OuterJoin)
-- 6. Listar os nomes e os telefones dos clientes (Somente clientes que tem telefone)
-- 6.1 Utilizando o LEFT JOIN
SELECT c.cli_nome, t.tel_numero
FROM cliente c
LEFT JOIN telefone t
ON c.cli_codigo = t.cli_codigo
WHERE t.tel_numero IS NOT NULL;

-- 6.2 Utilizando o RIGHT JOIN
SELECT c.cli_nome, t.tel_numero
FROM cliente c
RIGHT OUTER JOIN telefone t
ON c.cli_codigo = t.cli_codigo
WHERE t.tel_numero IS NOT NULL;



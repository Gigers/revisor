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


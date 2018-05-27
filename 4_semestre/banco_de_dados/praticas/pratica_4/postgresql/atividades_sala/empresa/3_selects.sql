-- 1. Listar os funcionários que estão alocados em departamento e também os departamentos que não possuem funcionários.
SELECT f.func_cod, f.func_nome, d.dep_id, d.dep_descricao
FROM funcionario f
RIGHT JOIN departamento d
ON f.dep_id = d.dep_id;

-- 2. Liste os funcionários que estão alocados em um departamento, também os que não estão alocados e os departamentos que não possuem funcionários alocados
SELECT f.func_cod, f.func_nome, d.dep_id, d.dep_descricao
FROM funcionario f
FULL OUTER JOIN departamento d
ON f.dep_id = d.dep_id;

-- Junções Não-idênticas (No Equijoin)
-- 3. Exibir o nome do funcionário, seu salário e o código correspondente a sua faixa salarial (Sem utilizar `=`)
SELECT e.emp_nome, e.emp_sal, fas.fa_cod
FROM empregado e, faixa_salarial fas
WHERE e.emp_sal BETWEEN fas.fa_menor AND fas.fa_maior;

-- 4. Listar os pedidos (Número do pedido, nome do cliente, nome do vendedor)
SELECT p.ped_numero, c.cli_nome, v.ven_nome
FROM pedido p,
     cliente c,
     vendedor v
WHERE (p.ven_codigo = v.ven_codigo AND c.cli_codigo = p.cli_codigo);

-- 5. Listar os pedidos realizados na data 12/04/2011 (Número do pedido, nome do cliente e nome do vendedor)
SELECT p.ped_numero, c.cli_nome, v.ven_nome
FROM pedido p,
     cliente c,
     vendedor v
WHERE p.ven_codigo = v.ven_codigo AND 
      c.cli_codigo = p.cli_codigo AND
      p.ped_data = TO_DATE('12/04/2011', 'DD/MM/YYYY');

-- Auto junções
-- Esta ocorre quando há apenas uma junção simples, assim ao utilizar o WHERE como cláusula de junção, esta AUTO JUNÇÂO já ocorre.

-- Funções de grupo
-- Estas operam em conjuntos de linhas para fornecer um resultado por grupo.
-- Funções AVG e SUM 
-- AVG - Média
SELECT AVG(func_sal)
FROM funcionario
WHERE dep_id = 1;

-- SUM - Somatório
SELECT SUM(func_sal)
FROM funcionario
WHERE dep_id = 2;

-- Utilizando AVG e SUM juntos
SELECT AVG(func_sal), SUM(func_sal)
FROM funcionario;

-- Funções MIN e MAX
-- MIN - Busca o valor mínimo
-- MAX - Busca o valor máximo
SELECT MIN(func_sal), MAX(func_sal)
FROM funcionario;

-- Função COUNT - Função de contagem
SELECT COUNT(*)
FROM funcionario
WHERE dep_id = 2;

-- Outro exemplo de COUNT
SELECT COUNT(dep_id)
FROM funcionario;

-- Mais um exemplo - Este utilizando o DISTINCT, esta cláusula que garante a unicidade dos elementos retornados
SELECT COUNT(DISTINCT dep_id)
FROM funcionario;

-- Ao trabalhar com grupos, pode-se ter problemas com valores nulos, para isso funções como NVL (Oracle) resolvem o problema, colocando qualquer outro valor no campo que é nulo, evitando problemas.

/*
    Script com a solução dos exercícios propostos na prática 4 de banco de dados.
    
    Criado por: Gigers
*/
    
-- 1.	Listar o nome da pessoa do empréstimo de número 1.
SELECT
    p.pes_nome
FROM
    pessoa p,
    emprestimo e
WHERE
    p.pes_cod = e.pes_cod AND e.emp_cod = 1;
    
-- 2. Listar todas as editoras ordenadas por ordem alfabética.
SELECT
    ed.edi_descricao
FROM
    editora ed
ORDER BY ed.edi_descricao ASC;

-- 3. Exibir os títulos dos livros que começam com a letra A.
-- Inserindo livros que tenham a letra A no inicio para a consulta ter resultados
INSERT INTO LIVRO VALUES (8, 'Alice', 1, 2009, 1);
INSERT INTO LIVRO VALUES (9, 'Balice', 2, 2010, 2); COMMIT;

SELECT
    l.liv_titulo
FROM
    livro l
WHERE
    LOWER(l.liv_titulo) LIKE 'a%';

-- 4. Exibir os títulos dos livros que começam com a letra A e que tenham o ano de publicação maior que 2013.
-- Atualizando um registro para que este possa ser utilizado na consulta
UPDATE LIVRO
    SET anopublicacao = 2015
WHERE
    liv_cod = 8;

UPDATE LIVRO
    SET anopublicacao = 2017
WHERE
    liv_cod = 9; COMMIT;
        
SELECT
    l.liv_titulo,
    l.anopublicacao
FROM
    livro l
WHERE
    UPPER(l.liv_titulo) LIKE 'A%' AND l.anopublicacao > 2013;

-- 5. Exibir a quantidade de telefones que possuem DDD igual a 12
SELECT
    COUNT(DISTINCT tel_cod) AS QUANTIDADE
FROM
    telefone
WHERE
    tel_ddd = 12;

-- 6. Listar a quantidade de empréstimo por aluno. (exiba: - pes_nro_matricula e - quantidade). 
SELECT
    alu.pes_nro_matricula AS matricula,
    COUNT(ie.emp_cod)
FROM
    pessoa pes
INNER JOIN
    aluno alu
ON
    pes.pes_cod = alu.pes_cod
INNER JOIN
    emprestimo em
ON
    em.pes_cod = alu.pes_cod
INNER JOIN
    item_emprestimo ie
ON
    ie.emp_cod = em.emp_cod
GROUP BY
    alu.pes_nro_matricula;

-- 7. Listar as editoras e os seus livros. (exiba: - edi_cod, edi_descricao, - liv_cod). 
SELECT
    e.edi_cod,
    e.edi_descricao,
    l.liv_titulo
FROM
    editora e
INNER JOIN
    livro l
ON
    e.edi_cod = l.edi_cod;

-- 8. Listar os códigos dos exemplares (exe_cod), a descrição (exe_descricao) do empréstimo realizado em uma determinada data. (10/10/15)
-- Criando uma view que contém a junção das três tabelas que serão utilizadas
CREATE OR REPLACE VIEW quick_exemple AS
    SELECT
        em.emp_cod AS CODIGO_EMPRESTIMO,
        ex.exe_cod AS CODIGO_EXEMPLAR,
        ex.exe_descricao AS DESCRICAO_EXEMPLAR,
        em.emp_data_emprestimo AS DATA_EMPRESTIMO
    FROM
        emprestimo em
    INNER JOIN
        item_emprestimo ie
    ON
        em.emp_cod = ie.emp_cod
    INNER JOIN
        exemplar ex
    ON
        ie.exe_cod = ex.exe_cod;

-- Filtrando os dados da view
SELECT codigo_emprestimo, codigo_exemplar , descricao_exemplar FROM quick_exemple WHERE data_emprestimo = '10/10/15';

-- 9. Listar os livros que possuam mais de 3 exemplares.
-- Inserindo um exemplar para testar o select
INSERT INTO exemplar VALUES (21, 1, 8, NULL);

SELECT * 
FROM
    (SELECT
        l.liv_titulo,
        COUNT(ex.exe_cod) AS qtd
    FROM
        livro l
    INNER JOIN
        exemplar ex
    ON
        l.liv_cod = ex.liv_cod 
    GROUP BY l.liv_titulo) tt
WHERE
    tt.qtd > 3;

-- 10. Listar os professores (nome e titulação) com seus respectivos telefones. 
-- OBS: Listar também os professores que não tenham telefone. Realizar duas resoluções uma com a sintaxe ANSI e outra com a sintaxe ORACLE.
-- Inserindo dados para que a consulta possa ser testada
INSERT INTO pessoa VALUES (20, 'Jesé', 12345, 222, 'email@contoso.com');
INSERT INTO professor VALUES (20, 'Doutorado'); COMMIT;

SELECT
    pes.pes_nome,
    pro.titulacao,
    tel.tel_numero
FROM
    pessoa pes
INNER JOIN
    professor pro
ON
    pes.pes_cod = pro.pes_cod
LEFT JOIN
    telefone tel
ON
    pes.pes_cod = tel.pes_cod;

-- 11. Listar o livro (liv_titulo) mais antigo da biblioteca
SELECT
    l.liv_titulo
FROM
    livro l,
    (SELECT MIN(anopublicacao) AS MENOR FROM livro) lA
WHERE
    l.anopublicacao = lA.MENOR;

-- 12.	Exibir o nome da pessoa que mais emprestou livro na biblioteca.
-- Criando uma view para facilitar o processo
CREATE OR REPLACE VIEW greatest_book AS
    SELECT 
        p.pes_cod AS cod,
        COUNT(em.emp_cod) AS cout 
    FROM 
        emprestimo em, 
        pessoa p 
    WHERE 
        em.pes_cod = p.pes_cod 
    GROUP BY 
        p.pes_nome, p.pes_cod
    ORDER BY cout DESC;

SELECT
    pes.pes_nome
FROM
    pessoa pes
WHERE
    pes.pes_cod = (SELECT cod FROM greatest_book WHERE ROWNUM = 1);

-- 13. Listar a quantidade de exemplares por livro.
SELECT
    l.liv_titulo,
    COUNT(ex.exe_cod) AS qtd
FROM
    livro l
INNER JOIN
    exemplar ex
ON
    l.liv_cod = ex.liv_cod 
GROUP BY l.liv_titulo;

-- 14. Listar os livros (liv_titulo) que começam com A e possuem ano de publicação maior que 2011.
SELECT
    liv_titulo
FROM
    livro
WHERE 
    UPPER(liv_titulo) LIKE 'A%' AND anopublicacao > 2011;

-- 15. Listar os livros emprestados pela pessoa de código 1 (Listar liv_titulo)
SELECT
    l.liv_titulo
FROM
    emprestimo em
INNER JOIN
    item_emprestimo ie
ON
    em.emp_cod = ie.emp_cod
INNER JOIN
    exemplar ex
ON
    ie.exe_cod = ex.exe_cod
INNER JOIN
    livro l
ON
    l.liv_cod = ex.liv_cod
WHERE
    em.pes_cod = 1;

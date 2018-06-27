/*
    Este arquivo cont�m todos os passos para a solu��o dos exerc�cios propostos no documento. 
    
    Criado por: Gigers
*/

-- Listando todos os objetos criados pelo usu�rio atual
SELECT 
    OBJECT_NAME
FROM
    USER_OBJECTS;

-- Listando a estrutura da tabela (DESC)
DESC USER_OBJECTS;

-- Listando as restri��es aplicadas em uma tabela
SELECT
    constraint_name, constraint_type, status, search_condition
FROM
    user_constraints
WHERE
    table_name = 'USER_OBJECTS';

-- Criando as tabelas

/* 
    Tabela departamento
    Regras:
        - DEPARTAMENTO.NOME = Preenchimento obrigat�rio
*/
CREATE TABLE DEPARTAMENTO (
    dep_cod NUMBER(4),
    dep_nome VARCHAR2(30) NOT NULL,
    dep_data_inicial DATE,

    CONSTRAINT pk_dep_cod PRIMARY KEY (dep_cod)
);

/*
    Tabela localiza��o
    Regras:
        - N�o h� regras definidas para esta tabela
*/
CREATE TABLE LOCALIZACAO (
    loc_local VARCHAR2(252),
    dep_cod NUMBER(4),

    CONSTRAINT fk_dep_cod FOREIGN KEY (dep_cod) REFERENCES departamento (dep_cod),
    CONSTRAINT pk_loc_local PRIMARY KEY (loc_local, dep_cod)
);

/*
    Tabela projeto
    Regras:
        - PROJETO.TITULO = Preenchimento obrigat�rio
        - PROJETO.DATA_CAD = Data de cadastro dos projetos com valor padr�o igual � data do dia. 
                                A fun��o que retorna a data do dia no oracle � Sysdate.
*/
CREATE TABLE PROJETO (
    proj_cod NUMBER(4),
    proj_titulo VARCHAR2(150) NOT NULL,
    proj_descricao VARCHAR(252),
    proj_data_cad DATE DEFAULT SYSDATE,
    dep_cod NUMBER(4),

    CONSTRAINT pk_proj_cod PRIMARY KEY (proj_cod),
    CONSTRAINT fk_proj_dep_cod FOREIGN KEY (dep_cod) REFERENCES departamento (dep_cod)
);

/*
    Tabela Funcion�rio
    Regras:
        - FUNCIONARIO.NOME = Preenchimento obrigat�rio
        - FUNCIONARIO.CPF = N�o pode haver duas inst�ncias com mesmo valor no campo CPF.
        - FUNCIONARIO.SALARIO = O sal�rio dos funcion�rios n�o pode ser menor que 1000,00.
        - FUNCIONARIO.SEXO = S� aceitar os caracteres �M� ou �F�.
        - FUNCIONARIO.COD_SUPER = coluna usada para defini��o do auto-relacionamento
*/

CREATE TABLE FUNCIONARIO (
    func_cod NUMBER(4),
    func_nome VARCHAR2(100) NOT NULL,
    func_cpf VARCHAR2(15),
    func_salario DECIMAL (4, 2),
    func_endereco VARCHAR2(252),
    func_sexo CHAR(1),
    func_cod_super NUMBER(4),
    dep_cod NUMBER(4),

    CONSTRAINT pk_func_cod PRIMARY KEY (func_cod),
    CONSTRAINT un_func_cpf UNIQUE (func_cpf),
    CONSTRAINT ck_func_salario CHECK (func_salario >= 1000),
    CONSTRAINT ck_func_sexo CHECK (func_sexo IN ('M', 'F')),
    CONSTRAINT fk_func_cod_super FOREIGN KEY (func_cod_super) REFERENCES funcionario (func_cod),
    CONSTRAINT fk_func_cod_depart FOREIGN KEY (dep_cod) REFERENCES departamento (dep_cod)
);

/*
    Tabela Dependente
    Regras:
        - DEPENDENTE.NOME = Preenchimento obrigat�rio
        - DEPENDENTE.PARENTESCO = Preenchimento obrigat�rio
        - DEPENDENTE.PARENTESCO = S� aceitar valores dentro do conjunto (�PAI�,�M�E�, �IRMAOS�,�FILHO�)
*/
CREATE TABLE DEPENDENTE ( 
    func_cod NUMBER(4),
    depen_seq NUMBER(4),
    depen_nome VARCHAR2(100) NOT NULL,
    depen_parentesco VARCHAR2(30) NOT NULL,
    depen_data_nasc DATE,
    
    CONSTRAINT fk_func_cod FOREIGN KEY (func_cod) REFERENCES funcionario (func_cod),
    CONSTRAINT pk_depen_seq PRIMARY KEY (depen_seq, func_cod),
    CONSTRAINT ck_depen_parentesco CHECK (depen_parentesco IN ('PAI', 'M�E', 'IRM�OS', 'FILHO'))
);

/*
    Tabela Participa
    Regras:
        - N�o h� regras declaradas para esta tabela
*/
CREATE TABLE PARTICIPA (
    func_cod NUMBER(4),
    proj_cod NUMBER(4),
    par_horas VARCHAR2(50),
    
    CONSTRAINT fk_par_func_cod FOREIGN KEY (func_cod) REFERENCES funcionario (func_cod),
    CONSTRAINT fk_par_proj_cod FOREIGN KEY (proj_cod) REFERENCES projeto (proj_cod),
    CONSTRAINT pk_par PRIMARY KEY (func_cod, proj_cod)
);

-- Salva o resultado dos comandos no banco
COMMIT;

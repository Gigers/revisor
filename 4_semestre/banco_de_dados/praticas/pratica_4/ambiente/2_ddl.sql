/*
DROP TABLE DEVOLUCAO;
DROP TABLE ITEM_EMPRESTIMO;
DROP TABLE EXEMPLAR;
DROP TABLE LIVRO;
DROP TABLE EDITORA;
DROP TABLE TELEFONE;
DROP TABLE PROFESSOR;
DROP TABLE ALUNO;
DROP TABLE EMPRESTIMO;
DROP TABLE PESSOA;
*/

CREATE TABLE Pessoa (
pes_cod number PRIMARY KEY,
pes_nome varchar2(40),
cpf number(11),
rg varchar2(20),
email varchar2(30)
);


CREATE TABLE Professor (
pes_cod number PRIMARY KEY,
titulacao varchar2(20)
);

ALTER TABLE Professor ADD FOREIGN KEY(pes_cod) REFERENCES Pessoa (pes_cod);


CREATE TABLE Aluno (
pes_cod number PRIMARY KEY,
pes_nro_matricula number
);

ALTER TABLE ALUNO ADD FOREIGN KEY(pes_cod) REFERENCES Pessoa (pes_cod);


CREATE TABLE Telefone (
tel_cod number PRIMARY KEY,
tel_numero number(8),
tip_descricao varchar2(20),
tel_ddd number(2),
pes_cod number
);

ALTER TABLE Telefone ADD FOREIGN KEY(pes_cod) REFERENCES Pessoa (pes_cod);


CREATE TABLE Editora (
edi_cod number PRIMARY KEY,
edi_descricao varchar2(30)
);

CREATE TABLE Livro (
liv_cod number PRIMARY KEY,
liv_titulo varchar2(20),
edicao number,
anopublicacao varchar(4),
edi_cod number references editora(edi_cod)
);

CREATE TABLE Exemplar (
exe_cod number PRIMARY KEY,
exe_descricao number,
liv_cod number references livro(liv_cod),
ex_status number
);


CREATE TABLE Emprestimo (
emp_cod number PRIMARY KEY,
pes_cod number references pessoa(pes_cod),
emp_data_emprestimo date,
emp_data_PrevDev date
);

CREATE TABLE ITEM_EMPRESTIMO (
emp_cod number,
exe_cod number,
PRIMARY KEY(emp_cod,exe_cod),
FOREIGN KEY(emp_cod) REFERENCES Emprestimo (emp_cod),
FOREIGN KEY(exe_cod) REFERENCES exemplar (exe_cod)

);



CREATE TABLE Devolucao (
dev_cod number PRIMARY KEY,
data_dev date,
emp_cod number references emprestimo (emp_cod),
exe_cod number references exemplar (exe_cod)
);





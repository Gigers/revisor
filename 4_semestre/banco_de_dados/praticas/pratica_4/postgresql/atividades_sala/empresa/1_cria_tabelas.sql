-- Criando as tabelas
CREATE TABLE departamento (
	dep_id NUMERIC(6) PRIMARY KEY,
	dep_descricao VARCHAR(30)
);

CREATE TABLE funcionario (
	func_cod NUMERIC(6) PRIMARY KEY, 
	func_nome VARCHAR(20),
	func_sal NUMERIC(10, 2),
	dep_id NUMERIC(6) REFERENCES departamento (dep_id)
);

-- Outras tabelas de auxílio para os exemplos
CREATE TABLE empregado (
	emp_cod INTEGER,
	emp_nome VARCHAR(50),
	emp_sal NUMERIC(10, 2)
);

CREATE TABLE faixa_salarial (
	fa_cod VARCHAR(2),
	fa_menor NUMERIC(10, 2),
	fa_maior NUMERIC(10, 2)
);

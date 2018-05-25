-- Criando tabelas (Comandos DDL)
-- Tabelas criadas de diferentes formas para treinar

CREATE TABLE cliente (
	cli_codigo		NUMERIC,
	cli_nome		VARCHAR(30),
	cli_endereco		VARCHAR(80),
	cli_cidade		VARCHAR(40),
	cli_cep			VARCHAR(15),
        cli_estado           	VARCHAR(2),
	cli_cpf			NUMERIC,
	PRIMARY KEY	   (cli_codigo)
);

CREATE TABLE vendedor (
	ven_codigo		NUMERIC PRIMARY KEY,
	ven_nome		VARCHAR(60),
	ven_salario_fixo	NUMERIC(10, 2)
)

CREATE TABLE pedido (
	ped_numero		NUMERIC,
	ven_codigo		NUMERIC,
	cli_codigo		NUMERIC,
	ped_prazo_entrega	NUMERIC,
	ped_data		DATE,
	ped_valor_total		NUMERIC(8, 2),
	CONSTRAINT pk_pedido PRIMARY KEY (ped_numero),
	FOREIGN KEY (ven_codigo) REFERENCES vendedor (ven_codigo),
	FOREIGN KEY (cli_codigo) REFERENCES cliente  (cli_codigo)
);

CREATE TABLE telefone (
	tel_codigo	NUMERIC,
	cli_codigo	NUMERIC,
	tel_numero	VARCHAR(20),
	CONSTRAINT pk_tel_codigo PRIMARY KEY (tel_codigo),
	CONSTRAINT fk_cli_codigo FOREIGN KEY (cli_codigo) REFERENCES cliente (cli_codigo)
);

CREATE TABLE produto (
	pro_codigo		NUMERIC,
	pro_descricao		VARCHAR(130),
	pro_quantidade		NUMERIC NULL,
	pro_valor_unidade	NUMERIC(10, 2),
	PRIMARY KEY (pro_codigo)
);

CREATE TABLE item_do_pedido (
	pro_codigo		NUMERIC,
	item_quantidade		NUMERIC,
	ped_numero		NUMERIC,
	PRIMARY KEY (pro_codigo, ped_numero),
	FOREIGN KEY (pro_codigo) REFERENCES produto,
	FOREIGN KEY (ped_numero) REFERENCES pedido (ped_numero)
);

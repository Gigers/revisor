-- Vendedores
INSERT INTO vendedor VALUES (1, 'José', 1800.00);
INSERT INTO vendedor VALUES (2, 'Carlos', 2490.00);
INSERT INTO vendedor VALUES (3, 'João', 2780.00);
INSERT INTO vendedor VALUES (4, 'Antônio', 9500.00);
INSERT INTO vendedor VALUES (5, 'Felipe', 4600.00);
INSERT INTO vendedor VALUES (6, 'Jonas', 2300.00);
INSERT INTO vendedor VALUES (7, 'João', 870.00);
INSERT INTO vendedor VALUES (8, 'Josias', 870.00);
INSERT INTO vendedor VALUES (9, 'Maurício', 2930.00);

-- Produtos
INSERT INTO produto VALUES (1, 'Caneta', 1.00, 100);
INSERT INTO produto VALUES (2, 'Apontador', 4.00, 400);
INSERT INTO produto VALUES (3, 'Régua', 5.00, 600);

-- Clientes
INSERT INTO cliente VALUES (1, 'Ana', 'Rua 17 n.19', 'Niterói', '24358310', 'RJ', '11111111111');
INSERT INTO cliente VALUES (2, 'Flávio', 'Áv. Pres. Vargas 10', 'São Paulo', '22763931', 'SP', '2253412693');
INSERT INTO cliente VALUES (3, 'Jorge', 'Rua Caiapo 13', 'Curitiba', '30078500', 'PR', '14512798349'); 
INSERT INTO cliente VALUES (4, 'Lúcia', 'Rua Itabira 123 Loja 9', 'Belo Horizonte', '22124391', 'MG', '2831521393'); 
INSERT INTO cliente VALUES (5, 'Maurício', 'Av. Paulista 1236 sl/2345', 'São Paulo', '3012683', 'SP', '3281698574'); 
INSERT INTO cliente VALUES (7, 'Rodolfo', 'Largo da Lapa 27 sobrado', 'Rio de Janeiro', '30078900', 'RJ', '1283512823'); 
INSERT INTO cliente VALUES (8, 'Beth', 'Av.Climério n. 45', 'São Paulo', '25679300', 'SP', '3248512673'); 
INSERT INTO cliente VALUES (9, 'Paulo', 'TV. Moraes c/3', 'Londrina', '0', 'PR', '3284822332'); 
INSERT INTO cliente VALUES (10, 'Lívio', 'Av. Beira Mar n. 1256', 'Florianópolis', '300077500', 'SC', '12736571'); 
INSERT INTO cliente VALUES (11, 'Susana', 'Rua Lopes Mendes 12', 'Niterói', '30046500', 'RJ', '2176357123');
INSERT INTO cliente VALUES (12, 'Renato', 'Rua Meireles n.123 sl.345', 'São Paulo', '30225900', 'SP', '1327657112');
INSERT INTO cliente VALUES (13, 'Sebastião', 'Rua da Igreja n.10', 'Uberaba', '30438700', 'MG', '3217654721');
INSERT INTO cliente VALUES (14, 'José', 'Quadra 3 bl. 3 sl. 1003', 'Brasília', '22841650', 'DF' ,'21763576123');  

-- Pedidos
INSERT INTO pedido VALUES (1, 7, 1, 20, TO_DATE('10/06/2012', 'dd/mm/yyyy'), NULL);
INSERT INTO pedido VALUES (2, 1, 7, 20, TO_DATE('31/07/2012', 'dd/mm/yyyy'), NULL);
INSERT INTO pedido VALUES (3, 1, 7, 15, TO_DATE('01/06/2003', 'dd/mm/yyyy'), NULL);
INSERT INTO pedido VALUES (4, 1, 5, 20, TO_DATE('01/07/2003', 'dd/mm/yyyy'), NULL);
INSERT INTO pedido VALUES (5, 1, 7, 20, TO_DATE('01/08/2011', 'dd/mm/yyyy'), NULL);
INSERT INTO pedido VALUES (6, 2, 7, 15, TO_DATE('31/05/2003', 'dd/mm/yyyy'), NULL);
INSERT INTO pedido VALUES (7, 3, 7, 30, TO_DATE('30/06/2011', 'dd/mm/yyyy'), NULL);
INSERT INTO pedido VALUES (8, 5, 9, 30, TO_DATE('01/08/2011', 'dd/mm/yyyy'), NULL);
INSERT INTO pedido VALUES (9, 7, 1, 20, TO_DATE('12/04/2011', 'dd/mm/yyyy'), NULL);
INSERT INTO pedido VALUES (10, 8, 2, 30, TO_DATE('12/04/2011', 'dd/mm/yyyy'), NULL);

-- Itens dos pedidos
INSERT INTO item_do_pedido VALUES (1, 9, 10);
INSERT INTO item_do_pedido VALUES (2, 8, 10);
INSERT INTO item_do_pedido VALUES (3, 6, 1);
INSERT INTO item_do_pedido VALUES (3, 7, 9);

-- Telefones
INSERT INTO telefone VALUES (1, 1, '3923-1546');
INSERT INTO telefone VALUES (2, 2, '97858999');
INSERT INTO telefone VALUES (3, 2, '81267270');
INSERT INTO telefone VALUES (4, 3, '82567896');
INSERT INTO telefone VALUES (5, 8, '87589658');

COMMIT;


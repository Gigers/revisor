/*
    Este script representa uma extens�o do script da pr�tica, aqui algumas manipula��es das tabelas s�o feitas.
    
    Neste script h�:
        - Triggers;
        - Selects
        
    Criado por: Gigers
*/

-- Criando trigger para a cada inser��o de dados na tabela dependente, o campo *depen_parentesco* seja transformado em ma�usculo
CREATE OR REPLACE TRIGGER 
    upper_depen_parentesco
BEFORE 
    INSERT OR UPDATE
ON
    DEPENDENTE
FOR EACH ROW WHEN (new.depen_seq > 0)
BEGIN
        :new.depen_parentesco := UPPER(:new.depen_parentesco);      
END;

-- Verificando triggers criadas pelo usu�rio atual
SELECT
    trigger_name
FROM
    user_triggers;

-- Realizando inser��o para testar a Trigger
INSERT INTO DEPARTAMENTO VALUES (1, 'ADS', SYSDATE);
INSERT INTO FUNCIONARIO VALUES (1, 'Gigers', '12345', NULL, 'Rua dos alfineiros', 'M', 1, 1);
INSERT INTO dependente VALUES (1, 3, 'Jo�o', 'm�e', SYSDATE);

-- Veja que o campo 'depen_parentesco' estar� em caixa alta
SELECT func_cod, depen_parentesco FROM DEPENDENTE;
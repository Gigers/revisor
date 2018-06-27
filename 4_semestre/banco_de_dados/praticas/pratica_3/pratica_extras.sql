/*
    Este script representa uma extensão do script da prática, aqui algumas manipulações das tabelas são feitas.
    
    Neste script há:
        - Triggers;
        - Selects
        
    Criado por: Gigers
*/

-- Criando trigger para a cada inserção de dados na tabela dependente, o campo *depen_parentesco* seja transformado em maíusculo
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

-- Verificando triggers criadas pelo usuário atual
SELECT
    trigger_name
FROM
    user_triggers;

-- Realizando inserção para testar a Trigger
INSERT INTO DEPARTAMENTO VALUES (1, 'ADS', SYSDATE);
INSERT INTO FUNCIONARIO VALUES (1, 'Gigers', '12345', NULL, 'Rua dos alfineiros', 'M', 1, 1);
INSERT INTO dependente VALUES (1, 3, 'João', 'mãe', SYSDATE);

-- Veja que o campo 'depen_parentesco' estará em caixa alta
SELECT func_cod, depen_parentesco FROM DEPENDENTE;

// Import de tudo apenas para os testes
// Exemplo de empacotamento - Técnica utilizada até o Java 5
// Era utilizada quando um tipo primitivo deveria ser tratado como
// objeto (Tipo por referência)

import java.util.*;

public class Pacote{
  public static void main(String[] args){
     int primitivo = 10;

     Integer objeto = new Integer(primitivo);

     int valueObjeto = objeto.intValue();

     System.out.println(valueObjeto);
  }
}

import java.util.*;

public class AutoBoxing{
  public static void main(String[] args){
    // Até a versão 5 do java
    int primitivo = 5; // Declara o tipo primitivo
    Integer numero = new Integer(primitivo); // Era necessário instânciar uma classe do tipo requirido
  
    // Em versões mais recentes do Java, isso não é necessário
    int a = 123;
    Integer b = a; // A transferência de tipo primitivo para referência é feito de forma implicita, não sendo mais necessário instânciar um objeto
  } 
}

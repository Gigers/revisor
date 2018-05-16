public class Principal{
  public static void main(String[] args){
    Pessoa pessoa = new Pessoa();
    Pessoa pessoaDois = new Pessoa();

    pessoa.setNome("Felipe");
    pessoaDois.setNome("Maria");

    System.out.println("Pessoa Um: " + pessoa.getNome() + "\nPessoa Dois: " + pessoaDois.getNome());

    pessoa = pessoaDois;

    pessoa.setNome("Roberta");

    System.out.println("Pessoa Um: " + pessoa.getNome() + "\nPessoa Dois: " + pessoaDois.getNome());
  }
}

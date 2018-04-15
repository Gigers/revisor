package aula;

public class Pessoa {
	public String nome;

	@Override
	public boolean equals(Object o) {
		Pessoa p = (Pessoa) o;
		return p.nome == this.nome;
	}
}

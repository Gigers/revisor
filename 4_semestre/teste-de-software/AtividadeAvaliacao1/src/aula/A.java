package aula;

public class A {
	public boolean m(Integer a) {
		return a / 2 < 5 ? true : false;
	}

	public int n(int a, int b) throws Exception {
		if (a < b) {
			return a;
		} else if (a > b) {
			return b;
		}
		throw new Exception();
	}

	public String o() {
		return null;
	}

	public String p() {
		return "oi";
	}
	
	public Pessoa q() {
		Pessoa p = new Pessoa();
		p.nome = "Ana";
		return p;
	}
}

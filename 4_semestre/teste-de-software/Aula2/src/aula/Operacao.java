package aula;

import java.util.concurrent.TimeUnit;

public class Operacao {
	public int loopInfinito() {
		try {
			System.out.println("antes");
			// sleep por 3 segundos
			TimeUnit.SECONDS.sleep(3);
			System.out.println("ap�s");
		} catch (Exception e) {
			System.out.println("Exce��o: " + e.getMessage());
		}
		return 1;
	}

	public double divisao(int a, int b) {
		return a / b;
	}
}

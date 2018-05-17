package aula;

import java.util.concurrent.TimeUnit;

public class Operacao {
	// Retorna a área de um quadrado
	public double areaRetangulo(double b, double a) throws Exception {
		if (b < 0 || a < 0) {
			throw new Exception("Valor negativo");
		}
		return b * a;
	}

	// Retorna true se o objeto é um subtipo de Number
	public boolean isNumber(Object obj) throws Exception {
		return obj instanceof java.lang.Number;
	}

	public int timer(int cont) throws InterruptedException {
		// Sleep por cont segundos
		TimeUnit.SECONDS.sleep(cont);
		return 1;
	}
}

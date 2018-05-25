package aula;

import static org.junit.Assert.assertEquals;

import java.util.Arrays;
import java.util.Collection;

import org.junit.Before;
import org.junit.Test;
import org.junit.runner.RunWith;
import org.junit.runners.Parameterized;
import org.junit.runners.Parameterized.Parameters;

// Para que o teste parametrizado funcione, ser� necess�rio
// a classe ser marcada com @RunWith(Parameterized.class)
@RunWith(Parameterized.class)
public class Parametrizada {

	/**
	 * A classe precisa ter os atributos que ser�o usados no teste, que s�o a
	 * entrada e esperado esses ser�o preenchidos pelo construtor
	 */
	private int entrada;
	private boolean esperado;
	private Operacao op;

	@Before
	public void initialize() {
		op = new Operacao();
	}
	
	/**
	 * O Construtor que recebe cada elemento do array retornado pelo m�todo parameters
	 */
	public Parametrizada(int entrada, boolean esperado) {
		this.entrada = entrada;
		this.esperado = esperado;
	}
	
	@Parameters
	public static Collection parameters() {
		return Arrays.asList(new Object[][] {
			// Cada um desses itens, ser� utilizado para construir 
			// um objeto e realizar o teste
			{1, false},
			{2, true},
			{5, false},
			{10, true},
			{0, false}
		});
	}
	
	@Test
	public void test1() {
		System.out.println("Testando: " + entrada);
		assertEquals(esperado, op.isPar(entrada));
	}
	
}

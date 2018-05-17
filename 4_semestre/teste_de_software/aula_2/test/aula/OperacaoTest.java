package aula;

import static org.junit.Assert.assertEquals;

import org.junit.Before;
import org.junit.Test;

public class OperacaoTest {

	private Operacao op;

	// � executado antes de cada teste
	@Before
	public void setUp() {
		op = new Operacao();
	}

	@Test(timeout = 1000)
	public void test1() {
		// Este teste ir� falhar pois ele dura mais de um segundo
		assertEquals("Msg test1", 1, op.loopInfinito());
	}

	@Test(timeout = 4000)
	public void test2() {
		// Este teste n�o falha porque ele n�o dura mais de 2 segundos
		assertEquals("Msg test2", 1, op.loopInfinito());
	}

	@Test
	public void test3() {
		/*
		 * Este teste falha porque o m�todo retorna uma exce��o e o teste espera um
		 * valor num�rico
		 */
		assertEquals(1.25, op.divisao(5, 0), 0);
	}

	@Test(expected = ArithmeticException.class)
	public void test4() {
		/*
		 * Este teste n�o falha porque o m�todo lan�a ArithmeticException
		 */
		assertEquals(1.25, op.divisao(5, 0), 0);
	}

	@Test(expected = Exception.class)
	public void test5() {
		/*
		 * Este teste n�o falha porque Exception � um super tipo para
		 * ArithmeticException
		 */
		assertEquals(1.25, op.divisao(5, 0), 0);
	}

	@Test(expected = Exception.class)
	public void test6() {
		/*
		 * Este teste falha porque N�O lan�a Exception
		 */
		assertEquals(1.25, op.divisao(5, 4), 0);
	}

}

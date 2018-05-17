package aula;

import static org.junit.Assert.assertEquals;

import org.junit.Before;
import org.junit.Test;

public class OperacaoTest {

	private Operacao op;

	// É executado antes de cada teste
	@Before
	public void setUp() {
		op = new Operacao();
	}

	@Test(timeout = 1000)
	public void test1() {
		// Este teste irá falhar pois ele dura mais de um segundo
		assertEquals("Msg test1", 1, op.loopInfinito());
	}

	@Test(timeout = 4000)
	public void test2() {
		// Este teste não falha porque ele não dura mais de 2 segundos
		assertEquals("Msg test2", 1, op.loopInfinito());
	}

	@Test
	public void test3() {
		/*
		 * Este teste falha porque o método retorna uma exceção e o teste espera um
		 * valor numérico
		 */
		assertEquals(1.25, op.divisao(5, 0), 0);
	}

	@Test(expected = ArithmeticException.class)
	public void test4() {
		/*
		 * Este teste não falha porque o método lança ArithmeticException
		 */
		assertEquals(1.25, op.divisao(5, 0), 0);
	}

	@Test(expected = Exception.class)
	public void test5() {
		/*
		 * Este teste não falha porque Exception é um super tipo para
		 * ArithmeticException
		 */
		assertEquals(1.25, op.divisao(5, 0), 0);
	}

	@Test(expected = Exception.class)
	public void test6() {
		/*
		 * Este teste falha porque NÃO lança Exception
		 */
		assertEquals(1.25, op.divisao(5, 4), 0);
	}

}

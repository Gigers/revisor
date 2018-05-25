package aula;

import static org.junit.Assert.assertEquals;

import org.junit.After;
import org.junit.Before;
import org.junit.Test;

public class OperacaoTest {

	private Operacao operacao;
	
	// M�todo marcado com @Before � chamado antes de cada @Test
	@Before
	public void setUp() {
		operacao = new Operacao();
	}
	
	// M�todo marcado com @After � chamado ap�s cada @Test
	@After
	public void tearDown() {
		operacao = null;
	}
	
	// M�todos marcados com @Test s�o os testes propriamente dito
	@Test
	public void testPotencia() {
		assertEquals("Test 1", 8, operacao.potencia(2, 3), 0.0);
	}
	
	@Test
	public void testDivisao() {
		// Testes com muitos assert dentro n�o s�o recomendados !
		// Isso porque algum deles n�o seja aprovado, � complicado saber qual foi
		assertEquals("Test 2", 1.25, operacao.divisao(5, 4), 0.5);
		assertEquals("Test 3", 1.25, operacao.divisao(5, 4), 0);
		assertEquals("Test 4", 1.25, operacao.divisao(5, 0), 0.5);
	}
	
	// H� formas tamb�m de testarmos se um determinado m�todo retorna exce��o
	// Perceba que, no caso abaixo, o teste n�o est� dentro do m�todo, e sim no marcador
	// Aqui o teste ser� verdadeiro caso haja exce��o, isso porque foi especificado, que espera-se o retorno
	// de uma exce��o
	@Test(expected=ArithmeticException.class)
	public void testExceptionDivisao() {
		// Neste caso como h� o excepted, n�o seria necess�rio o assert, apenas a chamada do m�todo a ser testado � o suficiente
		// uma vez que como citado, o teste est� na anota��o
		assertEquals("Test 5", 1.25, operacao.divisao(5, 0), 0);
	}
	
}

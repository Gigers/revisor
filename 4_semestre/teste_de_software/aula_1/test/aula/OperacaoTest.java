package aula;

import static org.junit.Assert.assertEquals;

import org.junit.After;
import org.junit.Before;
import org.junit.Test;

public class OperacaoTest {

	private Operacao operacao;
	
	// Método marcado com @Before é chamado antes de cada @Test
	@Before
	public void setUp() {
		operacao = new Operacao();
	}
	
	// Método marcado com @After é chamado após cada @Test
	@After
	public void tearDown() {
		operacao = null;
	}
	
	// Métodos marcados com @Test são os testes propriamente dito
	@Test
	public void testPotencia() {
		assertEquals("Test 1", 8, operacao.potencia(2, 3), 0.0);
	}
	
	@Test
	public void testDivisao() {
		// Testes com muitos assert dentro não são recomendados !
		// Isso porque algum deles não seja aprovado, é complicado saber qual foi
		assertEquals("Test 2", 1.25, operacao.divisao(5, 4), 0.5);
		assertEquals("Test 3", 1.25, operacao.divisao(5, 4), 0);
		assertEquals("Test 4", 1.25, operacao.divisao(5, 0), 0.5);
	}
	
	// Há formas também de testarmos se um determinado método retorna exceção
	// Perceba que, no caso abaixo, o teste não está dentro do método, e sim no marcador
	// Aqui o teste será verdadeiro caso haja exceção, isso porque foi especificado, que espera-se o retorno
	// de uma exceção
	@Test(expected=ArithmeticException.class)
	public void testExceptionDivisao() {
		// Neste caso como há o excepted, não seria necessário o assert, apenas a chamada do método a ser testado é o suficiente
		// uma vez que como citado, o teste está na anotação
		assertEquals("Test 5", 1.25, operacao.divisao(5, 0), 0);
	}
	
}

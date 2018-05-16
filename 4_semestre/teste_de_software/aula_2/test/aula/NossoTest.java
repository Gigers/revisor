package aula;

import static org.junit.Assert.assertArrayEquals;
import static org.junit.Assert.assertEquals;
import static org.junit.Assert.assertFalse;
import static org.junit.Assert.assertNotNull;
import static org.junit.Assert.assertNotSame;
import static org.junit.Assert.assertNull;
import static org.junit.Assert.assertSame;
import static org.junit.Assert.assertTrue;
import static org.junit.Assert.fail;

import org.junit.After;
import org.junit.AfterClass;
import org.junit.Before;
import org.junit.BeforeClass;
import org.junit.Ignore;
import org.junit.Test;

public class NossoTest {

	/*
	// Métodos anotados com @BeforeClass são chamados antes de qualquer coisa
	// antes mesmo do construtor, por isso é necessário que, métodos com essa
	// marcação
	// sejam estáticos
	@BeforeClass
	public static void inicio() {
		System.out.println("Método inicio");
	}

	// Métodos anotados com @AfterClass são chamados após todos os demais métodos
	// até mesmo depois da finalização do uso do objeto da classe, por isso ele deve
	// ser
	// estático
	@AfterClass
	public static void fim() {
		System.out.println("Método fim");
	}

	@Before
	public void antes() {
		System.out.println("Método antes");
	}

	@After
	public void depois() {
		System.out.println("Método depois");
	}

	@Test
	public void test1() {
		System.out.println("Método test1");
	}

	// Métodos marcados com @Ignore, serão ignorados no momento do teste
	// Esses são recomendados para métodos que ainda estão sendo desenvolvidos
	@Ignore
	@Test
	public void test2() {
		System.out.println("Método test2");
	}

	@Test
	public void test3() {
		System.out.println("Método test3");
	}
	*/
	
	/*
	// Teste - passo 4
	@Test
	public void test1() {
		System.out.println("Método test1: antes");
		fail("Faz test1 falhar"); // Retorna mensagem descrita no argumento do método
		// Esta parte nunca será executada, pois quando encontrado um erro
		// o método deixa de ser executado.
		System.out.println("Método test1: após");
	}

	@Test
	public void test2() {
		System.out.println("Método test2: antes");
		fail(); // Não retorna mensagem alguma para o usuário
		System.out.println("Método test2: após");
	}
	*/
	// Teste - passo 5
	
//	@Test
//	public void test1() {
//		/**
//		 * Parâmetros: mensagem, valor esperado, operação, delta (Diferença)
//		 * Não apresenta falha, pois será testado o intervalo (Delta)
//		 * 3.5 < (2.1 + 2.1) < 4.5
//		 */
//		assertEquals("Msg test1", 4, 2.1 + 2.1, 0.5);
//	}
//	
//	@Test
//	public void test2() {
//		/** 
//		 * Apresenta falha, pois será testado o intervalo
//		 */
//		assertEquals("Msg test2", 4, 4.1 + 4.1, 0);
//	}
//	
//	@Test
//	public void test3() {
//		/**
//		 * Parâmetros: mensagem, valor esperado, operação
//		 * Apresenta falha, pois será testado 4 == (3 + 3)
//		 */
//		assertEquals("Msg test3", 4, 3 + 3);
//	}
//	
//	@Test
//	public void test4() {
//		/** 
//		 * Parâmetros: valor esperado, operação, delta
//		 * Não apresenta falhas, pois será testado 3.5 < (2 + 2) < 4.5
//		 */
//		assertEquals(4, 2 + 2, 0.5);
//	}
//	
//	@Test
//	public void test5() {
//		/**
//		 * Parâmetros: valor esperado, operacao
//		 * Apresenta falha, pois será testado 4 == (3 + 3)
//		 */
//		assertEquals(4, 3 + 3);
//	}
//	
	// Teste - passo 6	
//	@Test
//	public void test1() {
//		/**
//		 * Parâmetros: mensagem, condição
//		 * Apresenta falha, pois será testado (8 < 5) == true
//		 */
//		assertTrue("Msg test1", 8 < 5);
//	}
//	
//	@Test
//	public void test2() {
//		/**
//		 * Parâmetros: condição
//		 * Não apresenta falha, pois será testado (8 != 5) == 5
//		 */
//		assertTrue(8 != 5);
//	}
//	
//	@Test
//	public void test3() {
//		/**
//		 * Parâmetros: mensagem, condição
//		 * Não apresenta falha, pois será testado (8 < 5) == false
//		 */
//		assertFalse("Msg test3", 8 < 5);
//	}
//	
//	@Test
//	public void test4() {
//		/**
//		 * Parâmetros: condição
//		 * Apresenta falhas, pois será testado
//		 * (8 != 5) == false
//		 */
//		assertFalse(8 != 5);
//	}
	// Teste - passo 7
//	@Test
//	public void test1() {
//		Object obj = null;
//		// Parâmetros: mensagem, condição */
//		assertNull("Msg test1", obj);
//	}
//	
//	@Test
//	public void test2() {
//		Object obj = new Object();
//		// Parâmetros: condição
//		assertNull(obj);
//	}
//	
//	@Test
//	public void test3() {
//		Object obj = null;
//		// Parâmetros: mensagem, condição
//		assertNotNull("Msg test3", obj);
//	}
//	
//	@Test
//	public void test4() {
//		Object obj = new Object();
//		// Parâmetros: Condição
//		assertNotNull(obj);
//	}
	
	// Teste - passo 8
//	@Test
//	public void test1() {
//		String a = null, b = null;
//		// Parâmetros: mensagem, objeto, objeto
//		assertSame("Msg test1", a, b);
//	}
//	
//	@Test
//	public void test2() {
//		String a = "oi", b = "oi";
//		// Parâmetros: objeto, objeto
//		assertSame(a, b);
//	}
//	
//	@Test 
//	public void test3() {
//		Object a = new Object(), b = new Object();
//		assertSame(a, b);
//	}
//	
//	@Test
//	public void test4() {
//		String a = null, b = null;
//		// Parâmetros: mensagem, objeto, objeto
//		assertNotSame("Msg test4", a, b);
//	}
//	
//	@Test
//	public void test5() {
//		String a = "oi", b = "oi";
//		// Parâmetros: condição
//		assertNotSame(a, b);
//	}
//	
//	@Test
//	public void test6() {
//		Object a = new Object(), b = new Object();
//		assertNotSame(a, b);
//	}
	
	// Teste - passo 9
//	@Test
//	public void test1() {
//		String a[] = {"um", "dois"};
//		String[] b = {"três", "quatro"};
//		assertArrayEquals("Msg test1", a, b);
//	}
//	
//	@Test
//	public void test2() {
//		String[] a = {"um", "dois"}, b = {"um", "dois"};
//		assertArrayEquals(a, b);
//	}
	// Teste - passo 10
	@Test
	public void test1() {
		
	}
}

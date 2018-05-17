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
	// M�todos anotados com @BeforeClass s�o chamados antes de qualquer coisa
	// antes mesmo do construtor, por isso � necess�rio que, m�todos com essa
	// marca��o
	// sejam est�ticos
	@BeforeClass
	public static void inicio() {
		System.out.println("M�todo inicio");
	}

	// M�todos anotados com @AfterClass s�o chamados ap�s todos os demais m�todos
	// at� mesmo depois da finaliza��o do uso do objeto da classe, por isso ele deve
	// ser
	// est�tico
	@AfterClass
	public static void fim() {
		System.out.println("M�todo fim");
	}

	@Before
	public void antes() {
		System.out.println("M�todo antes");
	}

	@After
	public void depois() {
		System.out.println("M�todo depois");
	}

	@Test
	public void test1() {
		System.out.println("M�todo test1");
	}

	// M�todos marcados com @Ignore, ser�o ignorados no momento do teste
	// Esses s�o recomendados para m�todos que ainda est�o sendo desenvolvidos
	@Ignore
	@Test
	public void test2() {
		System.out.println("M�todo test2");
	}

	@Test
	public void test3() {
		System.out.println("M�todo test3");
	}
	*/
	
	/*
	// Teste - passo 4
	@Test
	public void test1() {
		System.out.println("M�todo test1: antes");
		fail("Faz test1 falhar"); // Retorna mensagem descrita no argumento do m�todo
		// Esta parte nunca ser� executada, pois quando encontrado um erro
		// o m�todo deixa de ser executado.
		System.out.println("M�todo test1: ap�s");
	}

	@Test
	public void test2() {
		System.out.println("M�todo test2: antes");
		fail(); // N�o retorna mensagem alguma para o usu�rio
		System.out.println("M�todo test2: ap�s");
	}
	*/
	// Teste - passo 5
	
//	@Test
//	public void test1() {
//		/**
//		 * Par�metros: mensagem, valor esperado, opera��o, delta (Diferen�a)
//		 * N�o apresenta falha, pois ser� testado o intervalo (Delta)
//		 * 3.5 < (2.1 + 2.1) < 4.5
//		 */
//		assertEquals("Msg test1", 4, 2.1 + 2.1, 0.5);
//	}
//	
//	@Test
//	public void test2() {
//		/** 
//		 * Apresenta falha, pois ser� testado o intervalo
//		 */
//		assertEquals("Msg test2", 4, 4.1 + 4.1, 0);
//	}
//	
//	@Test
//	public void test3() {
//		/**
//		 * Par�metros: mensagem, valor esperado, opera��o
//		 * Apresenta falha, pois ser� testado 4 == (3 + 3)
//		 */
//		assertEquals("Msg test3", 4, 3 + 3);
//	}
//	
//	@Test
//	public void test4() {
//		/** 
//		 * Par�metros: valor esperado, opera��o, delta
//		 * N�o apresenta falhas, pois ser� testado 3.5 < (2 + 2) < 4.5
//		 */
//		assertEquals(4, 2 + 2, 0.5);
//	}
//	
//	@Test
//	public void test5() {
//		/**
//		 * Par�metros: valor esperado, operacao
//		 * Apresenta falha, pois ser� testado 4 == (3 + 3)
//		 */
//		assertEquals(4, 3 + 3);
//	}
//	
	// Teste - passo 6	
//	@Test
//	public void test1() {
//		/**
//		 * Par�metros: mensagem, condi��o
//		 * Apresenta falha, pois ser� testado (8 < 5) == true
//		 */
//		assertTrue("Msg test1", 8 < 5);
//	}
//	
//	@Test
//	public void test2() {
//		/**
//		 * Par�metros: condi��o
//		 * N�o apresenta falha, pois ser� testado (8 != 5) == 5
//		 */
//		assertTrue(8 != 5);
//	}
//	
//	@Test
//	public void test3() {
//		/**
//		 * Par�metros: mensagem, condi��o
//		 * N�o apresenta falha, pois ser� testado (8 < 5) == false
//		 */
//		assertFalse("Msg test3", 8 < 5);
//	}
//	
//	@Test
//	public void test4() {
//		/**
//		 * Par�metros: condi��o
//		 * Apresenta falhas, pois ser� testado
//		 * (8 != 5) == false
//		 */
//		assertFalse(8 != 5);
//	}
	// Teste - passo 7
//	@Test
//	public void test1() {
//		Object obj = null;
//		// Par�metros: mensagem, condi��o */
//		assertNull("Msg test1", obj);
//	}
//	
//	@Test
//	public void test2() {
//		Object obj = new Object();
//		// Par�metros: condi��o
//		assertNull(obj);
//	}
//	
//	@Test
//	public void test3() {
//		Object obj = null;
//		// Par�metros: mensagem, condi��o
//		assertNotNull("Msg test3", obj);
//	}
//	
//	@Test
//	public void test4() {
//		Object obj = new Object();
//		// Par�metros: Condi��o
//		assertNotNull(obj);
//	}
	
	// Teste - passo 8
//	@Test
//	public void test1() {
//		String a = null, b = null;
//		// Par�metros: mensagem, objeto, objeto
//		assertSame("Msg test1", a, b);
//	}
//	
//	@Test
//	public void test2() {
//		String a = "oi", b = "oi";
//		// Par�metros: objeto, objeto
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
//		// Par�metros: mensagem, objeto, objeto
//		assertNotSame("Msg test4", a, b);
//	}
//	
//	@Test
//	public void test5() {
//		String a = "oi", b = "oi";
//		// Par�metros: condi��o
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
//		String[] b = {"tr�s", "quatro"};
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

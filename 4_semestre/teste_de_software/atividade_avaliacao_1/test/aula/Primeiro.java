package aula;

import org.junit.After;
import org.junit.AfterClass;
import org.junit.Before;
import org.junit.BeforeClass;
import org.junit.Ignore;
import org.junit.Test;

public class Primeiro {

	// Método que será executado DEPOIS de cada teste
	@After
	public void a() {
		System.out.println("a");
	}

	// Método que será executado ANTES de cada teste
	@Before
	public void b() {
		System.out.println("b");
	}

	// Método que será executado DEPOIS de tudo, até mesmo antes do construtor da
	// classe
	@AfterClass
	public static void c() {
		System.out.println("c");
	}

	// Método que será executado ANTES de tudo, até mesmo antes do construtor da
	// classe
	@BeforeClass
	public static void d() {
		System.out.println("d");
	}

	// Método será ignorado, por conta do @Ignore
	@Ignore
	@Test
	public void e() {
		System.out.println("e");
	}

	@Test
	public void f() {
		System.out.println("f");
	}

	@Test
	public void g() {
		System.out.println("g");
	}

}

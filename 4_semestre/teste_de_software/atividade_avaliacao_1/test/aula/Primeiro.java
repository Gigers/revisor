package aula;

import org.junit.After;
import org.junit.AfterClass;
import org.junit.Before;
import org.junit.BeforeClass;
import org.junit.Ignore;
import org.junit.Test;

public class Primeiro {

	// M�todo que ser� executado DEPOIS de cada teste
	@After
	public void a() {
		System.out.println("a");
	}

	// M�todo que ser� executado ANTES de cada teste
	@Before
	public void b() {
		System.out.println("b");
	}

	// M�todo que ser� executado DEPOIS de tudo, at� mesmo antes do construtor da
	// classe
	@AfterClass
	public static void c() {
		System.out.println("c");
	}

	// M�todo que ser� executado ANTES de tudo, at� mesmo antes do construtor da
	// classe
	@BeforeClass
	public static void d() {
		System.out.println("d");
	}

	// M�todo ser� ignorado, por conta do @Ignore
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

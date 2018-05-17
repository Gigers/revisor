package aula;

import static org.junit.Assert.assertEquals;

import java.util.Arrays;
import java.util.Collection;

import org.junit.After;
import org.junit.Before;
import org.junit.Test;
import org.junit.runner.RunWith;
import org.junit.runners.Parameterized;
import org.junit.runners.Parameterized.Parameters;

// A classe parametrizada deve ser marcada com RunWith
@RunWith(Parameterized.class)
@SuppressWarnings("rawtypes")
public class AreaQuadradoTest {

	private int a;
	private int b;
	private int saida;
	private Operacao op;

	@Before
	public void setUp() {
		op = new Operacao();
	}

	@After
	public void tearDown() {
		op = null;
	}

	public AreaQuadradoTest(int b, int a, int saida) {
		this.b = b;
		this.a = a;
		this.saida = saida;
	}

	@Parameters
	public static Collection parameters() {
		return Arrays.asList(new Object[][] {
				// b, a, saida
				{ 0, 0, 0 }, { 1, 1, 1 }, { 2, 0, 0 }, { 0, 2, 0 } });
	}

	@Test
	public void testOne() throws Exception {
		assertEquals(saida, op.areaRetangulo(b, a), 0);
	}

}

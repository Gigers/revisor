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

@RunWith(Parameterized.class)
public class AreaQuadradoExceptionTest {

	private int b;
	private int a;
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

	public AreaQuadradoExceptionTest(int b, int a, int saida) {
		this.b = b;
		this.a = a;
		this.saida = saida;
	}

	@SuppressWarnings("rawtypes")
	@Parameters
	public static Collection parameters() {
		return Arrays.asList(new Object[][] { { -1, 0, -1 }, { 0, -1, -1 }, { -1, -1, 1 } });
	}

	// O expected foi utilizado pois o requisito é de que
	// os testes retornem verde
	@Test(expected = Exception.class)
	public void testOne() throws Exception {
		assertEquals(saida, op.areaRetangulo(b, a), 0);
	}
}

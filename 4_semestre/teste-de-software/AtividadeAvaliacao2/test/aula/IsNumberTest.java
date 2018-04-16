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
public class IsNumberTest {

	private Object entrada; // O atributo será object pois ele é uma superclasse de todos, assim qualque
							// entrada será aceita
	private boolean saida;
	private Operacao op;

	@Before
	public void setUp() {
		op = new Operacao();
	}

	@After
	public void tearDown() {
		op = null;
	}

	public IsNumberTest(Object entrada, boolean saida) {
		this.entrada = entrada;
		this.saida = saida;
	}

	@SuppressWarnings("rawtypes")
	@Parameters
	public static Collection parameters() {
		return Arrays.asList(new Object[][] { { 12, true }, { 12.0, true }, { (char) 12.0, false }, { "12", false },
				{ new Object(), false }, { null, false } });
	}

	@Test
	public void testOne() throws Exception {
		assertEquals(saida, op.isNumber(entrada));
	}

}

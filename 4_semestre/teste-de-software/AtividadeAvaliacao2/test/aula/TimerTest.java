package aula;

import org.junit.After;
import org.junit.Before;
import org.junit.Test;

public class TimerTest {

	private Operacao op;

	@Before
	public void setUp() {
		op = new Operacao();
	}

	@After
	public void tearDown() {
		op = null;
	}

	// Nenhum assert ser� usado, j� que o teste est� no @Test
	@Test(timeout = 1100)
	public void testOne() throws InterruptedException {
		op.timer(1);
	}

	@Test(timeout = 3100)
	public void testTwo() throws InterruptedException {
		op.timer(3);
	}

}

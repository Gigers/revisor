package aula;

import org.junit.runner.RunWith;
import org.junit.runners.Suite;
import org.junit.runners.Suite.SuiteClasses;

@RunWith(Suite.class)
@SuiteClasses({ AreaQuadradoTest.class, AreaQuadradoExceptionTest.class, IsNumberTest.class, TimerTest.class })
public class SuiteTest {

	// Não há corpo
	/**
	 * A ideia da suite de teste é rodar uma batéria de testes, ou seja, um grupo de
	 * testes. O que facilita o processo de teste de diversos testes
	 */

	/**
	 * Por que a frase a seguir está errada? “Uma classe parametrizada pode ser
	 * usada para otimizar qualquer conjunto de teste” Está frase está errada porque
	 * nem toda classe de teste será adequada a um determinado teste e suas
	 * exigências de entrada/saída.
	 * 
	 * O que é uma Suite de testes ? É um conjunto de testes que facilita o
	 * gerênciamento dos muitos testes possíveis em um projeto, isso porque com
	 * suites de testes, eles poderão ser segmentados por partes do projeto e com
	 * isso aumentar a organização do projeto.
	 */

}

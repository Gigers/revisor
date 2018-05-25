package aula;

import org.junit.runner.RunWith;
import org.junit.runners.Suite;
import org.junit.runners.Suite.SuiteClasses;

@RunWith(Suite.class)
@SuiteClasses({ AreaQuadradoTest.class, AreaQuadradoExceptionTest.class, IsNumberTest.class, TimerTest.class })
public class SuiteTest {

	// N�o h� corpo
	/**
	 * A ideia da suite de teste � rodar uma bat�ria de testes, ou seja, um grupo de
	 * testes. O que facilita o processo de teste de diversos testes
	 */

	/**
	 * Por que a frase a seguir est� errada? �Uma classe parametrizada pode ser
	 * usada para otimizar qualquer conjunto de teste� Est� frase est� errada porque
	 * nem toda classe de teste ser� adequada a um determinado teste e suas
	 * exig�ncias de entrada/sa�da.
	 * 
	 * O que � uma Suite de testes ? � um conjunto de testes que facilita o
	 * ger�nciamento dos muitos testes poss�veis em um projeto, isso porque com
	 * suites de testes, eles poder�o ser segmentados por partes do projeto e com
	 * isso aumentar a organiza��o do projeto.
	 */

}

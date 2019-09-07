# Aula - 30/08/2017

* Listas encadeadas
    * Vantagens:
        * Velocidade (Remoção e inserção);

## Formas
* Existem duas formas de implementar a lista encadeada:
     * Com cabeça;
        * Vantagem:
         * Não vou testar lista vazia (Isso porque a lista sempre tem um elemento (cabeça));
         * Não preciso de ponteiro para ponteiro;
         * Menos complexo;
         * Mais eficiente (Se comparado a lista sem cabeça).
    * Sem cabeça;
        * Desvantagens:
         * Complexo;
         * Menos eficiênte (Se comparado a lista com cabeça).

## Códigos

Os códigos listados com números de exercícios, como por exemplo <code>Exe_18.c</code> fazem referência aos exercícios presentes no PDF que pode ser encontrado em <code>reference</code>.

## Abstração

https://drive.google.com/open?id=0BwQVdunN4yJBeDZIbU1CaDR5djg

## Questões
 * Porque os números são invertidos (No código lst_no_head.c) ?
    * R: Pois sempre vou inserir os elementos no início (Move os elementos para a direita)

* Porque insiro no início da lista ?
    * R: Para não percorrer toda a lista.

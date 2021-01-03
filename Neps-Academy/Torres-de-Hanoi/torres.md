# Torres de Hanói
 ## OBI 2003 - Fase Única - Nível Único
  O quebra-cabeças Torres de Hanoi é muito antigo e conhecido, sendo constituído de um conjunto de **N** discos de tamanhos diferentes e três pinos verticais, nos quais os discos podem ser encaixados.

  ![Quebra-cabeça](https://neps.academy/image/153.png)

  Cada pino pode conter uma pilha com qualquer número de discos, desde que cada disco não seja colocado acima de outro disco de menor tamanho. A configuração inicial consiste de todos os discos no pino 1. O objetivo do quebra-cabeças é mover todos os discos para um dos outros pinos, sempre obedecendo à restrição de não colocar um disco sobre outro menor.

  Um algoritmo para resolver este problema é o seguinte.

  ```
     procedimento Hanoi(N, Orig, Dest, Temp)
     se N = 1 então
        mover o menor disco do pino Orig para o pino Dest;
     senão
        Hanoi(N-1, Orig, Temp, Dest);
        mover o N-ésimo menor disco do pino Orig para o pino Dest;
        Hanoi(N-1, Temp, Dest, Orig);
     fim-se
  fim

  ```

  Sua tarefa é escrever um programa que determine quantos movimentos de trocar um disco de um pino para outro serão executados pelo algoritmo acima para resolver o quebra-cabeça.

  ### Entrada 
  A entrada possui vários conjuntos de teste. Cada conjunto de teste é composto por uma única linha, que contém um único número inteiro **N**, indicando o número de discos. O final da entrada é indicado por **N = 0**.

  ### Saída
  Para cada conjunto de teste, o seu programa deve escrever três linhas na saída. A primeira linha deve conter um identificador do conjunto de teste, no formato “Teste n”, onde n é numerado sequencialmente a partir de 1.

  A segunda linha deve conter o número de movimentos que são executados pelo algoritmo dado para resolver o problema das Torres de Hanói com **N** discos. A terceira linha deve ser deixada em branco. A grafia mostrada no Exemplo de Saída, abaixo, deve ser seguida rigorosamente.

  ### Restrições
  * **0 <= N <= 30**

  Exemplos de entrada | Exemplos de saída
  :------------------:| :----------------:
  1<br>2<br>0         |  Teste 1<br>1<br><br>Teste 2<br>3<br><br>
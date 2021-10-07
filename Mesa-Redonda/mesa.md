# Mesa redonda
 ## OBI 2019 - Terceira Fase - Nível Sênior
 Ana, Beatriz e Carolina sempre saem juntas para tomar café numa padaria onde as mesas são circulares e têm três cadeiras numeradas 0, 1 e 2, no sentido anti-horário, como ilustrado na figura ao lado. Elas gostam de decidir quem vai sentar em qual cadeira com uma brincadeira gerando números aleatórios nos seus celulares.

 Primeiro Ana sorteia um número inteiro **A** e, começando da cadeira 1, seguindo no sentido anti-horário, conta **A** cadeiras e senta na cadeira em que a contagem terminar.

 Depois Beatriz sorteia um número **B** e faz a mesma coisa: começando da cadeira 1, no sentido anti-horário, conta **B** cadeiras. Se a cadeira final estiver livre, Beatriz senta nela. Caso seja a cadeira onde Ana está sentada, então Beatriz senta na próxima cadeira no sentido anti-horário. Claro, ao final, Carolina senta na cadeira que estiver livre.

 Por exemplo, se Ana sortear 8, ela vai contar [1, 2, 0, 1, 2, 0, 1, 2] e sentar na cadeira 2. Depois, se Beatriz sortear 6, ela vai contar [1, 2, 0, 1, 2, 0] e sentar na cadeira 0. Assim, Carolina senta na cadeira 1. Num outro exemplo, se Ana sortear 3, ela vai contar [1, 2, 0] e sentar na cadeira 0. Depois, se Beatriz sortear 9, ela vai contar [1, 2, 0, 1, 2, 0, 1, 2, 0] e, como Ana já está sentada na cadeira 0, Beatriz senta na cadeira 1. Dessa forma, Carolina senta na cadeira 2.

 Neste problema, dados os números sorteados por Ana e Beatriz, seu programa deve imprimir o número da cadeira onde Carolina vai sentar.

 ### Entrada 
 A primeira linha da entrada contém um inteiro **A** representando o número sorteado por Ana. A segunda linha da entrada contém um inteiro **B** representando o número sorteado por Beatriz.

 ### Saída
 Seu programa deve imprimir uma linha contendo um número inteiro indicando a cadeira onde Carolina vai sentar.

 ### Restrições
 * **1 <= A <= 1000**
 * **1 <= B <= 1000**

 Exemplos de entrada | Exemplos de saída
 :------------------:| :----------------:
  8<br>6             |  1
  3<br>9             |  2   


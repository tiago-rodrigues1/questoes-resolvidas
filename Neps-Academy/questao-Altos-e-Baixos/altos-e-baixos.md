# Altos e baixos
 ## Liga de programação 2020 - Etapa 3 - Prova

 Farcos gosta muito de chocolate, e nestes últimos **N** dias ele foi diariamente ao mercado e comprou exatamente uma barra de chocolate da sua marca favorita, Choconeps.

 O mercado que Farcos frequentou estava experimentando uma curiosa estratégia de vendas: todos os dias eles alteravam o preço do chocolate em 1 unidade em relação ao dia anterior.

 Farcos achou aquilo interessante, e todos os dias ele anotava em seu caderno se o preço que ele pagou estava mais caro ou mais barato que o dia anterior. Se estivesse mais caro ele anotava a letra “A”, e se estivesse mais barato ele anotava a letra “B”. No primeiro dia ele não fez nenhuma anotação, pois não havia “dia anterior” com o qual comparar, ou seja, as anotações começam a partir do segundo dia.

 Ao final de **N** dias, Farcos tem **N-1** anotações em seu caderno.

 Farcos não lembra qual era exatamente o preço do chocolate em nenhum dos dias, mas ele sabe que o preço nunca foi negativo, e que em um ou mais dias o preço foi 0.

 Com base nas anotações de Farcos, ajude-o a encontrar o preço do chocolate nos **N** dias.

 ### Entradas
 A primeira linha contém o inteiro **N**, representando quantos dias Farcos foi ao mercado.

 A segunda linha contém uma string de tamanho **N-1**, correspondendo às anotações de Farcos. O primeiro caractere representa a anotação do segundo dia, o segundo caractere à anotação do terceiro dia, e assim por diante.

 ### Saída
 A saída deve consistir de uma linha, contendo **N** números inteiros separados por espaços em branco, representando o preço do chocolate em cada um dos **N** dias.

 ### Restrições
 * **2 <= N <= 10⁶**

 Exemplos de entrada | Exemplos de saída
 :------------------:|:-----------------:
  2<br>A             | 0 1
  9<br>AAABAABB      | 0 1 2 3 2 3 4 3 2
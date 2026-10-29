# Gasto de energia com Bubble Sort


**Aluno:** Pedro Henrique de Lira Tavares
**Disciplina:** Algoritmos e Pensamento Computacional
**Professora:** Karla Sartin


---

## Problema escolhido

O gasto de energia de uma casa muda de um dia pro outro. Quando os valores estão soltos numa lista, é difícil saber qual dia gastou mais e qual gastou menos. Ordenando os valores fica bem mais fácil ver isso, por exemplo pra saber em quais dias a conta de luz pesou mais.

## Objetivo

Fazer um programa em C que guarda o gasto de energia (em kWh) de 10 dias num array e ordena esses valores com o Bubble Sort. O usuário escolhe se quer em ordem crescente ou decrescente. O programa mostra os valores antes e depois de ordenar e avisa qual critério foi usado.

## Como o Bubble Sort funciona

O Bubble Sort pega dois números que estão um do lado do outro e compara. Se estiverem na ordem errada, ele troca os dois de lugar. Isso é repetido passando pelo array várias vezes, até ficar tudo ordenado.

No código eu usei dois `for`. O de fora controla quantas passadas são feitas. O de dentro compara cada número com o da frente e troca quando precisa, usando a variável `temp` pra não perder o valor na troca.

O de dentro vai até `TAM - 1 - i` porque a cada passada o último número já fica no lugar certo, então não precisa comparar ele de novo.

Pra mudar entre crescente e decrescente só muda o sinal da comparação: `>` pra crescente e `<` pra decrescente.

## Como compilar e executar

Compilar:

    gcc main.c -o programa

Executar:

    ./programa

Também dá pra rodar no OnlineGDB. O programa mostra os valores, pede a opção (1 pra crescente ou 2 pra decrescente) e mostra o resultado.

## Exemplo de entrada e saída

Entrada: opção `1` (crescente)

    Gasto de energia da casa nos ultimos 10 dias

    Antes de ordenar:
    Dia 1: 12.40 kWh
    Dia 2: 18.20 kWh
    Dia 3: 9.80 kWh
    Dia 4: 15.00 kWh
    Dia 5: 22.50 kWh
    Dia 6: 8.30 kWh
    Dia 7: 30.70 kWh
    Dia 8: 14.10 kWh
    Dia 9: 11.60 kWh
    Dia 10: 25.90 kWh

    Como voce quer ordenar?
    1 - Crescente (menor pro maior)
    2 - Decrescente (maior pro menor)
    Opcao: 1

    Ordenado em ordem CRESCENTE
    Depois de ordenar:
    1: 8.30 kWh
    2: 9.80 kWh
    3: 11.60 kWh
    4: 12.40 kWh
    5: 14.10 kWh
    6: 15.00 kWh
    7: 18.20 kWh
    8: 22.50 kWh
    9: 25.90 kWh
    10: 30.70 kWh

Entrada: opção `2` (decrescente)

    Ordenado em ordem DECRESCENTE
    Depois de ordenar:
    1: 30.70 kWh
    2: 25.90 kWh
    3: 22.50 kWh
    4: 18.20 kWh
    5: 15.00 kWh
    6: 14.10 kWh
    7: 12.40 kWh
    8: 11.60 kWh
    9: 9.80 kWh
    10: 8.30 kWh

Entrada: opção inválida (`5`) e depois `1`

    Opcao: 5
    Opcao invalida, digite 1 ou 2.

    Como voce quer ordenar?
    1 - Crescente (menor pro maior)
    2 - Decrescente (maior pro menor)
    Opcao: 1

Quando digita uma opção errada o programa avisa e pergunta de novo, só continua quando for 1 ou 2.

## Tecnologias e ferramentas

- Linguagem C
- OnlineGDB, pra escrever e testar o código
- Git e GitHub, pra guardar o projeto e entregar

## Considerações finais

Nesse trabalho deu pra entender melhor como o Bubble Sort funciona na prática, comparando os vizinhos e trocando de lugar até ordenar tudo. O que mais me confundiu no começo foi o limite do laço de dentro (`TAM - 1 - i`), mas depois que entendi que o final do array já fica ordenado a cada passada, fez sentido. Usei o `do...while` pra validar a opção do usuário, igual fiz no trabalho de monitoramento de temperatura. Usei IA como apoio pra estudar e organizar o projeto, mas testei o programa e consigo explicar o código.

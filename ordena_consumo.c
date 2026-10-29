#include <stdio.h>

#define TAM 10 // 10 dias, o minimo pedido eh 10

int main() {
    // gasto de energia (kWh) em cada um dos 10 dias
    float gasto[TAM] = {12.4, 18.2, 9.8, 15.0, 22.5, 8.3, 30.7, 14.1, 11.6, 25.9};
    int escolha, i, j;
    float temp;

    printf("Gasto de energia da casa nos ultimos 10 dias\n\n");

    // mostra o array antes de ordenar
    printf("Antes de ordenar:\n");
    for (i = 0; i < TAM; i++) {
        printf("Dia %d: %.2f kWh\n", i + 1, gasto[i]);
    }

    // pergunta como o usuario quer ordenar, repete se digitar errado
    do {
        printf("\nComo voce quer ordenar?\n");
        printf("1 - Crescente (menor pro maior)\n");
        printf("2 - Decrescente (maior pro menor)\n");
        printf("Digite 1 ou 2: ");
        scanf("%d", &escolha);

        if (escolha != 1 && escolha != 2) {
            printf("Opcao invalida, tente de novo.\n");
        }
    } while (escolha != 1 && escolha != 2);

    // bubble sort
    // o for de fora faz as passadas
    for (i = 0; i < TAM - 1; i++) {
        // o for de dentro compara cada numero com o da frente
        // o "- i" eh porque o final do array ja ta ordenado
        for (j = 0; j < TAM - 1 - i; j++) {
            if (escolha == 1) {
                // crescente: se o da esquerda for maior, troca
                if (gasto[j] > gasto[j + 1]) {
                    temp = gasto[j];
                    gasto[j] = gasto[j + 1];
                    gasto[j + 1] = temp;
                }
            } else {
                // decrescente: se o da esquerda for menor, troca
                if (gasto[j] < gasto[j + 1]) {
                    temp = gasto[j];
                    gasto[j] = gasto[j + 1];
                    gasto[j + 1] = temp;
                }
            }
        }
    }

    // mostra qual criterio foi usado
    if (escolha == 1) {
        printf("\nOrdem crescente (do menor gasto pro maior)\n");
    } else {
        printf("\nOrdem decrescente (do maior gasto pro menor)\n");
    }

    // mostra o array depois de ordenar
    printf("Depois de ordenar:\n");
    for (i = 0; i < TAM; i++) {
        printf("%d: %.2f kWh\n", i + 1, gasto[i]);
    }

    // o menor e o maior ficam nas pontas do array
    if (escolha == 1) {
        printf("\nMenor gasto: %.2f kWh\n", gasto[0]);
        printf("Maior gasto: %.2f kWh\n", gasto[TAM - 1]);
    } else {
        printf("\nMaior gasto: %.2f kWh\n", gasto[0]);
        printf("Menor gasto: %.2f kWh\n", gasto[TAM - 1]);
    }

    return 0;
}

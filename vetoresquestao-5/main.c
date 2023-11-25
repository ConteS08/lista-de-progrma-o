#include <stdio.h>
#include <stdlib.h>

int main() {
    // declarando os vetores 
    int vetor1[20], vetor2[20], diferenca[20], soma[20], multiplicacao[20];

    // lendo os valores para o primeiro vetor
    printf("Digite 20 números para o primeiro vetor:\n");
    for (int i = 0; i < 20; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor1[i]);
    }

    // lendo os valores para o segundo vetor
    printf("\nDigite 20 números para o segundo vetor:\n");
    for (int i = 0; i < 20; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor2[i]);
    }

    // calculando a diferença, soma e multiplicação
    for (int i = 0; i < 20; i++) {
        diferenca[i] = vetor1[i] - vetor2[i];
        soma[i] = vetor1[i] + vetor2[i];
        multiplicacao[i] = vetor1[i] * vetor2[i];
    }

    // resultados
    printf("\nDiferença:\n");
    for (int i = 0; i < 20; i++) {
        printf("%d ", diferenca[i]);
    }

    printf("\n\nSoma:\n");
    for (int i = 0; i < 20; i++) {
        printf("%d ", soma[i]);
    }

    printf("\n\nMultiplicação:\n");
    for (int i = 0; i < 20; i++) {
        printf("%d ", multiplicacao[i]);
    }

    return 0;
}
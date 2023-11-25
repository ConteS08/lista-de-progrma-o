#include <stdio.h>
#include <stdlib.h>

int main() {
    // declarando a matriz
    int MAT[10][15];

    //a matriz com números inteiros
    printf("Digite os elementos da matriz:\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 15; j++) {
            printf("MAT[%d][%d]: ", i, j);
            scanf("%d", &MAT[i][j]);
        }
    }

    // calculando e exibindo a soma dos elementos de cada linha e se é par ou ímpar
    printf("\nSoma dos elementos por linha e paridade:\n");
    for (int i = 0; i < 10; i++) {
        int somaLinha = 0;
        for (int j = 0; j < 15; j++) {
            somaLinha += MAT[i][j];
        }
        printf("Linha %d: Soma = %d, Paridade = %s\n", i + 1, somaLinha, (somaLinha % 2 == 0) ? "Par" : "Ímpar");
    }

    // calculando e exibindo a soma dos elementos de cada coluna e se é par ou ímpar
    printf("\nSoma dos elementos por coluna e paridade:\n");
    for (int j = 0; j < 15; j++) {
        int somaColuna = 0;
        for (int i = 0; i < 10; i++) {
            somaColuna += MAT[i][j];
        }
        printf("Coluna %d: Soma = %d, Paridade = %s\n", j + 1, somaColuna, (somaColuna % 2 == 0) ? "Par" : "Ímpar");
    }

    return 0;
}
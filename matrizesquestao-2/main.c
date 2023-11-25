#include <stdio.h>
#include <stdlib.h>

int main() {
    // declarando a matriz e o vetor
    double matriz[50][50];
    double diagonalPrincipal[50];

    // preenchendo a matriz com números reais 
    printf("Digite os elementos da matriz:\n");
    for (int i = 0; i < 50; i++) {
        for (int j = 0; j < 50; j++) {
            printf("matriz[%d][%d]: ", i, j);
            scanf("%lf", &matriz[i][j]);
        }
    }

    // extraindo a diagonal principal para o vetor
    for (int i = 0; i < 50; i++) {
        diagonalPrincipal[i] = matriz[i][i];
    }

    // imprimindo o vetor
    printf("\nConteúdo da diagonal principal no vetor:\n");
    for (int i = 0; i < 50; i++) {
        printf("%.2lf ", diagonalPrincipal[i]);
    }

    return 0;
}
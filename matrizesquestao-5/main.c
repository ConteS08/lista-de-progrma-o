#include <stdio.h>
#include <stdlib.h>

int main() {
    int linhas, colunas;

    // solicitando as dimensões das matrizes ao usuário
    printf("Digite o número de linhas das matrizes: ");
    scanf("%d", &linhas);
    printf("Digite o número de colunas das matrizes: ");
    scanf("%d", &colunas);

    // declarando as matrizes
    int matrizA[linhas][colunas], matrizB[linhas][colunas], resultado[linhas][colunas];

    // preenchendo a matriz A com números inteiros (pode ser adaptado conforme necessário)
    printf("\nDigite os elementos da matriz A:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("Matriz A[%d][%d]: ", i, j);
            scanf("%d", &matrizA[i][j]);
        }
    }

    // preenchendo a matriz B com números inteiros (pode ser adaptado conforme necessário)
    printf("\nDigite os elementos da matriz B:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("Matriz B[%d][%d]: ", i, j);
            scanf("%d", &matrizB[i][j]);
        }
    }

    // realizando a soma das matrizes
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            resultado[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }

    // exibindo a matriz resultado
    printf("\nMatriz Resultado (A + B):\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d\t", resultado[i][j]);
        }
        printf("\n");
    }

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
int main() {
    int linhasA, colunasA, linhasB, colunasB;

    // solicitando as dimensões da primeira matriz ao usuário
    printf("Digite o número de linhas da matriz A: ");
    scanf("%d", &linhasA);
    printf("Digite o número de colunas da matriz A: ");
    scanf("%d", &colunasA);

    // solicitando as dimensões da segunda matriz ao usuário
    printf("\nDigite o número de linhas da matriz B: ");
    scanf("%d", &linhasB);
    printf("Digite o número de colunas da matriz B: ");
    scanf("%d", &colunasB);

    // verificando se é possível multiplicar as matrizes
    if (colunasA != linhasB) {
        printf("\nAs matrizes não podem ser multiplicadas (número de colunas de A deve ser igual ao número de linhas de B).\n");
        return 1; 
    }

    // declarando as matrizes
    int matrizA[linhasA][colunasA], matrizB[linhasB][colunasB], resultado[linhasA][colunasB];

    // preenchendo a matriz A com números inteiros
    printf("\nDigite os elementos da matriz A:\n");
    for (int i = 0; i < linhasA; i++) {
        for (int j = 0; j < colunasA; j++) {
            printf("Matriz A[%d][%d]: ", i, j);
            scanf("%d", &matrizA[i][j]);
        }
    }

    // preenchendo a matriz B com números inteiros 
    printf("\nDigite os elementos da matriz B:\n");
    for (int i = 0; i < linhasB; i++) {
        for (int j = 0; j < colunasB; j++) {
            printf("Matriz B[%d][%d]: ", i, j);
            scanf("%d", &matrizB[i][j]);
        }
    }

    // inicializando a matriz resultado com zeros
    for (int i = 0; i < linhasA; i++) {
        for (int j = 0; j < colunasB; j++) {
            resultado[i][j] = 0;
        }
    }

    // realizando a multiplicação das matrizes
    for (int i = 0; i < linhasA; i++) {
        for (int j = 0; j < colunasB; j++) {
            for (int k = 0; k < colunasA; k++) {
                resultado[i][j] += matrizA[i][k] * matrizB[k][j];
            }
        }
    }

    // exibindo a matriz resultado
    printf("\nMatriz Resultado (A x B):\n");
    for (int i = 0; i < linhasA; i++) {
        for (int j = 0; j < colunasB; j++) {
            printf("%d\t", resultado[i][j]);
        }
        printf("\n");
    }

    return 0;
}
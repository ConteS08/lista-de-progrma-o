#include <stdio.h>
#include <stdlib.h>

int main() {
    // declarando a matriz quadrada de ordem 4
    int matriz[4][4];

    // preenchendo a matriz com números inteiros (pode ser adaptado conforme necessário)
    printf("Digite os elementos da matriz (ordem 4):\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("Matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // opções para o usuário
    int opcao;
    do {
        printf("\nEscolha uma opção:\n");
        printf("1. Imprimir todos os elementos da matriz\n");
        printf("2. Somar os quadrados de todos os elementos da primeira coluna\n");
        printf("3. Somar todos os elementos da terceira linha\n");
        printf("4. Somar os elementos da diagonal principal\n");
        printf("5. Somar todos os elementos de índice par da segunda linha\n");
        printf("0. Sair\n");
        printf("Opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                // imprimir todos os elementos da matriz
                printf("\nMatriz:\n");
                for (int i = 0; i < 4; i++) {
                    for (int j = 0; j < 4; j++) {
                        printf("%d\t", matriz[i][j]);
                    }
                    printf("\n");
                }
                break;

            case 2:
                // somar os quadrados de todos os elementos da primeira coluna
                {
                    int somaQuadrados = 0;
                    for (int i = 0; i < 4; i++) {
                        somaQuadrados += matriz[i][0] * matriz[i][0];
                    }
                    printf("\nSoma dos quadrados da primeira coluna: %d\n", somaQuadrados);
                }
                break;

            case 3:
                // somar todos os elementos da terceira linha
                {
                    int somaTerceiraLinha = 0;
                    for (int j = 0; j < 4; j++) {
                        somaTerceiraLinha += matriz[2][j];
                    }
                    printf("\nSoma da terceira linha: %d\n", somaTerceiraLinha);
                }
                break;

            case 4:
                // somar os elementos da diagonal principal
                {
                    int somaDiagonal = 0;
                    for (int i = 0; i < 4; i++) {
                        somaDiagonal += matriz[i][i];
                    }
                    printf("\nSoma da diagonal principal: %d\n", somaDiagonal);
                }
                break;

            case 5:
                // somar todos os elementos de índice par da segunda linha
                {
                    int somaElementosParSegundaLinha = 0;
                    for (int j = 0; j < 4; j += 2) {
                        somaElementosParSegundaLinha += matriz[1][j];
                    }
                    printf("\nSoma dos elementos de índice par da segunda linha: %d\n", somaElementosParSegundaLinha);
                }
                break;

            case 0:
                
                printf("\nEncerrando o programa.\n");
                break;

            default:
                printf("\nOpção inválida. Tente novamente.\n");
        }
    } while (opcao != 0);

    return 0;
}
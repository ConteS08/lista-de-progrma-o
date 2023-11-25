#include <stdio.h>

int main() {
    int n;

    printf("Digite o número de elementos: ");
    scanf("%d", &n);

    int numeros[n];
    int pares[n];
    int impares[n];
    int qtd_pares = 0;
    int qtd_impares = 0;

    printf("Digite os números inteiros:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &numeros[i]);
        if (numeros[i] % 2 == 0) {
            pares[qtd_pares] = numeros[i];
            qtd_pares++;
        } else {
            impares[qtd_impares] = numeros[i];
            qtd_impares++;
        }
    }

    for (int i = 0; i < qtd_pares - 1; i++) {
        for (int j = i + 1; j < qtd_pares; j++) {
            if (pares[i] > pares[j]) {
                int temp = pares[i];
                pares[i] = pares[j];
                pares[j] = temp;
            }
        }
    }

    for (int i = 0; i < qtd_impares - 1; i++) {
        for (int j = i + 1; j < qtd_impares; j++) {
            if (impares[i] < impares[j]) {
                int temp = impares[i];
                impares[i] = impares[j];
                impares[j] = temp;
            }
        }
    }

    printf("Números pares em ordem crescente:\n");
    for (int i = 0; i < qtd_pares; i++) {
        printf("%d ", pares[i]);
    }
    printf("\n");

    printf("Números ímpares em ordem decrescente:\n");
    for (int i = 0; i < qtd_impares; i++) {
        printf("%d ", impares[i]);
    }
    printf("\n");

    return 0;
}
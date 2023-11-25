#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero, soma = 0, contador = 0;

    do {
        // Solicitar ao usuário um número
        printf("Digite um número inteiro positivo (ou um valor negativo para encerrar): ");
        scanf("%d", &numero);

        // Verificar se o número é positivo
        if (numero >= 0) {
            soma += numero;
            contador++;
        }

    } while (numero >= 0);

    // Verificar se houve pelo menos um número positivo digitado
    if (contador > 0) {
        float media = (float)soma / contador;
        printf("Média aritmética dos valores positivos digitados: %.2f\n", media);
    } else {
        printf("Nenhum número positivo foi digitado.\n");
    }

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero, soma = 0, contador = 0;

    do {
        // Solicitar ao usuário um número
        printf("Digite um número (ou 0 para encerrar): ");
        scanf("%d", &numero);

        // Verificar se o número é par e diferente de zero
        if (numero % 2 == 0 && numero != 0) {
            soma += numero;
            contador++;
        }

    } while (numero != 0);

    // Calcular e exibir a média dos números pares digitados
    if (contador > 0) {
        float media = (float)soma / contador;
        printf("Média dos números pares digitados: %.2f\n", media);
    } else {
        printf("Nenhum número par foi digitado.\n");
    }

    return 0;
}
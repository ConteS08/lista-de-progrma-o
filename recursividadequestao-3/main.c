#include <stdio.h>
#include <stdlib.h>

// protótipo da função recursiva
int contar_digitos(int numero);

int main() {
    int numero;

    // solicitar ao usuário o número para contar os dígitos
    printf("digite um número: ");
    scanf("%d", &numero);

    // chamar a função recursiva para contar os dígitos e exibir o resultado
    printf("o número digitado possui %d dígitos.\n", contar_digitos(numero));

    return 0;
}

// função recursiva para contar os dígitos de um número
int contar_digitos(int numero) {
    // caso base: número tem apenas um dígito
    if (numero < 10 && numero >= 0) {
        return 1;
    } else {
        // caso recursivo: contar os dígitos do número sem o último dígito
        return 1 + contar_digitos(numero / 10);
    }
}
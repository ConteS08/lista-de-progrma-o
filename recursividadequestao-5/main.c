#include <stdio.h>
#include <stdlib.h>

// protótipo da função recursiva
int potencia(int a, int b);

int main() {
    int base, expoente;

    // solicitar ao usuário a base e o expoente
    printf("digite a base: ");
    scanf("%d", &base);

    printf("digite o expoente: ");
    scanf("%d", &expoente);

    // chamar a função recursiva para calcular a potência e exibir o resultado
    printf("%d elevado a %d é igual a %d\n", base, expoente, potencia(base, expoente));

    return 0;
}

// função recursiva para calcular a potência
int potencia(int a, int b) {
    // caso base: qualquer número elevado a 0 é 1
    if (b == 0) {
        return 1;
    } else {
        // caso recursivo: a elevado a b é a multiplicado por a elevado a b-1
        return a * potencia(a, b - 1);
    }
}
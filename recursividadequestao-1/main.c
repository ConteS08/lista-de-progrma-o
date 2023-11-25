#include <stdio.h>
#include <stdlib.h>

// protótipo da função recursiva
int calcularFatorial(int n);

int main() {
    int numero;

    // solicitar ao usuário o número para calcular o fatorial
    printf("Digite um número para calcular o fatorial: ");
    scanf("%d", &numero);

    // verificar se o número é não negativo
    if (numero < 0) {
        printf("O fatorial não está definido para números negativos.\n");
    } else {
        // chamar a função recursiva para calcular o fatorial e exibir o resultado
        int resultado = calcularFatorial(numero);
        printf("O fatorial de %d é: %d\n", numero, resultado);
    }

    return 0;
}

// função recursiva para calcular o fatorial
int calcularFatorial(int n) {
    // caso base: fatorial de 0 ou 1 é 1
    if (n == 0 || n == 1) {
        return 1;
    } else {
        // caso recursivo: fatorial de n é n multiplicado pelo fatorial de n-1
        return n * calcularFatorial(n - 1);
    }
}
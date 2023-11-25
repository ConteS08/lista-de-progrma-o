#include <stdio.h>

// protótipos das funções recursivas
float soma(float num1, float num2);
float multiplicacao(float num1, float num2);
float subtracao(float num1, float num2);
float divisao(float num1, float num2);

int main() {
    float numero1, numero2;

    // solicitar ao usuário os números para as operações
    printf("digite o primeiro número: ");
    scanf("%f", &numero1);

    printf("digite o segundo número: ");
    scanf("%f", &numero2);

    // chamar as funções recursivas para realizar as operações e exibir os resultados
    printf("soma: %.2f\n", soma(numero1, numero2));
    printf("multiplicação: %.2f\n", multiplicacao(numero1, numero2));
    printf("subtração: %.2f\n", subtracao(numero1, numero2));

    // verificar se o segundo número é diferente de zero antes de realizar a divisão
    if (numero2 != 0) {
        printf("divisão: %.2f\n", divisao(numero1, numero2));
    } else {
        printf("divisão por zero não é definida.\n");
    }

    return 0;
}

// função recursiva para realizar a soma
float soma(float num1, float num2) {
    return num1 + num2;
}

// função recursiva para realizar a multiplicação
float multiplicacao(float num1, float num2) {
    if (num2 == 0) {
        return 0;
    } else {
        return num1 + multiplicacao(num1, num2 - 1);
    }
}

// função recursiva para realizar a subtração
float subtracao(float num1, float num2) {
    return num1 - num2;
}

// função recursiva para realizar a divisão
float divisao(float num1, float num2) {
    return num1 / num2;
}
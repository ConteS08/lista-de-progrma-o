#include <stdio.h>
#include <stdlib.h>

int main() {
    int contadorNegativos = 0;
    int valor;

    printf("Digite 5 valores, um de cada vez:\n");

    for (int i = 0; i < 5; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &valor);

        // Verificar se o valor é negativo
        if (valor < 0) {
            contadorNegativos++;
        }
    }

    // Exibir o resultado
    printf("Quantidade de valores negativos: %d\n", contadorNegativos);

    return 0;
}
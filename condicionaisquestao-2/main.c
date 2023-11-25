#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int num_lados;
    float medida_lado;

    // Solicitar ao usuário o número de lados e a medida do lado
    printf("Informe o número de lados do polígono regular: ");
    scanf("%d", &num_lados);

    printf("Informe a medida do lado (em cm): ");
    scanf("%f", &medida_lado);

    // Verificar e imprimir informações com base no número de lados
    if (num_lados == 3) {
        // Calcular a área de um triângulo usando a fórmula de Herão
        float s = 3 * medida_lado / 2;  // semiperímetro
        float area_tri = sqrt(s * pow(s - medida_lado, 3));
        printf("TRIÂNGULO\nÁrea: %.2f cm²\n", area_tri);
    } else if (num_lados == 4) {
        // Calcular a área de um quadrado
        float area_quad = pow(medida_lado, 2);
        printf("QUADRADO\nÁrea: %.2f cm²\n", area_quad);
    } else if (num_lados == 5) {
        printf("PENTÁGONO\n");
    } else {
        printf("Polígono não suportado. Este programa trata apenas triângulos, quadrados e pentágonos.\n");
    }

    return 0;
}
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    // declarando um vetor 
    char nomes[10][50];

    // ler os 10 nomes do usuário
    printf("Digite 10 nomes de pessoas:\n");
    for (int i = 0; i < 10; i++) {
        printf("Nome %d: ", i + 1);
        scanf("%s", nomes[i]);
    }

    // nome adicional do usuário para verificar se está no vetor
    char nomeBusca[50];
    printf("\nDigite um nome para buscar: ");
    scanf("%s", nomeBusca);

    // verificar se o nome está no vetor
    int encontrado = 0; 
    for (int i = 0; i < 10; i++) {
        if (strcmp(nomeBusca, nomes[i]) == 0) {
            encontrado = 1;
            break;
        }
    }

    // resultado
    if (encontrado) {
        printf("ACHEI\n");
    } else {
        printf("NÃO ACHEI\n");
    }

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
int vetoresIguais(int vetor1[], int vetor2[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        if (vetor1[i] != vetor2[i]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int tamanho = 5;
    int vetor1[] = {1, 2, 3, 4, 5};
    int vetor2[] = {1, 2, 3, 4, 5};
    int vetor3[] = {1, 2, 3, 4, 6};

    if (vetoresIguais(vetor1, vetor2, tamanho)) {
        printf("Vetores 1 e 2 são iguais.\n");
    } else {
        printf("Vetores 1 e 2 são diferentes.\n");
    }

    if (vetoresIguais(vetor1, vetor3, tamanho)) {
        printf("Vetores 1 e 3 são iguais.\n");
    } else {
        printf("Vetores 1 e 3 são diferentes.\n");
    }

    return 0;
}
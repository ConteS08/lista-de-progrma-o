#include <stdio.h>
#include <stdlib.h>

int main() {
  //declarando vetor
    int vetorOriginal[12];
    int vetorModificado[12];

    //lendo os numeros inteiros e positivos
    printf("Digite 12 números inteiros e positivos:\n");
    for (int i = 0; i < 12; i++) {
        do {
            printf("Elemento %d: ", i + 1);
            scanf("%d", &vetorOriginal[i]);
        } while (vetorOriginal[i] <= 0);
    }

    //calculo de vetor
    for (int i = 0; i < 12; i++) {
        if (i % 2 == 0) {
            vetorModificado[i] = vetorOriginal[i] / 2;
        } else {
            vetorModificado[i] = vetorOriginal[i] * 3;
        }
    }

    //imprimindo o vetor original
    printf("Vetor Original: ");
    for (int i = 0; i < 12; i++) {
        printf("%d", vetorOriginal[i]);
        if (i < 11) {
            printf(", ");
        }
    }
    printf("\n");

    //imprimindo o vetor modificado
    printf("Vetor Modificado: ");
    for (int i = 0; i < 12; i++) {
        printf("%d", vetorModificado[i]);
        if (i < 11) {
            printf(", ");
        }
    }
    printf("\n");

    return 0;
}

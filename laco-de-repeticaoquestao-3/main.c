#include <stdio.h>
#include <stdlib.h>

int main() {
    int voto, candidato1 = 0, candidato2 = 0, candidato3 = 0, candidato4 = 0, votosNulos = 0, votosBranco = 0;

    printf("Digite o código do candidato (1 a 4) ou 5 para voto nulo, 6 para voto em branco. Digite 0 para encerrar a votação.\n");

    while (1) {
        // Solicitar ao usuário o código do voto
        printf("Digite o código do voto: ");
        scanf("%d", &voto);

        // Verificar o código do voto e contabilizar
        switch (voto) {
            case 1:
                candidato1++;
                break;
            case 2:
                candidato2++;
                break;
            case 3:
                candidato3++;
                break;
            case 4:
                candidato4++;
                break;
            case 5:
                votosNulos++;
                break;
            case 6:
                votosBranco++;
                break;
            case 0:
                // Encerrar a votação
                printf("Votação encerrada.\n");
                break;
            default:
                printf("Código de voto inválido. Tente novamente.\n");
        }

        // Encerrar o loop se o código do voto for 0
        if (voto == 0) {
            break;
        }
    }

    // Exibir os resultados
    printf("Resultados da eleição:\n");
    printf("Candidato 1: %d votos\n", candidato1);
    printf("Candidato 2: %d votos\n", candidato2);
    printf("Candidato 3: %d votos\n", candidato3);
    printf("Candidato 4: %d votos\n", candidato4);
    printf("Votos Nulos: %d votos\n", votosNulos);
    printf("Votos em Branco: %d votos\n", votosBranco);

    return 0;
}
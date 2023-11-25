#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// definição da estrutura para armazenar informações de uma pessoa
Pessoa {
    char nome[50];
    char endereco[100];
    char telefone[15];
};

// Função de comparação para qsort (para ordenar por nome)
int compararPorNome(const void *a, const void *b) {
    return strcmp((( Pessoa *)a)->nome, (( Pessoa *)b)->nome);
}

int main() {
    // declaração de estruturas para armazenar informações de 10 pessoas
    struct Pessoa pessoas[10];

    // entrada de dados para 10 pessoas
    for (int i = 0; i < 10; i++) {
        printf("Digite o nome da pessoa %d: ", i + 1);
        fgets(pessoas[i].nome, sizeof(pessoas[i].nome), stdin);
        pessoas[i].nome[strcspn(pessoas[i].nome, "\n")] = '\0';  // remover o caractere de nova linha

        printf("Digite o endereço da pessoa %d: ", i + 1);
        fgets(pessoas[i].endereco, sizeof(pessoas[i].endereco), stdin);
        pessoas[i].endereco[strcspn(pessoas[i].endereco, "\n")] = '\0';

        printf("Digite o telefone da pessoa %d: ", i + 1);
        fgets(pessoas[i].telefone, sizeof(pessoas[i].telefone), stdin);
        pessoas[i].telefone[strcspn(pessoas[i].telefone, "\n")] = '\0';

        printf("\n");
    }

    // ordenar as pessoas por nome em ordem alfabética
    qsort(pessoas, 10, sizeof(struct Pessoa), compararPorNome);

    // imprimir em ordem alfabética
    printf("Pessoas em ordem alfabética:\n");
    for (int i = 0; i < 10; i++) {
        printf("Nome: %s\n", pessoas[i].nome);
        printf("Endereço: %s\n", pessoas[i].endereco);
        printf("Telefone: %s\n", pessoas[i].telefone);
        printf("\n");
    }

    return 0;
}
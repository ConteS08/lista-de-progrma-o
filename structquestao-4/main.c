#include <stdio.h>
#include <stdlib.h>

// definição da estrutura para armazenar informações de uma pessoa
struct Pessoa {
    char nome[50];
    int idade;
    char endereco[100];
};

int main() {
    // declaração da estrutura para armazenar informações de uma pessoa
    struct Pessoa pessoa;

    // entrada de dados
    printf("Digite o nome da pessoa: ");
    fgets(pessoa.nome, sizeof(pessoa.nome), stdin);
    pessoa.nome[strcspn(pessoa.nome, "\n")] = '\0';  
    printf("Digite a idade da pessoa: ");
    scanf("%d", &pessoa.idade);
    getchar(); 

    printf("Digite o endereço da pessoa: ");
    fgets(pessoa.endereco, sizeof(pessoa.endereco), stdin);
    pessoa.endereco[strcspn(pessoa.endereco, "\n")] = '\0'; 

    // exibição dos dados
    printf("\nInformações da pessoa:\n");
    printf("Nome: %s\n", pessoa.nome);
    printf("Idade: %d anos\n", pessoa.idade);
    printf("Endereço: %s\n", pessoa.endereco);

    return 0;
}
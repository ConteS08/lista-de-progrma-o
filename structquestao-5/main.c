#include <stdio.h>
#include <stdlib.h>

// definição da estrutura para armazenar informações de um aluno
struct aluno {
    char nome[50];
    int matricula;
    char curso[50];
};

int main() {
    // declaração do vetor de estruturas para armazenar informações de 5 alunos
    struct aluno alunos[5];

    // entrada de dados para cada aluno
    for (int i = 0; i < 5; i++) {
        printf("digite o nome do aluno %d: ", i + 1);
        fgets(alunos[i].nome, sizeof(alunos[i].nome), stdin);
        alunos[i].nome[strcspn(alunos[i].nome, "\n")] = '\0';

        printf("digite o número de matrícula do aluno %d: ", i + 1);
        scanf("%d", &alunos[i].matricula);
        getchar(); 
      
        printf("digite o curso do aluno %d: ", i + 1);
        fgets(alunos[i].curso, sizeof(alunos[i].curso), stdin);
        alunos[i].curso[strcspn(alunos[i].curso, "\n")] = '\0';

        printf("\n");
    }

    // exibição dos dados dos alunos
    printf("dados dos alunos:\n");
    for (int i = 0; i < 5; i++) {
        printf("aluno %d:\n", i + 1);
        printf("nome: %s\n", alunos[i].nome);
        printf("número de matrícula: %d\n", alunos[i].matricula);
        printf("curso: %s\n", alunos[i].curso);
        printf("\n");
    }

    return 0;
}
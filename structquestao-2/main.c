#include <stdio.h>
#include <stdlib.h>

// definição da estrutura para armazenar informações de um aluno
struct Aluno {
    int matricula;
    char nome[50];
    int codigoDisciplina;
    float nota1;
    float nota2;
    float mediaFinal;
};

int main() {
    // declaração de estruturas para armazenar informações de até 10 alunos
    struct Aluno alunos[10];

    // entrada de dados para cada aluno
    for (int i = 0; i < 10; i++) {
        printf("Digite a matrícula do aluno %d: ", i + 1);
        scanf("%d", &alunos[i].matricula);

        printf("Digite o nome do aluno %d: ", i + 1);
        scanf("%s", alunos[i].nome);

        printf("Digite o código da disciplina do aluno %d: ", i + 1);
        scanf("%d", &alunos[i].codigoDisciplina);

        printf("Digite a Nota1 do aluno %d: ", i + 1);
        scanf("%f", &alunos[i].nota1);

        printf("Digite a Nota2 do aluno %d: ", i + 1);
        scanf("%f", &alunos[i].nota2);

        printf("\n");
    }

    // calcular a média final ponderada para cada aluno
    for (int i = 0; i < 10; i++) {
        alunos[i].mediaFinal = (alunos[i].nota1 * 1.0) + (alunos[i].nota2 * 2.0);
        alunos[i].mediaFinal /= 3.0; // dividir pela soma dos pesos (1.0 + 2.0)
    }

    // a listagem final dos alunos com suas médias
    printf("Listagem final dos alunos:\n");
    for (int i = 0; i < 10; i++) {
        printf("Matrícula: %d\n", alunos[i].matricula);
        printf("Nome: %s\n", alunos[i].nome);
        printf("Código da Disciplina: %d\n", alunos[i].codigoDisciplina);
        printf("Nota1: %.2f\n", alunos[i].nota1);
        printf("Nota2: %.2f\n", alunos[i].nota2);
        printf("Média Final: %.2f\n", alunos[i].mediaFinal);
        printf("\n");
    }

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

// definição da estrutura para armazenar informações de um aluno
struct aluno {
    int matricula;
    char nome[50];
    float nota1;
    float nota2;
    float nota3;
    float media_geral;
};

// função para entrada de dados dos alunos
void entrada_dados(struct aluno *alunos, int quantidade) {
    for (int i = 0; i < quantidade; i++) {
        printf("digite a matrícula do aluno %d: ", i + 1);
        scanf("%d", &alunos[i].matricula);
        getchar(); 

        printf("digite o nome do aluno %d: ", i + 1);
        fgets(alunos[i].nome, sizeof(alunos[i].nome), stdin);
        alunos[i].nome[strcspn(alunos[i].nome, "\n")] = '\0';

        printf("digite a nota da primeira prova do aluno %d: ", i + 1);
        scanf("%f", &alunos[i].nota1);

        printf("digite a nota da segunda prova do aluno %d: ", i + 1);
        scanf("%f", &alunos[i].nota2);

        printf("digite a nota da terceira prova do aluno %d: ", i + 1);
        scanf("%f", &alunos[i].nota3);

        alunos[i].media_geral = (alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3) / 3.0;

        printf("\n");
    }
}

// função para encontrar o aluno com a maior nota da primeira prova
struct aluno encontrar_maior_nota_prova1(struct aluno *alunos, int quantidade) {
    struct aluno maior_nota_prova1 = alunos[0];

    for (int i = 1; i < quantidade; i++) {
        if (alunos[i].nota1 > maior_nota_prova1.nota1) {
            maior_nota_prova1 = alunos[i];
        }
    }

    return maior_nota_prova1;
}

// função para encontrar o aluno com a maior média geral
struct aluno encontrar_maior_media_geral(struct aluno *alunos, int quantidade) {
    struct aluno maior_media_geral = alunos[0];

    for (int i = 1; i < quantidade; i++) {
        if (alunos[i].media_geral > maior_media_geral.media_geral) {
            maior_media_geral = alunos[i];
        }
    }

    return maior_media_geral;
}

// função para encontrar o aluno com a menor média geral
struct aluno encontrar_menor_media_geral(struct aluno *alunos, int quantidade) {
    struct aluno menor_media_geral = alunos[0];

    for (int i = 1; i < quantidade; i++) {
        if (alunos[i].media_geral < menor_media_geral.media_geral) {
            menor_media_geral = alunos[i];
        }
    }

    return menor_media_geral;
}

// função para determinar se um aluno foi aprovado ou reprovado
void verificar_aprovacao(struct aluno *aluno) {
    if (aluno->media_geral >= 6.0) {
        printf("%s foi aprovado.\n", aluno->nome);
    } else {
        printf("%s foi reprovado.\n", aluno->nome);
    }
}

int main() {
    // declaração do vetor de estruturas para armazenar informações de 5 alunos
    struct aluno alunos[5];

    // entrada de dados para os alunos
    entrada_dados(alunos, 5);

    // encontrar o aluno com a maior nota da primeira prova
    struct aluno maior_nota_prova1 = encontrar_maior_nota_prova1(alunos, 5);
    printf("aluno com a maior nota na primeira prova:\n");
    printf("nome: %s\n", maior_nota_prova1.nome);
    printf("matrícula: %d\n", maior_nota_prova1.matricula);
    printf("nota da primeira prova: %.2f\n", maior_nota_prova1.nota1);
    printf("\n");

    // encontrar o aluno com a maior média geral
    struct aluno maior_media_geral = encontrar_maior_media_geral(alunos, 5);
    printf("aluno com a maior média geral:\n");
    printf("nome: %s\n", maior_media_geral.nome);
    printf("matrícula: %d\n", maior_media_geral.matricula);
    printf("média geral: %.2f\n", maior_media_geral.media_geral);
    printf("\n");

    // encontrar o aluno com a menor média geral
    struct aluno menor_media_geral = encontrar_menor_media_geral(alunos, 5);
    printf("aluno com a menor média geral:\n");
    printf("nome: %s\n", menor_media_geral.nome);
    printf("matrícula: %d\n", menor_media_geral.matricula);
    printf("média geral: %.2f\n", menor_media_geral.media_geral);
    printf("\n");

    // verificar aprovação para cada aluno
    printf("situação de aprovação/reprovação para cada aluno:\n");
    for (int i = 0; i < 5; i++) {
        printf("aluno %d - %s: ", i + 1, alunos[i].nome);
        verificar_aprovacao(&alunos[i]);
    }

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

// Função para realizar o check-in
void fazer_checkin() {
    char nome[50], cpf[15], telefone[15], cidade[50], estado[3];

    printf("informe seu nome: ");
    scanf("%s", nome);

    printf("informe seu CPF: ");
    scanf("%s", cpf);

    printf("informe seu telefone: ");
    scanf("%s", telefone);

    printf("informe sua cidade: ");
    scanf("%s", cidade);

    printf("informe seu estado (sigla): ");
    scanf("%s", estado);

    printf("check-in realizado com sucesso!\n");
}

// Função para chamar o serviço de quarto
void chamar_servico_quarto() {
    char nome[50];
    int numero_quarto;

    printf("informe seu nome: ");
    scanf("%s", nome);

    printf("informe o número do quarto: ");
    scanf("%d", &numero_quarto);

    printf("serviço de quarto chamado para o quarto %d. Aguarde!\n", numero_quarto);
}

// Função para fazer um pedido
void fazer_pedido() {
    int escolha;

    do {
        printf("menu de pedidos:\n");
        printf("1. comida\n");
        printf("2. bebida\n");
        printf("3. finalizar pedido\n");
        printf("escolha uma opção (1-3): ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                printf("pedido de comida feito. Aguarde a entrega!\n");
                break;
            case 2:
                printf("pedido de bebida feito. Aguarde a entrega!\n");
                break;
            case 3:
                printf("pedido finalizado. Obrigado!\n");
                break;
            default:
                printf("opção inválida. Tente novamente.\n");
        }
    } while (escolha != 3);
}

int main() {
    int opcao;

    do {
        printf("menu principal:\n");
        printf("1. fazer check-in\n");
        printf("2. chamar serviço de quarto\n");
        printf("3. fazer pedido\n");
        printf("4. sair\n");
        printf("escolha uma opção (1-4): ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                fazer_checkin();
                break;
            case 2:
                chamar_servico_quarto();
                break;
            case 3:
                fazer_pedido();
                break;
            case 4:
                printf("obrigado por utilizar nossos serviços. Até mais!\n");
                break;
            default:
                printf("opção inválida. Tente novamente.\n");
        }
    } while (opcao != 4);

    return 0;
}
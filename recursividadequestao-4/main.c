#include <stdio.h>
#include <stdlib.h
#include <string.h>

// protótipo da função recursiva
void inverter_string(char str[], int inicio, int fim);

int main() {
    char string[100];

    // solicitar ao usuário a string a ser invertida
    printf("digite uma string: ");
    fgets(string, sizeof(string), stdin);
    string[strcspn(string, "\n")] = '\0';  // remover o caractere de nova linha deixado pelo fgets

    // chamar a função recursiva para inverter a string e exibir o resultado
    inverter_string(string, 0, strlen(string) - 1);
    printf("string invertida: %s\n", string);

    return 0;
}

// função recursiva para inverter uma string
void inverter_string(char str[], int inicio, int fim) {
    if (inicio < fim) {
        // trocar os caracteres do início e do fim
        char temp = str[inicio];
        str[inicio] = str[fim];
        str[fim] = temp;

        // chamada recursiva para inverter o restante da string
        inverter_string(str, inicio + 1, fim - 1);
    }
}
#include <stdio.h>
#include <stdlib.h>

// definição do tipo Horario
struct Horario {
    int hora;
    int minutos;
    int segundos;
};

// definição do tipo Data
struct Data {
    int dia;
    int mes;
    int ano;
};

// definição do tipo compromisso
struct Compromisso {
    struct Data dataCompromisso;
    struct Horario horarioCompromisso;
    char texto[100]; // assumindo que o texto do compromisso terá no máximo 100 caracteres
};

int main() {
    // exemplo de uso dos novos tipos de dados
    struct Horario meuHorario = {10, 30, 45};
    struct Data minhaData = {24, 11, 2023};
    struct Compromisso meuCompromisso = {{24, 11, 2023}, {10, 30, 45}, "Reunião de Trabalho"};

    // exibir informações
    printf("Horario: %02d:%02d:%02d\n", meuHorario.hora, meuHorario.minutos, meuHorario.segundos);
    printf("Data: %02d/%02d/%04d\n", minhaData.dia, minhaData.mes, minhaData.ano);
    printf("Compromisso:\n");
    printf("Data: %02d/%02d/%04d\n", meuCompromisso.dataCompromisso.dia, meuCompromisso.dataCompromisso.mes, meuCompromisso.dataCompromisso.ano);
    printf("Horario: %02d:%02d:%02d\n", meuCompromisso.horarioCompromisso.hora, meuCompromisso.horarioCompromisso.minutos, meuCompromisso.horarioCompromisso.segundos);
    printf("Texto: %s\n", meuCompromisso.texto);

    return 0;
}
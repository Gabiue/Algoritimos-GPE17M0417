#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include "paciente.h"

void alocacao_paciente(paciente_t *paciente, char *nome, short idade) {
    srand(time(NULL));

    strncpy(paciente->nome, nome, 100);
    paciente->idade = idade;


    int andar = (rand() % 5) + 1; 
    int leito_no_andar = (rand() % 10) + 1; 

    paciente-> leito = (andar * 100) + leito_no_andar;
}


int main() {
    paciente_t paciente;
    char nome[100];
    short idade;

    printf("Digite o nome do paciente: ");
    fgets(nome, 100, stdin);
    nome[strcspn(nome, "\n")] = '\0'; // Remove a quebra de linha

    printf("Digite a idade do paciente: ");
    scanf("%hd", &idade);

    alocacao_paciente(&paciente, nome, idade);

    printf("Paciente: %s\n", paciente.nome);
    printf("Idade: %d\n", paciente.idade);
    printf("Leito alocado: %d\n", paciente.leito);

    return 0;
}

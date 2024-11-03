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



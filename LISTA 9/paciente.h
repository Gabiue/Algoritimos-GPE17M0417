#ifndef PACIENTE_H
#define PACIENTE_H

typedef struct {
    char nome[100];
    short idade;
    int leito;
} paciente_t;

void alocacao_paciente(paciente_t *paciente, char *nome, short idade);

#endif
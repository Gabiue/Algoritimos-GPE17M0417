#ifndef PEDIATRIA_H
#define PEDIATRIA_H

/* Pacientes são crianças de 6 a 15 anos */
/* Consulte: https://abran.org.br/calculadoras/imc-infantil */
typedef struct Paciente {
    char nome[100];
    int idade;
    float peso;
    float altura;
    char genero;
    struct Paciente *prox;
} paciente_t;

typedef enum {
    ABAIXO,
    NORMAL,
    SOBREPESO,
    OBESIDADE
} IMCInfantil;

paciente_t * primeiro_paciente(char *nome, int idade, float peso, float altura, char genero);

/* Adicione uma nova criança no final da lista */
void novo_paciente(paciente_t *primeiro, char *nome, int idade, float peso, float altura, char genero);

/* Consulte: https://abran.org.br/calculadoras/imc-infantil */
IMCInfantil calcula_imc(paciente_t *crianca);

#endif
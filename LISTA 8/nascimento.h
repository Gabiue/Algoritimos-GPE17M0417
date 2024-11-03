#ifndef NASCIMENTO_H
#define NASCIMENTO_H

typedef struct {
    int dia;
    int mes;
    int ano;
} data_t;

int dias_de_vida(data_t nasc);

#endif
#include <stdio.h>
#include "nascimento.h"
#include <time.h>

int dias_de_vida(data_t nasc) {
    struct tm nascimento = {0};
    time_t tempo_nascimento, tempo_atual;
    double diffsegundos;

    
    nascimento.tm_year = nasc.ano - 1900;  
    nascimento.tm_mon = nasc.mes - 1;      
    nascimento.tm_mday = nasc.dia;

    time(&tempo_atual);
    struct tm *atual = localtime(&tempo_atual);

    tempo_nascimento = mktime(&nascimento);
    tempo_atual = mktime(atual);

    diffsegundos = difftime(tempo_atual, tempo_nascimento);
    int dias_de_vida = diffsegundos / (60 * 60 * 24);

    return dias_de_vida;
}
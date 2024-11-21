#include "pediatria.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

paciente_t * primeiro_paciente(char *nome, int idade, float peso, float altura, char genero) {
    paciente_t *novo = (paciente_t *) malloc(sizeof(paciente_t));
    if (novo == NULL) {
        printf("Erro ao alocar memória.\n");
        exit(1);
    }
    strcpy(novo->nome, nome);
    novo->idade = idade;
    novo->peso = peso;
    novo->altura = altura;
    novo->genero = genero;
    novo->prox = NULL;
    return novo;
}

void novo_paciente(paciente_t *primeiro, char *nome, int idade, float peso, float altura, char genero) {
    paciente_t *novo = (paciente_t *) malloc(sizeof(paciente_t));
    if (novo == NULL) {
        printf("Erro ao alocar memória.\n");
        exit(1);
    }
    strcpy(novo->nome, nome);
    novo->idade = idade;
    novo->peso = peso;
    novo->altura = altura;
    novo->genero = genero;
    novo->prox = NULL;

    paciente_t *atual = primeiro;
    while (atual->prox != NULL) {
        atual = atual->prox;
    }
    atual->prox = novo;
}

IMCInfantil calcula_imc(paciente_t *crianca) {
    float imc = crianca->peso / (crianca->altura * crianca->altura);

    // Valores aproximados para classificação do IMC infantil
    if (imc < 14.0) {
        return ABAIXO;
    } else if (imc >= 14.0 && imc < 18.0) {
        return NORMAL;
    } else if (imc >= 18.0 && imc < 22.0) {
        return SOBREPESO;
    } else {
        return OBESIDADE;
    }
}
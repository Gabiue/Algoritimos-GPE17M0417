#include <stdio.h>
#include <stdlib.h>

typedef struct Aluno {
 char nome[100];
 int faltas;
 float nota;
 }aluno_t;

 int main (){
    aluno_t *novo_aluno = (aluno_t*)malloc (sizeof(aluno_t));
    if (novo_aluno == NULL){
        printf ("ERRO DE MEMORIA");
        return 1;
    }
    printf("Digite o nome do aluno: ");
    fgets(novo_aluno->nome, sizeof(novo_aluno->nome), stdin);

    printf("Digite as faltas do aluno: ");
    scanf("%d", &novo_aluno->faltas);

    printf("Digite a nota do aluno: ");
    scanf("%f", &novo_aluno->nota);

    printf("\nAluno: %s\n", novo_aluno->nome);
    printf("Faltas: %d\n", novo_aluno->faltas);
    printf("Nota: %.2f\n", novo_aluno->nota);

    if(novo_aluno->nota >= 6){
        printf("Aluno aprovado\n");
    }
    else {
        printf ("Aluno Reprovado\n");
    }
    free(novo_aluno);
    
    return 0;
 }
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	char nome[100];
	int faltas;
	float nota;
} aluno_t;

int main() {
	aluno_t *aluno;
	aluno = (aluno_t *) malloc(sizeof(aluno_t));
	if (aluno == NULL) {
		printf("Erro em alocar!");
		return 1;
	}
	
	strcpy(aluno->nome, "Fulano de Tal");
	aluno->faltas = 15;
	aluno->nota = 5.5;
	
	printf("Aluno %s, foram %d falta e a NF de %.2f", aluno->nome, aluno->faltas,
													aluno->nota);
	
	free(aluno);
	return 0;
}
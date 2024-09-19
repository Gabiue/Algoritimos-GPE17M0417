#include <stdio.h>

/*Fa¸ca um algoritmo para ler um vetor de 20 n´umeros. Ap´os isto, dever´a ser lido mais um n´umero qualquer
e verificar se esse n´umero existe no vetor ou n˜ao. Se existir, o algoritmo deve gerar um novo vetor sem esse
n´umero. (Considere que n˜ao haver˜ao n´umeros repetidos no vetor).*/

int main(){
	float A[20], rep;
	int i;
	
	for(i=0; i<20; i++){
		printf("Digite o numero: ");
		scanf("%f", &A[i]);
		
	}
	
	printf("Numero verificador: ");
	scanf("%f", &rep);
	
	for (i=0; i<20; i++){
		if (A[i] == rep){
			continue;
		}
		printf("O vetor sem o numero verificador: %f\n", A[i]);
		
	}
	
	return 0;

	
}

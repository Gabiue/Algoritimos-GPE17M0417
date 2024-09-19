#include <stdio.h>

/*Fa¸ca um algoritmo para ler um vetor de 30 n´umeros. Ap´os isto, ler mais um n´umero qualquer, calcular e
escrever quantas vezes esse n´umero aparece no vetor.*/

int main (){
	float A[30], n_qualquer;
	int rep=0, i;
	
	for (i= 0; i <30; i++){
		printf("Digite um numero do indice %d: ", i);
		scanf("%f", &A[i]);
	}
	printf("Digite o numero qualquer: ");
	scanf("%f", &n_qualquer);
	
	for (i= 0; i <30; i++){
		if (A[i] == n_qualquer){
			rep++;
		}
	}
	
	printf("O numero digitado aparece %d vezes no vetor", rep);
	
	return 0;
	
	
}

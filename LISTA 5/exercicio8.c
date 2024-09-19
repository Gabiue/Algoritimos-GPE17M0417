#include <stdio.h>

/*Fa¸ca um algoritmo para ler 10 n´umeros e armazenar em um vetor. Ap´os isto, o algoritmo deve ordenar os
n´umeros no vetor em ordem crescente. Escrever o vetor ordenado.*/

int main(){
	float A[10];
	int i, j, temporario;
	
	for(i = 0; i < 10; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%f", &A[i]);
	}
	
	for(i= 0; i<9; i++){
		for(j=0; j< 9; j++){
			if (A[j] > A[j+1]){
				temporario = A[j];
				A[j] = A[j+1];
				A[j+1] = temporario; 
			}
		}
	}
	
	printf("\n O vetor ordenado em ordem crescente: \n");
	
	for (i=0; i<10; i++){
		printf("%.1f\n", A[i]);
	}
	
	return 0;
	
	
	
	
	
	
}

#include <stdio.h>

/*Ler um vetor A de 10 n´umeros. Ap´os, ler mais um n´umero e guardar em uma vari´avel X. Armazenar em um
vetor M o resultado de cada elemento de A multiplicado pelo valor X. Logo ap´os, imprimir o vetor M.*/

float mult(float a, float b){
	float C;
	C =  a * b;
	return C;
	
}

int main (){
	float A[10];
	float X;
	float M[10];
	int i;
	
	for(i=0 ; i<10; i++){
		printf("Digite um numero: ");
		scanf("%f", &A[i]);
		
	}
	printf("Digite o valor de X a multiplicar todo o vetor A: ");
	scanf("%f", &X);
	
	for(i=0; i<10; i++){
		printf("%.2f * %.2f = %.2f\n", A[i], X, mult(A[i], X));
	}
	
	return 0; 
	
	
}

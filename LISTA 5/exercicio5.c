#include <stdio.h>

/*Fa¸ca um algoritmo para ler 20 n´umeros e armazenar em um vetor. Ap´os a leitura total dos 20 n´umeros, o
algoritmo deve escrever esses 20 n´umeros lidos na ordem inversa.*/

int main (){
	float A[20];
	int i;
	
	for(i=0; i < 20 ; i++){
		printf("Digite um numero: ");
		scanf("%f", &A[i]);
	}
	
	printf ("Os numeros em ordem inversa: \n");
	
	for (i=19; i>=0 ; i--){
		printf("%.1f\n", A[i]);
		
	}
	return 0; 

}

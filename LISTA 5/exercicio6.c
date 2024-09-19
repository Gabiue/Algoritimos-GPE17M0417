#include <stdio.h>

/*Fa¸ca um algoritmo para ler um valor N qualquer (que ser´a o tamanho dos vetores). Ap´os, ler dois vetores A
e B (de tamanho N cada um) e depois armazenar em um terceiro vetor Soma a soma dos elementos do vetor
A com os do vetor B (respeitando as mesmas posi¸c˜oes) e escrever o vetor Soma.*/

int main(){
	int i, N;
	
	
	printf("Digite o valor de 'N' (Tamanho dos vetores): ");
	scanf("%d", &N);
	
	
	float A[N];
	float B[N];
	float soma[N];
	
	
	
	for (i = 0; i <N ; i++){
		printf("Digite o valor de A: ");
		scanf("%f", &A[i]);
	}
	for (i = 0; i <N ; i++){
		printf("Digite o valor de B: ");
		scanf("%f", &B[i]);
	}
	for (i = 0; i <N ; i++){
		soma[i] = A[i] + B[i];
		printf("%f + %f = %f \n", A[i], B[i], soma[i]);
		
	}
	return 0;
}


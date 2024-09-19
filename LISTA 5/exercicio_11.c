#include <stdio.h>

/*. Fa¸ca um algoritmo para ler dois vetores V1 e V2 de 15 n´umeros cada. Calcular e escrever a quantidade de
vezes que V1 e V2 possuem os mesmos n´umeros e nas mesmas posi¸c˜oes.*/

int main (){
	float V1[15], V2[15];
	int i, igual=0;
	
	for (i= 0; i<15; i++){
		printf("Digite o valor de V1[%d]: ", i);
		scanf("%f", &V1[i]);
	}
	for (i= 0; i<15; i++){
		printf("Digite o valor de V2[%d]: ", i);
		scanf("%f", &V2[i]);
	}
	
	for (i= 0; i<15; i++){
		if (V1[i] == V2[i]){
			igual++;
		}
	}
	
	printf("A quantidade de vezes em que os numeros sao iguais nas mesmas posicoes: %d\n", igual);

	
	return 0;
	
	
	
	
}

#include <stdio.h>
#include <math.h>

/*Fa¸ca um algoritmo para ler 50 n´umeros e armazenar em um vetor VET, verificar e escrever se existem n´umeros
repetidos no vetor VET e em que posi¸c˜oes se encontram.*/

int main(){
	float VET[50];
	int i,j;
	const float EPSILON = 0.000001;
	
	
	for(i=0; i <50; i++){
		printf("Digite um numero para o indice %d: ",i );
		scanf("%f", &VET[i]);
	}
	
	for (i= 0; i<49; i++){
		for (j = 0; j<49; j++){
			if(fabs(VET[i] - VET[j]) < EPSILON){
                printf("Numero repetido: %.6f nas posicoes %d e %d\n", VET[i], i, j);
                
	}
	return 0;
}

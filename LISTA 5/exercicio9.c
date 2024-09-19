#include <stdio.h>

/*O mesmo exerc´icio anterior, mas depois de ordenar os elementos do vetor em ordem crescente, deve ser lido
mais um n´umero qualquer e inserir esse novo n´umero na posi¸c˜ao correta, ou seja, mantendo a ordem crescente
do vetor.*/

int main(){
	float A[11];
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
	
	printf("Digite o numero %d: ", i + 1);
    scanf("%f", &A[i]);
    
    for(i= 0; i<10; i++){
		for(j=0; j< 10; j++){
			if (A[j] > A[j+1]){
				temporario = A[j];
				A[j] = A[j+1];
				A[j+1] = temporario; 
			}
		}
	}
	
	printf("\n O vetor ordenado em ordem crescente: \n");
	
	for (i=0; i<11; i++){
		printf("%.1f\n", A[i]);
	}
    
	
	
	
	
	
	return 0;
	
}

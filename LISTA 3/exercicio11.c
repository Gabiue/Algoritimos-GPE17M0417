#include <stdio.h>

/*Modifique o exerc´icio anterior para aceitar somente valores maiores que 0 para N. Caso o valor informado
(para N) n˜ao seja maior que 0, dever´a ser lido um novo valor para N.*/

int main(){
	int N, i;
	
	
	do{
	
		if(N==0){
			printf("O valor de N esta INVALIDO\n");
		}
	printf("Digite que deseja para N(maior que 0): ");
	scanf("%d", &N);
	
	} while (N == 0);
	
	for (i= 1; i <= N; i++){
		printf("%d  ", i);
		
	}
	return 0; 
}



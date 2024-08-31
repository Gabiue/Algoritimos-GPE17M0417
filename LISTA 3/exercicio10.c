#include <stdio.h>

/*Ler um valor N e imprimir todos os valores inteiros entre 1 (inclusive) e N (inclusive). Considere que o N ser´a
sempre maior que ZERO.*/

int main(){
	int N, i;
	
	printf("Digite que deseja para N(Maior que 0): ");
	scanf("%d", &N);
	
	for (i= 1; i <= N; i++){
		printf("%d  ", i);
	}
	return 0; 
}

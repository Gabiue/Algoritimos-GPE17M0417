#include <stdio.h>

/*Escreva um algoritmo para ler 2 valores e se o segundo valor informado for ZERO, deve ser lido um novo
valor, ou seja, para o segundo valor n˜ao pode ser aceito o valor zero e imprimir o resultado da divis˜ao do
primeiro valor lido pelo segundo valor lido. (utilizar a estrutura while).*/


int main (){
	
	int n1, n2=0;
	
	printf("Digite o primeiro valor: ");
	scanf("%d", &n1 );
	
	while ( n2 == 0 ){
		
		printf("Digite o segundo valor: ");
		scanf("%d", &n2);
		
	
		
	}
	
	printf("Os valores inseridos sao: %d   %d", n1, n2);
	
	
	return 0;
	
	
}

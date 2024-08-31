#include <stdio.h>

/*Acrescentar uma mensagem de ’VALOR INVALIDO’ no exerc´icio ´ 1 caso o segundo valor informado seja ZERO.*/


int main (){
	
	int n1, n2=0;
	
	printf("Digite o primeiro valor: ");
	scanf("%d", &n1 );
	
	while ( n2 == 0 ){
		
		printf("Digite o segundo valor: ");
		scanf("%d", &n2);
		
		if(n2 == 0){
			printf("\nO VALOR INVALIDO!!\n");
		}
		
		
	}
	
	printf("Os valores inseridos sao: %d   %d", n1, n2);
	
	
	return 0;
	
	
}

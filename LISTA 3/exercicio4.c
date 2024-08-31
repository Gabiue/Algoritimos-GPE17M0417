#include <stdio.h>

/*Acrescentar uma mensagem de ’VALOR INVALIDO’ no exerc´icio ´ 2 caso o segundo valor informado seja ZERO.*/

int main (){
	
	int n1, n2=0;
	
	printf("Digite o primeiro valor: ");
	scanf("%d", &n1 );
	
	
	do{
		
		printf("Digite o segundo valor: ");
		scanf("%d", &n2);
		
		if (n2 == 0) {
            printf("\nO VALOR INVALIDO !!\n");
        }
		
	}while(n2 == 0);
	
	
	




	printf("Os valores inseridos sao: %d   %d", n1, n2);
	
	
	return 0;
	
	
	
}

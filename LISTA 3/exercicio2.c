#include <stdio.h>

/*Reescreva o exerc´icio anterior utilizando a estrutura do...while.*/

int main (){
	
	int n1, n2=0;
	
	printf("Digite o primeiro valor: ");
	scanf("%d", &n1 );
	
	
	do{
		
		printf("Digite o segundo valor: ");
		scanf("%d", &n2);
		
	
		
	}while(n2 == 0);
	
	
	




	printf("Os valores inseridos sao: %d   %d", n1, n2);
	
	
	return 0;
	
	
	
}

#include <stdio.h>

/*Fa¸ca um programa que leia um valor inteiro e crie um triˆangulo de *’s ao contr´ario. Por exemplo:
Para n = 5:
*****
****
***
**
*
*/

int main (){
	int i, j, N;
	
	printf("Digite o valor que deseja de estrelas: ");
	scanf("%d", &N);
	
	for(i = N; i > 0 ; i--){
		for( j = i; j > 0; j--){
			printf("*");
		}
		printf("\n");
	
	}
	return 0; 
	
	
}

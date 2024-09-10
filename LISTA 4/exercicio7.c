#include <stdio.h>

/*. Fa¸ca uma fun¸c˜ao que recebe um valor inteiro e verifica se o valor ´e par. A fun¸c˜ao deve retornar 1 se o n´umero
for par e 0 se for ´impar.*/

int P_I(int num1){
	if (num1 % 2 == 0){
		return 1;
	}
	else{
		return 0; 
	}
}

int main(){
	
	int a, i ;
	
	printf("Digite um numero: ");
	scanf("%d", &a);
	
	
	i= P_I(a);
	
	if(i == 1){
		printf("A funcao retornou 1, Seu numero eh par!!\n");
	}
	else{
		printf("A funcao retornou 0, Seu numero eh impar!!\n");
		
	}
	
	return 0; 
	
	
	
}

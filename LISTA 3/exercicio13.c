#include <stdio.h>

/*Ler um valor inteiro (aceitar somente valores entre 1 e 10) e escrever a tabuada de 1 a 10 do valor lido.*/

int main (){
	int a, b;
	
	do{
		printf("Insira o valor da tabuada que deseja saber(1 a 10): ");
		scanf("%d", &a);
	}while ( a <= 0 || a > 10);
	
	
	printf("Tabuada do %d\n\n", a);
	
	for(b = 1; b <= 10; b++){
		printf("%d X %d = %d\n", a, b , a*b);
		
	}
	return 0; 
}

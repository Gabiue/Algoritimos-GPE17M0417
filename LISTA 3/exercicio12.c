#include <stdio.h>

/*Escreva um algoritmo que calcule e imprima a tabuada do 8 (1 a 10).*/

int main (){
	int a=8, b;
	
	printf("Tabuada do 8\n\n");
	
	for(b = 1; b <= 10; b++){
		printf("%d X %d = %d\n", a, b , a*b);
		
	}
	return 0; 
}

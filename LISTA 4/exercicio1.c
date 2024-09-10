#include <stdio.h>

/*Escreva uma fun¸c˜ao que receba dois n´umeros inteiros retorne o menor n´umero*/

float menor (float num1, float num2){
	if(num1<num2){
		return num1;
	}
	
	else 
	return num2;
}

int main (){
	float x, y ,m;
	
	printf("Insira um numero: ");
	scanf("%f", &x);
	
	printf("Insira um numero: ");
	scanf("%f", &y);
	
	m = menor(x,y);
	
	printf("O menor numero: %.1f", m );
	
	return 0; 
}

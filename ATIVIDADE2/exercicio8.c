#include <stdio.h>
#include <stdlib.h>


int main (){
	float C, F; 
	
	printf("Conversor de Fahrenheit em Celsius\n");
	
	printf("Insira a temperatura em Fahrenheit: ");
	scanf("%f", &F);
	
	C = (float) (F - 32) / 9 ;
	C = (float) C * 5;
	
	printf("A temperatura em Celsius e: %.2fC", C);
	
}

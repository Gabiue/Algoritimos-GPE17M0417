#include <stdio.h>
#include <stdlib.h>

int main(){
	float salario, percentual, aumento, salario2;
	
	printf("Calculadora de salario.\n");
	
	printf("Insira o Salario atual: ");
	scanf("%f", &salario );
	
	printf("Insira o percentual a ser adcionado: ");
	scanf("%f", &percentual);
	
	aumento =(float) salario * percentual / 100; 
	salario2= salario + aumento;
	
	printf("O salario atual e: %.2f reais \n", salario2);
	
	system("pause");
	
	return 0 ; 
	
	
	
	
	
	
	
	
	
}

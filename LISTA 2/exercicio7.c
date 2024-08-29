#include <stdio.h>

/*Ler dois valores (considere que n˜ao ser˜ao lidos valores iguais) e escrevˆ e-los em ordem crescente.*/



int main (){
	
	int n1, n2;
	
	printf("Insira o primeiro valor: ");
	scanf("%d", &n1);
	
	printf("Insira o segundo valor valor: ");
	scanf("%d", &n2);
	
	
	if(n1>n2){
		
		printf("%d  %d", n2, n1);
		
	}else{
		printf("%d  %d", n1, n2);
	}
	
	return 0; 
}

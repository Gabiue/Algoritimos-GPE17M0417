#include <stdio.h>

/*Ler dois valores (considere que n˜ao ser˜ao lidos valores iguais) e escrever o maior deles*/



int main (){
	
	int n1, n2;
	
	printf("Insira o primeiro valor: ");
	scanf("%d", &n1);
	
	printf("Insira o segundo valor valor: ");
	scanf("%d", &n2);
	
	
	if(n1>n2){
		
		printf("%d e maior que %d", n1, n2);
		
	}else{
		printf("%d e maior que %d", n2, n1);
	}
	
	return 0; 
}

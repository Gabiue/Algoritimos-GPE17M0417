#include <stdio.h>

int main (){
	
	int numero;
	
	printf("Digite um valor: ");
	scanf("%d", &numero);
	
	if(numero >= 0){
		printf("O valor e positivo!\n");
		
	}
	else{
		printf("O valor nao e positivo\n");
	}
	
	return 0;
}

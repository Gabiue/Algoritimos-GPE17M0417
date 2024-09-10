#include <stdio.h>
/*Fa¸ca uma fun¸c˜ao que recebe um valor inteiro e verifica se o valor ´e positivo, negativo ou zero. A fun¸c˜ao deve
retornar 1 para valores positivos, -1 para negativos e 0 para o valor 0.*/

int verificar_int(int num1){
	if (num1 > 0){
		return 1;
	}
	else if (num1 < 0){
		return -1;
	}
	else if (num1 == 0){
		return 0;
	}
}


int main (){
	
	int a,i;
	
	printf("Insira um numero: ");
	scanf("%d", &a);
	
	i = verificar_int(a);
	
	if(i == 1){
		printf("A funcao retornou 1, seu numero inteiro eh positivo\n");
	}
	else if (i == -1){
		printf("A funcao retornou -1, seu numero inteiro eh negativo\n");
	}
	else if (i == 0){
		printf("A funcao retornou 0, seu numero inteiro eh zero\n");
	}
	return 0;
}



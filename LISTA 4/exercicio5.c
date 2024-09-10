#include <stdio.h>
#include <math.h>

/*Escreva um programa que leia 5 n´umeros inteiros positivos (utilize uma fun¸c˜ao que leia esse n´umero e verifique
se ele ´e positivo). Para cada n´umero informado escrever a soma de seus divisores (exceto ele mesmo). Utilize
a fun¸c˜ao SomaDivisores para obter a soma:
• Nome: SomaDivisores
• Descri¸c˜ao: Calcula a soma dos divisores do n´umero informado (exceto ele mesmo).
• Entrada: Um n´umero inteiro e positivo.
• Sa´ida: A soma dos divisores.
• Exemplo: Para o valor 8: 1 + 2 + 4 = 7*/

int positivo(int num1){
	
	while(num1<0){
		printf("Numero inserido INVALIDO, digite um numero inteiro positivo!!: ");
		scanf("%d", &num1);
	}
	return num1;
	
	
}

	void divisores (num1){
		printf("Os divisores: ");
	int i, somadiv = 0;
	for (i = 1; i < num1; i++){
		if(num1 % i == 0){
			printf("%d  ", i);
			somadiv = somadiv + i;
		}
	}printf("\nA soma dos divisores sao: %d\n\n", somadiv);
	
}







int main (){
	int a, i;
	
	for(i=0; i<=5; i++){
		
	printf("Insira um numero inteiro positivo: ");
	scanf("%d", &a );
	a = positivo(a);
	divisores(a);
		
	}

	
	
	
	
}

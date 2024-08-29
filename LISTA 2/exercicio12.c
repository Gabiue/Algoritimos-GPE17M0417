#include <stdio.h>

/*Fa¸ ca um algoritmo para ler: n´ umero da conta do cliente, saldo, d´ ebito e cr´ edito. Ap´os, calcular e escrever o
 saldo atual (saldo atual = saldo- d´ebito + cr´ edito). Tamb´ em testar se saldo atual for maior ou igual a zero
 escrever a mensagem ’Saldo Positivo’, sen˜ao escrever a mensagem ’Saldo Negativo’*/
 
int main (){
	
	int numero_conta;
	float saldo, debito, credito, saldo_total;
	
	printf("Insira o numero da conta: ");
	scanf("%d", &numero_conta);
	
	printf("Insira seu saldo: ");
	scanf("%f", &saldo);
	
	printf("Insira o valor do seu debito: ");
	scanf("%f", &debito);
	
	printf("Insira o valor do seu credito: ");
	scanf("%f", &credito);
	
	saldo_total = saldo - debito + credito;
	
	printf("Seu saldo e: %.2f\n", saldo_total);
	
	if (saldo_total < 0){
		printf("Seu saldo e negativo.\n");
		
	}
	
	else{
		printf("Seu saldo e positivo.\n");
	}
	
	
	
	return 0; 
}

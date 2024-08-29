#include <stdio.h>

/* Fa¸ ca um algoritmo para ler: quantidade atual em estoque, quantidade m´axima em estoque e quantidade
 m´ inima em estoque de um produto. Calcular e escrever a quantidade m´ edia ((quantidade m´ edia = quantidade
 m´axima + quantidade m´ inima)/2). Se a quantidade em estoque for maior ou igual a quantidade m´ edia escrever
 a mensagem ’N˜ao efetuar compra’, sen˜ao escrever a mensagem ’Efetuar compra’.*/
 
int main (){
	int Qa, Qmax, Qmin, Qmed;
	
	printf("Digite a quantidade atual em estoque: ");
	scanf("%d", &Qa);
	
	printf("Digite a quantidade maxima em estoque: ");
	scanf("%d", &Qmax);
	
	printf("Digite a quantidade minima em estoque: ");
	scanf("%d", &Qmin);
	
	Qmed = (Qmax + Qmin)/2;
	
	printf("A quantidade media no estoque e: %d\n", Qmed);
	
	if ( Qa >= Qmed){
		
		printf("Nao efetuar compra!\n");
		
		
	}
	else{
		printf("Efetuar compra!!\n");
	}
	
	return 0; 
}

#include <stdio.h>

/*  Ler o ano atual e o ano de nascimento de uma pessoa. Escrever uma mensagem que diga se ela poder´a ou
 n˜ao votar este ano (n˜ao ´e necess´ario considerar o mˆes em que a pessoa nasceu).*/
 
 int main(){
 	
 	int year, nascimento;
 	
 	printf("Insira o ano atual: ");
 	scanf("%d", &year);
 	
 	printf("Insira o ano do seu nascimento: ");
 	scanf("%d", &nascimento);
 	
 	if((year - nascimento) >= 16){
 		
 		printf("Voce podera votar!!");
 		
	 }
	 else{
	 	printf("Voce nao podera votar!!");
	 }
 	
 	return 0; 
 }

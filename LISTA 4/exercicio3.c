#include <stdio.h>

/*Escreva uma fun¸c˜ao potencia(base, expoente) que, quando chamada, retorna baseexpoente. Por exemplo,
potencia(3, 4) deve retornar 81. Assuma que expoente ´e um inteiro maior ou igual a 1.*/

int potencia( int base, int expoente){
	int i, potencia = 1; 
	
	for(i = 0; i< expoente; i++){
		potencia *= base;
			
	}
	return potencia;
}

int main (){
	
	int base, expoente;
	
	printf("Insira o valor da Base: ");
	scanf("%d" ,&base);
	
	printf("Insira o valor do expoente: ");
	scanf("%d", &expoente);
	
	printf("O valor da sua potencia de %d^%d eh: %d", base, expoente, potencia(base, expoente));
	
	return 0;
	
	
}

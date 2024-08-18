#include <stdio.h>
#include <stdlib.h>

int main(){
	int base, altura, area;
	
	printf("Vamos calcular a area de um retangulo.\n");
	
	printf("Insira o valor da base:\n");
	scanf("%d", &base);
	
	printf("Insira o valor da altura:\n");
	scanf("%d", &altura);
	
	area = base * altura;
	
	printf("O valor da area e: %d\n", area);
	
	system("pause");
	
	return 0;
	
	
	
}

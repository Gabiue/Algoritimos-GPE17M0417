#include <stdio.h>
#include <stdlib.h>

int main (){
	int carro, fabrica, imposto, distribuidor;
	
	printf("Calculadora de valor do carro.\n");
	
	printf("Insira o valor de Fabrica do carro: ");
	scanf("%d", &fabrica);
	
	imposto = fabrica * 0.45;
	distribuidor = fabrica * 0.28;
	carro = fabrica + imposto + distribuidor;
	
	printf("O valor do carro no mercado: %d\n", carro);
	
	system("pause");
	
	return 0;
}

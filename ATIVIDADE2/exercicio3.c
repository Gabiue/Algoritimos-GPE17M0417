#include <stdio.h>
#include <stdlib.h>

int main (){
	
	int anos, meses, dias, resultado;
	
	
	printf("Conversor de idade em dias\n");
	
	printf("Escreva sua idade(anos):");
	scanf("%d", &anos);
	
	printf("Escreva sua idade(meses):");
	scanf("%d", &meses);
	
	printf("Escreva sua idade(dias):");
	scanf("%d", &dias);
	
	anos = anos * 365;
	meses= meses * 30;
	resultado = anos + meses + dias;
	
	printf("Sua idade em dias e: %d dias \n",resultado );
	
	system("pause");
	
	return 0; 
	
	
}

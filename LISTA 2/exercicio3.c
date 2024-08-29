#include <stdio.h>


int main(){
	
	int apple;
	float valor;
	
	printf("Quantas macas voce comprou: ");
	scanf("%d", &apple);
	
	if( apple >= 12){
		
		valor = (float) apple * 1.00;
		printf("O valor das macas foi: %.2f", valor);
	}
	else{
		valor = (float) apple * 1.30;
		printf("O valor das macas foi: %.2f", valor);
	}
	return 0;
}

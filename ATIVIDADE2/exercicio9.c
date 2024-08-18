#include <stdio.h>
#include <stdlib.h>

int main(){
	float N1, N2, N3, MF;
	
	printf("Calculadora de notas\n");
	
	printf("Insira sua primeira nota(coloque os valores decimais): ");
	scanf("%f", &N1);
	
	printf("Insira sua segunda nota(coloque os valores decimais): ");
	scanf("%f", &N2);
	
	printf("Insira sua terceira nota(coloque os valores decimais): ");
	scanf("%f", &N3);
	
	MF = (float) (N1 * 2) + (N2 * 3) + (N3 * 5);
	MF = (float) MF / 10 ;
	
	printf("Sua nota final e: %.2f\n", MF);
	
	system("pause");
	
	return 0; 
	
	
	
	
}

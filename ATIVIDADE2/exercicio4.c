#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int total, brancos, nulos, validos; 
	float pbrancos, pnulos, pvalidos;
	
	printf("Percentual da Eleicao\n");
	
	printf("Insira o valor total de eleitores do municipio: ");
	scanf("%d", &total);
	
	printf("Insira a quantidade que votaram em branco: ");
	scanf("%d", &brancos);
	
	printf("Insira a quantidade que votaram nulo: ");
	scanf("%d", &nulos);
	
	printf("Insira a quantidade em que os votos foram validos: ");
	scanf("%d", &validos);
	 
	pbrancos = (float) brancos / total  * 100;
	pnulos = (float) nulos / total  * 100;
	pvalidos = (float)  validos / total  * 100;
	
	printf("Numeros de eleitores: %d \n", total );
	
	printf("Percentual de quem votou em branco: %.2f%% \n", pbrancos);
	printf("Percentual de quem votou nulo: %.2f%% \n", pnulos);
	printf("Percentual de quem votou validamente : %.2f%% \n", pvalidos);
	
	system("pause");
	
	return 0;
	
	
	
	
	
}

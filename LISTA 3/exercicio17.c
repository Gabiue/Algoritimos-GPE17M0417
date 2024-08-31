#include <stdio.h>

/*O mesmo exerc´icio anterior, mas agora n˜ao ser´a informado o n´umero de mercadorias em estoque. Ent˜ao o
funcionamento dever´a ser da seguinte forma: ler o valor da mercadoria e perguntar ‘MAIS MERCADORIAS
(S/N)?’. Ao final, imprimir o valor total em estoque e a m´edia de valor das mercadorias em estoque.*/

int main (){
	
	int quant_estoque=0 , i;
	float value_estoque, total=0;
	char SN;
	
	do{
		printf("Insira o valor de cada mercadoria: ");
		scanf("%f", &value_estoque);
		
		total = value_estoque + total;
		quant_estoque++;
		
		printf("MAIS MERCADORIAS(S/N): ");
		scanf(" %c", &SN);
	}while ( SN == 'S' || SN == 's');
		
		
		
	
	printf("O valor total em estoque: %.2f\n", total);
	
	printf("A media de valor das mercadorias: %.2f\n", (float)total/quant_estoque);
	
	
	
	
}

		

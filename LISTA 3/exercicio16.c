#include <stdio.h>

/*Uma loja est´a levantando o valor total de todas as mercadorias em estoque. Escreva um algoritmo que
permita a entrada das seguintes informa¸c˜oes: a) o n´umero total de mercadorias no estoque; b) o valor de cada
mercadoria. Ao final imprimir o valor total em estoque e a m´edia de valor das mercadorias.*/

int main (){
	
	int quant_estoque, i;
	float value_estoque, total=0;
	printf("Insira a quantidade total de mercadorias: ");
	scanf("%d", &quant_estoque);
	
	for(i = quant_estoque; i>= 1; i--){
		printf("Insira o valor de cada mercadoria: ");
		scanf("%f", &value_estoque);
		
		total = value_estoque + total;
		
	}
	printf("O valor total em estoque: %.2f\n", total);
	
	printf("A media de valor das mercadorias: %.2f\n", (float)total/quant_estoque);
	
	
	
	
}

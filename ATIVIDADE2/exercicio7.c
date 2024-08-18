#include <stdio.h>
#include <stdlib.h>

int main (){
	
	float salario, comissao, vendas, total;
	int carros;
	
	printf("Calculadora de salario\n");
	
	printf("Insira seu salario fixo(em forma decimal): ");
	scanf("%f", &salario);
	
	printf("Insira sua comissao por cada carro vendido(em forma decimal):");
	scanf("%f", &comissao);
	
	printf("Insira quantos carros voce vendeu(em forma inteira): ");
	scanf("%d", &carros);
	
	printf("Insira o valor total de vendas(em forma decimal): ");
	scanf("%f", &vendas);
	
	comissao = comissao * carros;
	vendas = (float) vendas * 0.05;
	total = salario + vendas + comissao;
	
	printf("Seu salario total foi de: %f\n", total);
	
	system("pause");
	
	return 0;
	
	
	
	
}

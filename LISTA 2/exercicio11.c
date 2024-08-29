#include <stdio.h>
/*Ler o sal´ario fixo e o valor das vendas efetuadas pelo vendedor de uma empresa. Sabendo-se que ele recebe
 uma comiss˜ao de 3% sobre o total das vendas at´ e R$1.500,00 mais 5% sobre o que ultrapassar este valor,
 calcular e escrever o seu sal´ario total.*/
 
 int main(){
 	
 	float salarioF, valor_vendas, comissao, capital;
 	
 	printf("Insira seu salario fixo: ");
 	scanf("%f", &salarioF);
 	
 	printf("Valor de vendas: ");
 	scanf("%f", &valor_vendas);                  
 	
 	if(valor_vendas > 1500){
 		
 		comissao = valor_vendas - 1500;
 		
 		comissao = (1500 * 0.03) + (comissao * 0.05);
 		
 	
 	
 		
	 }
	 else {
	 	
	 	comissao = valor_vendas * 0.03;
	 	
	 	
	 }
 	
 	capital = salarioF + comissao;
 	
 	printf("O seu salario total e: %.2f", capital);
 	
 	return 0; 
 	
 }

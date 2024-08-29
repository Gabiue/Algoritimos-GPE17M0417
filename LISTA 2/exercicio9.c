#include <stdio.h>

/*  A jornada de trabalho semanal de um funcion´ario ´ e de 40 horas. O funcion´ario que trabalhar mais de 40
 horas receber´a hora extra, cujo c´alculo ´ e o valor da hora regular com um acr´ escimo de 50%. Escreva um
 algoritmo que leia o n´umero de horas trabalhadas em um mˆ es, o sal´ario por hora e escreva o sal´ario total do
 funcion´ario, que dever´a ser acrescido das horas extras, caso tenham sido trabalhadas (considere que o mˆ es
 possua 4 semanas exatas).*/
 
int main (){
	int WT, WTs;
	float SH, ST, WTmoney; 
	
	printf("Insira a quantidadade de horas trabalhadas: ");
	scanf("%d", &WT);
	
	printf("Insira o salario por hora: ");
	scanf("%f", &SH);
	
	if(WT>160){
		
		WTs = WT - 160;
		
		WTmoney = WTs * SH * 1.5; 
		
		ST = (float) 160 * SH + WTmoney;
		
		printf("Horas trabalhadas: %d\n", WTs);
		printf("Salario das horas trabalhadas: %.1f\n", WTmoney);
		
	
	}
	else {
		ST = (float) SH * WT;
		
	}
	printf("O salario total foi de: %.2f reais", ST);
	
	return 0; 
}

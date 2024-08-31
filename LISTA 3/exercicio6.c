#include <stdio.h>

/*Acrescente uma mensagem ’NOVO CALCULO (S/N)?’ ao final do exerc´icio ´ 5. Se for respondido ’S’ deve 
retornar e executar um novo c´alculo, caso contr´ario dever´a encerrar o algoritmo.*/

int main(){
	
	char SN;
	int a1, a2;
	float med;
	
	do{
		
		printf("Calculadora de notas.\n");
		
		
		do {
		printf("Insira sua a1 (0 a 10): ");
	scanf("%d",&a1);
	
	printf("Insira sua a2 (0 a 10): ");
	scanf("%d",&a2);
	
		if (a1 < 0 != a1 >10 || a2 < 0 != a2 > 10 ){
			printf("\nNOTA INVALIDA!!\n");
		}
		
	}while (a1 < 0 != a1 >10 || a2 < 0 != a2 > 10 );
	
	med = (float) (a1 + a2) / 2;
	
	printf("A sua media eh: %.2f\n\n", med);
	
	printf("Deseja executar um novo calculo? (S/N): ");
	scanf(" %c", &SN);
	
	}while (SN == 'S' || SN == 's' );
	
	
	
	
	return 0; 
	
	
	
}

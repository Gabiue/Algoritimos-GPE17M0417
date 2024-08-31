#include <stdio.h>

/*Escreva um algoritmo para ler as notas da 1a. e 2a. avalia¸c˜oes de um aluno, calcule e imprima a m´edia
(simples) desse aluno. S´o devem ser aceitos valores v´alidos durante a leitura (0 a 10) para cada nota.*/

int main(){
	
	int a1, a2;
	float med;
	
	
	
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
	
	printf("A sua media eh: %.2f", med);
	
	return 0; 
	
	
	
}

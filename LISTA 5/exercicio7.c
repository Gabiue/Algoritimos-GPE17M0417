#include <stdio.h>

/*Fa¸ca um algoritmo para ler e armazenar em um vetor a temperatura m´edia de todos os dias do ano. Calcular
e escrever:
(a) Menor temperatura do ano
(b) Maior temperatura do ano
(c) Temperatura m´edia anual
(d) O n´umero de dias no ano em que a temperatura foi inferior a m´edia anual*/

int main (){
	float temp_diaria[365], less=0, greater=0, med=0;
	int i, days=0;
	
	for(i= 0; i<365; i++){
		printf("Digite a temperatura do dia %d", i+1);
		scanf("%f", temp_diaria[i]);
		med+= temp_diaria[i];
	}
	for(i=1; i <365; i++){
        if (temp_diaria[i] > greater){
            greater = temp_diaria[i];
        }
	}	
    for(i=1; i <365; i++){
        if (temp_diaria[i] < less){
            less = temp_diaria[i];
        }
	}
	
	med/= 365;
	
	for(i=1; i <365; i++){
		if (temp_diaria[i] > med){
			days++;
		}
	}
	
	printf("A temperatura mais alta foi: %.2f\n", greater);
	printf("A temperatura mais baixa foi: %.2f\n", less);
	printf("A media de temperatura foi: %.2f\n", med);
	printf("O numero de dias com a temperatura acima da media foi: %.2f\n", days);
		  
	
	return 0;
	
	
	
}

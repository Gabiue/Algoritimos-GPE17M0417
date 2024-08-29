#include <stdio.h>

//Ler as notas da 1ª. e 2ª. avalia¸c˜oes de um aluno. Calcular a m´ edia aritm´ etica simples e escrever uma
//mensagem que diga se o aluno foi ou n˜ao aprovado (considerar que nota igual ou maior que 7 o aluno ´e
//aprovado). Escrever tamb´em a m´edia calculada

int main(){
	
	float n1, n2, nf;
	
	printf("Insira a nota da sua primeira avaliacao: ");
	scanf("%f" ,&n1 );
	
	printf("Insira a nota da sua segunda avaliacao: ");
	scanf("%f", &n2 );
	
	nf = (float) (n1+n2)/2; 
	
	if(nf >= 7.0){
		printf("Voce foi aprovado!!\n");
		printf("Media: %.2f",nf);
	}
	else{
		printf("Voce foi reprovado ;-;\n");
		printf("Media: %.2f",nf);
	}
	
	
	return 0; 
	
}

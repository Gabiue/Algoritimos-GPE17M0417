#include <stdio.h>

/*Escreva uma fun¸c˜ao que receba 3 notas de um aluno e uma letra. Se a letra for A a fun¸c˜ao retorna a m´edia
aritm´etica das notas do aluno, se for P, a sua m´edia ponderada (pesos: 5, 3 e 2) e se for H, a sua m´edia
harmˆonica.*/

float media (float num1, float num2, float num3, char letter ){
	float med=0; 
	if(letter == 'A' || letter == 'a'){
		
		med = (num1 + num2 + num3)/3;
		
	}
	else if(letter == 'P' || letter == 'p'){
		
		med = ((num1*5) + (num2*3) +(num3 *2))/10;
		
	}
	else if (letter == 'H' || letter == 'h'){
		med = 3/(1/num1 + 1/num2 + 1/num3);
	}
	
	
	return med;	
}

int main (){
	
	float a, b, c;
	char letter; 
	
	printf("Insira a primeira nota: ");
	scanf("%f",&a);
	
	printf("Insira a primeira nota: ");
	scanf("%f",&b);
	
	printf("Insira a primeira nota: ");
	scanf("%f",&c);
	
	printf("Decida a media que ira usar\nA- Aritimetica\nP- Ponderada\nH-Harmonica\n");
	scanf(" %c",&letter );
	
	printf("A media eh: %.2f", media(a,b,c,letter));
	
	
}

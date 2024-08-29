#include <stdio.h>

/*Crie um algoritmo para, tendo como dados de entrada o nome, a altura e o sexo (M ou F) de uma pessoa,
 calcule e mostre seu peso ideal, utilizando as seguintes f´ormulas:
 • para sexo masculino: peso ideal = (72,7 ×altura) - 58
 • para sexo feminino: peso ideal = (62,1 × altura) - 44,7*/
 
 int main (){
 	char name [10];
 	char gender;
 	float h, w;
 	
 	printf("Digite seu genero(M- masculino, F- feminino): ");
 	scanf("%c",&gender );
 	
 	printf("Digite seu nome: ");
 	scanf("%s",&name );
 	fflush(stdin);
 	 
 	printf("Digite sua altura: ");
 	scanf("%f",&h );
 	
 	if( gender == 'M' ){
	 
 		
 		w = (72.7 * h) - 58;
 		
	 }
 	 else{
 	 	
 	 	w = (62.1 * h) - 44.7;
 	 	
	  }
 	
 	
	printf("%s, sua altura e %.2f metros e seu genero e %c.\n", name, h, gender);
 	
 	printf("O peso ideal e: %.2f", w);
 	
 	
 	return 0; 
 	
 }

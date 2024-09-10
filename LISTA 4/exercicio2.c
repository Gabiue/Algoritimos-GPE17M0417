#include <stdio.h>
#include <math.h>

/*Escreva uma fun¸c˜ao que calcule e retorne a distˆancia euclidiana entre dois pontos (x1, y1) e (x2, y2). Todos
os n´umeros e valores de retorno devem ser do tipo float. */
/*v((x1 – x2)² + (y1 – y2)²).* <-- essa e a formula*/

float f_euclidiana(float x1, float y1, float x2, float y2){
	
	 float dif_x = x1 - x2;
	 float dif_y = y1 - y2;
	 
	 float quad_x = dif_x * dif_x;
	 float quad_y = dif_y * dif_y;
	 
	 float distancia = sqrt(quad_x + quad_y);
	 
	 return distancia;
	
	
}

int main(){
	
	float x1, x2, y1, y2;
	
	printf("Calculadora de distancia euclidiana!!\n");
	
	printf("Insira o valor de x1: ");
	scanf("%f", &x1);
	
	printf("Insira o valor de y1: ");
	scanf("%f", &y1);
	
	printf("Insira o valor de x2: ");
	scanf("%f", &x2);
	
	printf("Insira o valor de y2: ");
	scanf("%f", &y2);
	
	printf("A distancia e: %.2f\n", f_euclidiana(x1, y1, x2, y2));
	
	return 0;
}

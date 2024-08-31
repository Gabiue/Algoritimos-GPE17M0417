#include <stdio.h>

/*Fa¸ca um algoritmo que calcule e escreva a m´edia aritm´etica dos n´umeros inteiros entre 15 (inclusive) e 100
(inclusive).*/

int main (){
	int a=0 , b= 0,  i;
	
	printf("Media aritimetica entre 15 e 100\n");
	
	for (i= 15; i<=100; i++){
		
		a = a + i;
		b++;
	}
	printf("A media eh: %.2f: ", (float) a/b);
	return 0 ;
}


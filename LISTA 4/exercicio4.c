#include <stdio.h>

/*. Escreva um programa em C que leia 5 valores inteiros e imprima para cada um o seu correspondente valor
absoluto. Para obter o valor absoluto do n´umero implemente uma fun¸c˜ao chamada Absoluto.*/

int absolute(int num1){
	if(num1 >= 0){
		return num1;
	}
	else if(num1 < 0 ){
		return num1 * -1;
	}
}

int main(){
	
	int a, b, c, d, e;
	
	printf("Insira um numero: ");
	scanf("%d", &a);
	
	printf("Insira um numero: ");
	scanf("%d", &b);
	
	printf("Insira um numero: ");
	scanf("%d", &c);
	
	printf("Insira um numero: ");
	scanf("%d", &d);
	
	printf("Insira um numero: ");
	scanf("%d", &e);
	
	printf("O valor absoluto dos numeros que voce digitou sao respectivamente:\n%d\n%d\n%d\n%d\n%d\n", absolute(a),absolute(b), absolute(c), absolute(d), absolute(e));
	
	return 0; 
	
	
}

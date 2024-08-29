#include <stdio.h>

int main(){
	int numero;
	
	printf("Digite um valor: ");
	scanf("%d", &numero);
	
	if(numero > 10){
		printf("E MAIOR QUE 10!\n");
		
	}
	else{
		printf("NAO E MAIOR QUE 10!\n");
	}
	
	return 0;
	
}

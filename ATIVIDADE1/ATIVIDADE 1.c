#include <stdio.h>
#include <stdlib.h>

int main(){
	int a = 10 ;
	int b = -8;
	
	printf("Os valores antes da troca:\n a = %d\n b = %d\n", a, b);
	
	a = a + b;
	b = a - b;
	a = a -b;
	
	printf("Depois da troca:\n a = %d\n b = %d\n", a, b);
	
	system("pause");
	
	return 0; 
}


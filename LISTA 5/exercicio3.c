#include <stdio.h>

/*O mesmo exerc´icio anterior, mas agora deve escrever o menor elemento do vetor e a respectiva posi¸c˜ao dele nesse veto*/

int main (){
    float Q[20];
    int i, position;
    float less;
   

    for(i=0; i <20; i++){

        do{
            printf("Insira um valor positivo: ");
            scanf("%f", &Q[i]);
            if (Q[i]<0){
                printf("Numero invalido, digite um numero positivo\n");
            }
        }while(Q[i]<= 0 );

    }
    less = Q[0];
    position = 0;

    for(i=1; i <20; i++){
        if (Q[i] < less){
            less = Q[i];
            position = i;
        }
    }

    printf("O menor numero eh: %.2f e sua posicao eh: %d", less, position+1);

    return 0;
    



}

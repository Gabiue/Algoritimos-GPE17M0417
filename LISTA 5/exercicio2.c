#include <stdio.h>

/*Ler um vetor Q de 20 posições (aceitar somente números positivos). Escreva o valor do maior elemento de Q e a respectiva posição que ele ocupa no vetor.*/

int main (){
    float Q[20];
    int i, position;
    float greater;
   

    for(i=0; i <20; i++){

        do{
            printf("Insira um valor positivo: ");
            scanf("%f", &Q[i]);
            if (Q[i]<0){
                printf("Numero invalido, digite um numero positivo\n");
            }
        }while(Q[i]<= 0 );

    }
    greater = Q[0];
    position = 0;

    for(i=1; i <20; i++){
        if (Q[i] > greater){
            greater = Q[i];
            position = i;
        }
    }

    printf("O maior numero eh: %.2f e sua posicao eh: %d", greater, position);

    return 0;
    



}

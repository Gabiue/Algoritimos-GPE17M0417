#include <stdio.h>

void frac(float num, int* inteiro, float* frac) {
    *inteiro = (int)num;  // A parte inteira é obtida convertendo o número real para int
    *frac = num - *inteiro;  // A parte fracionária é obtida subtraindo a parte inteira do número real
}

int main() {
    float num, parte_fracionaria;
    int parte_inteira;

    printf("Digite um numero real: ");
    scanf("%f", &num);

    frac(num, &parte_inteira, &parte_fracionaria);

    printf("Parte inteira: %d\n", parte_inteira);
    printf("Parte fracionaria: %.4f\n", parte_fracionaria);

    return 0;
}
 
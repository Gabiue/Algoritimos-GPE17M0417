#include <stdio.h>

int main() {
    int inteiro = 10;
    float real = 3.14;
    char caractere = 'A';

    int *p_inteiro;
    float *p_real;
    char *p_caractere;

    p_inteiro = &inteiro;
    p_real = &real;
    p_caractere = &caractere;

    printf("Antes da modificacao:\n");
    printf("Inteiro: %d, Real: %.2f, Caractere: %c\n", inteiro, real, caractere);

    *p_inteiro = 20;
    *p_real = 6.28;
    *p_caractere = 'B';

    printf("\nApos a modificacao:\n");
    printf("Inteiro: %d, Real: %.2f, Caractere: %c\n", inteiro, real, caractere);

    return 0;
}

#include <stdio.h>

void trocar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a, b;

    printf("Digite o valor de A: ");
    scanf("%d", &a);
    printf("Digite o valor de B: ");
    scanf("%d", &b);

    printf("\nAntes da troca: A = %d, B = %d\n", a, b);

    trocar(&a, &b);

    printf("Apos a troca: A = %d, B = %d\n", a, b);

    return 0;
}

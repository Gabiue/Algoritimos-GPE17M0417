#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int len_com_strlen, len_sem_strlen, i;

    printf("Digite uma string: ");
    scanf("%99[^\n]", str);

    len_com_strlen = strlen(str);

    len_sem_strlen = 0;
    while (str[len_sem_strlen] != '\0') {
        len_sem_strlen++;
    }

    printf("Tamanho calculado com strlen: %d\n", len_com_strlen);
    printf("Tamanho calculado sem strlen: %d\n", len_sem_strlen);

    if (len_com_strlen == len_sem_strlen) {
        printf("Os dois resultados sao iguais.\n");
    } else {
        printf("Os dois resultados sao diferentes.\n");
    }

    return 0;
}
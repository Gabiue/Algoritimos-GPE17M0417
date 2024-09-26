#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int len, i;

    printf("Digite uma string: ");
    scanf("%99[^\n]", str);

    len = strlen(str);

    printf("String invertida: ");
    for(i = len - 1; i >= 0; i--) {
        putchar(str[i]);
    }
    printf("\n");

    return 0;
}
#include <stdio.h>

int verifica_substring(char *str1, char *str2) {
    char *p1, *p2, *p_inicial;

    if (*str2 == '\0') {
        return 1; // Se a string 2 for vazia, ela é considerada uma substring
    }

    for (p1 = str1; *p1 != '\0'; p1++) {
        if (*p1 == *str2) {
            p_inicial = p1;
            p2 = str2;
            while (*p1 == *p2 && *p2 != '\0') {
                p1++;
                p2++;
            }
            if (*p2 == '\0') {
                return 1; // Substring encontrada
            }
            p1 = p_inicial; // Volta o ponteiro para continuar buscando
        }
    }
    return 0; // Substring não encontrada
}

int main() {
    char str1[100], str2[100];

    printf("Digite a string principal: ");
    gets(str1);
    printf("Digite a substring: ");
    gets(str2);

    if (verifica_substring(str1, str2)) {
        printf("A substring foi encontrada.\n");
    } else {
        printf("A substring nao foi encontrada.\n");
    }

    return 0;
}

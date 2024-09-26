#include <stdio.h>
#include <string.h>

int main() {
    char str[200], str_proc[200];
    int i, j = 0, len;

    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);

    len = strlen(str);
    if(str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }

    for(i = 0; i < len; i++) {
        char c = str[i];
        if((c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
            if(c >= 'A' && c <= 'Z') {
                c = c + ('a' - 'A');
            }
            str_proc[j++] = c;
        }
    }
    str_proc[j] = '\0';

    int palindromo = 1;
    for(i = 0; i < j / 2; i++) {
        if(str_proc[i] != str_proc[j - i - 1]) {
            palindromo = 0;
            break;
        }
    }

    if(palindromo) {
        printf("A string e um palindromo.\n");
    } else {
        printf("A string nao e um palindromo.\n");
    }

    return 0;
}

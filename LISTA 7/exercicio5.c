#include <stdio.h>

int main() {
    float matriz[3][3];
    int i, j;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Endereco do elemento matriz[%d][%d]: %p\n", i, j, (void*)&matriz[i][j]);
        }
    }

    return 0;
}
 
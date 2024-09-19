#include <stdio.h>

int main() {
    int matriz[3][3];
    int i, j;
    int det;

    printf("Digite os elementos da matriz 3x3:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    det = matriz[0][0]*(matriz[1][1]*matriz[2][2] - matriz[1][2]*matriz[2][1])
                 - matriz[0][1]*(matriz[1][0]*matriz[2][2] - matriz[1][2]*matriz[2][0])
                 + matriz[0][2]*(matriz[1][0]*matriz[2][1] - matriz[1][1]*matriz[2][0]);

    printf("\nO determinante da matriz é: %d\n", det);

    return 0;
}


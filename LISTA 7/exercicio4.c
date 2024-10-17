#include <stdio.h>

int main() {
    float arr[10];
    int i;

    for (i = 0; i < 10; i++) {
        printf("Endereco do elemento %d: %p\n", i, (void*)&arr[i]);
    }

    return 0;
}

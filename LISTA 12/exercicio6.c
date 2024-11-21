#include <stdio.h>

int main(){
    int y = 5;
    int z = 11;
    int w;
    w = y + z;

    if (y > z){
        w = y * z;
    }

    printf("%d", w);
    return 0;
}

// SAÍDA É 16!!!

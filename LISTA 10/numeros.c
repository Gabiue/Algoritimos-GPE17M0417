/*Ler o arquivo "numeros.dat" e dizer quantos números tem e qual o maior deles*/
#include <stdio.h>

int main()
{
    long long int numeros;
    FILE *file = fopen("numeros.dat", "rb");
    if (file == NULL)
    {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    long int maior_numero = 0;
    int cont=0;

    while (fread(&numeros, sizeof(numeros), 1, file) == 1)
    {
        printf("%lld\n", numeros);
        cont++;
        if(numeros > maior_numero){
            maior_numero = numeros;
        }
    }

    printf("O maior numero eh: %ld\n", maior_numero);
    printf("A quantidade de numeros eh: %d", cont);

    fclose(file);
    return 0;
}
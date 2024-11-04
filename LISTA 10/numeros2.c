/* Ler o arquivo "numeros.dat" e dizer quantos números tem e qual o maior deles */
#include <stdio.h>

int main() {
    long int numeros;
    FILE *file = fopen("numeros.dat", "rb");
    if (file == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    long int maior_numero;
    int cont = 0;

    // Inicializa maior_numero com o menor valor possível de long int
    if (fread(&numeros, sizeof(numeros), 1, file) == 1) {
        maior_numero = numeros;
        cont++;
        printf("%ld\n", numeros);
    } else {
        printf("O arquivo está vazio ou ocorreu um erro na leitura.\n");
        fclose(file);
        return 1;
    }

    while (fread(&numeros, sizeof(numeros), 1, file) == 1) {
        printf("%ld\n", numeros);
        cont++;
        if (numeros > maior_numero) {
            maior_numero = numeros;
        }
    }

    printf("O maior numero eh: %ld\n", maior_numero);
    printf("A quantidade de numeros eh: %d\n", cont);

    fclose(file);
    return 0;
}

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char senha[101];
    int valida = 0;

    while (!valida) {
        printf("Digite a senha: ");
        scanf("%100s", senha);

        size_t len = strlen(senha);

        if (len < 8) {
            printf("A senha deve ter no minimo 8 caracteres.\n");
            continue;
        }

        if (len > 100) {
            printf("A senha deve ter no maximo 100 caracteres.\n");
            continue;
        }

        int temNumero = 0, temMaiuscula = 0, temMinuscula = 0;
        for (size_t i = 0; i < len; i++) {
            if (isdigit((unsigned char)senha[i])) {
                temNumero = 1;
            }
            if (isupper((unsigned char)senha[i])) {
                temMaiuscula = 1;
            }
            if (islower((unsigned char)senha[i])) {
                temMinuscula = 1;
            }
        }

        if (!temNumero) {
            printf("A senha deve conter pelo menos um numero.\n");
            continue;
        }

        if (!temMaiuscula) {
            printf("A senha deve conter pelo menos uma letra maiuscula.\n");
            continue;
        }

        if (!temMinuscula) {
            printf("A senha deve conter pelo menos uma letra minuscula.\n");
            continue;
        }

        valida = 1;
    }

    printf("Senha valida.\n");
    return 0;
}

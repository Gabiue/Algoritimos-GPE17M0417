#include <stdio.h>

int main() {
    float notas[20], soma = 0.0, media;
    int i, acima_da_media = 0;

    for(i = 0; i < 20; i++) {
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);
        soma += notas[i];
    }

    media = soma / 20.0;

    for(i = 0; i < 20; i++) {
        if(notas[i] > media) {
            acima_da_media++;
        }
    }

    printf("\nA média da turma é: %.2f\n", media);
    printf("Número de alunos com nota acima da média: %d\n", acima_da_media);

    return 0;
}


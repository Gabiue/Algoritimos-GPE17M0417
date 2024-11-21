#include <stdio.h>

int main() {
    float nota;
    int total_aulas, faltas;

    printf("Digite a nota do estudante: ");
    scanf("%f", &nota);

    printf("Digite o total de aulas: ");
    scanf("%d", &total_aulas);

    printf("Digite o número de faltas: ");
    scanf("%d", &faltas);

    float frequencia = ((total_aulas - faltas) / (float)total_aulas) * 100;

    
    if (nota >= 7 && frequencia >= 75) {
        printf("Estudante aprovado!\n");
    } else {
        printf("Estudante reprovado.\n");
    }

    return 0;
}

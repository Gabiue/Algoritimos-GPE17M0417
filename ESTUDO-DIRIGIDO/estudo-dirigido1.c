#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
    int a, b, c, d, e; 
    
    printf("Ser� que farei o passeio?\n\n");
    
    printf("Tenho compromisso no dia? (0 - n�o, 1 - sim): ");
    scanf("%d", &a);
    
    printf("Vou estar na cidade? (0 - n�o, 1 - sim): ");
    scanf("%d", &b);
    
    printf("Tenho dinheiro? (0 - n�o, 1 - sim): ");
    scanf("%d", &c);
        
    printf("Est� chovendo? (0 - n�o, 1 - sim): ");
    scanf("%d", &d);
    
    printf("� perto? (0 - n�o, 1 - sim): ");
    scanf("%d", &e);
    
    if (a == 0 && b == 1 && c == 1 && d == 0 && e == 1) {
        printf("Eu vou!!\n");
    } else {
        printf("Eu n�o vou!!\n");
    }
    
    return 0;
}

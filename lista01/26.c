#include <stdio.h>

int main() {
    int comp;
    int larg;
    int alt;
    int vol;

    printf("Digite o comprimento:");
    scanf("%d", &comp);

    printf("Digite a largura:");
    scanf("%d", &larg);
    
    printf("Digite a altura:");
    scanf("%d", &alt);

    vol = comp * larg * alt;

    printf("Seu volume e de: %d", vol);

    return 0;
}
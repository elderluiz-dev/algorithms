#include <stdio.h>

int main() {
    int metros;
    int cent;

    printf("Digite o valor em metros: ");
    scanf("%d", &metros);

    cent = metros * 100;

    printf("Seu valor em centimeros e de: %d", cent);

    return 0;
}
#include <stdio.h>

int main() {
    int km;
    int metros;

    printf("Digite o valor em km: ");
    scanf("%d", &km);

    metros = km * 1000;

    printf("Seu valor em metros e de: %d", metros);

    return 0;
}
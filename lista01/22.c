#include <stdio.h>

int main() {
    int base;
    int altura;
    int area;

    printf("Qual a base do retangulo?");
    scanf("%d", &base);

    printf("Qual a altura do retangulo?");
    scanf("%d", &altura);

    area = base * altura;

    printf("A area do seu retangulo e de %d", area);

    return 0;
}
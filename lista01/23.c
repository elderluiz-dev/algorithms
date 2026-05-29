#include <stdio.h>

int main() {
    int base;
    int altura;
    int area;

    printf("Qual a base do triangulo?");
    scanf("%d", &base);

    printf("Qual a altura do triangulo?");
    scanf("%d", &altura);

    area = base * altura / 2;

    printf("A area do seu triangulo e de %d", area);

    return 0;
}
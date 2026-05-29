#include <stdio.h>

int main () {
    int raio;
    int area;

    printf("Qual raio do circulo?");
    scanf("%d", &raio);

    area = 3.14 * (raio * raio);

    printf("A area do seu circulo e de %d", area);

    return 0;
}
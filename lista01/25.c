#include <stdio.h>

int main () {
    int raio;
    int perimetro;

    printf("Qual raio do circulo?");
    scanf("%d", &raio);

    perimetro = 2 * 3.14 * raio;

    printf("O perimetro do seu circulo e de %d", perimetro);

    return 0;
}
#include <stdio.h>

int main() {
    int celsius;
    int faren;

    printf("Digite a temperatura em graus Celsius: ");
    scanf("%d", &celsius);

    faren = celsius * 1.8 + 32;

    printf("A temperatura em Fahrenheit e de: %d", faren);

    return 0;
}
#include <stdio.h>

int main() {
    int celsius;
    int faren;

    printf("Digite a temperatura em graus Fahrenheit: ");
    scanf("%d", &faren);

    celsius = (faren - 32) / 1.8;

    printf("A temperatura em Celsius e de: %d", celsius);

    return 0;
}
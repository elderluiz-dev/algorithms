#include <stdio.h>

int main() {
    int num1;
    int num2;
    int num3;
    int num4;

    printf("Digite o primeiro numero:");
    scanf("%d", &num1);

    printf("Digite o segundo numero:");
    scanf("%d", &num2);

    printf("Digite o terceiro numero:");
    scanf("%d", &num3);

    printf("Digite o quarto numero:");
    scanf("%d", &num4);

    int media = (num1 + num2 + num3 + num4) / 4;

    printf("A media dos seus valores e: %d", media);

    return 0;
}
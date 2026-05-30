#include <stdio.h>

int main() {
    int num0;
    int num1;
    int num2;
    int inverso;

    printf("Digite o numero a ser invertido: ");
    scanf("%d", &num0);

    num1 = num0 / 10;
    num2 = num0 % 10;
    inverso = (num2 * 10) + num1;

    printf("Seu numero invertido e: %d", inverso);
}
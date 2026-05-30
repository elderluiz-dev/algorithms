#include <stdio.h>

int main() {
    int num;
    int div;

    printf("Digite o numero: ");
    scanf("%d", &num);

    div = num / 10;

    printf("O quociente do seu numero por 10 e: %d", div);
}
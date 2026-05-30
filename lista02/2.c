#include <stdio.h>

int main() {
    int num;
    int uni;

    printf("Digite o numero para saber a unidade: ");
    scanf("%d", &num);

    uni = num % 10;

    printf("A unidade do seu numero e: %d", uni);
}
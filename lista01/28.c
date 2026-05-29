#include <stdio.h>

int main() {
    int num;
    int ante;

    printf("Digite um numero: ");
    scanf("%d", &num);

    ante = num - 1;

    printf("O antecessor do seu numero e %d", ante);

    return 0;
}
#include <stdio.h>

int main() {
    int num;
    int dobro;

    printf("Digite um numero:");
    scanf("%d", &num);

    dobro = num * 2;

    printf("O dobro e: %d\n", dobro);

    return 0;
}
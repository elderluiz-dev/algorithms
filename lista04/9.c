#include <stdio.h>

int main() {
    int a, r, c;

    printf("Digite o valor inicial: ");
    scanf("%d", &a);

    printf("Digite a razao: ");
    scanf("%d", &r);

    c = 1;

    while (c <= 9)
    {
        printf("%d, ", a);
        a = a * r;
        c++;
    }

    printf("%d", a);
}
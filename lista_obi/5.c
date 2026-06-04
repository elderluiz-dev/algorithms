#include <stdio.h>

int main() {
    int count;
    float txa, txb, porcA, porcB, a, b;

    count = 0;

    printf("Quantidade de habitantes de A: ");
    scanf("%f", &a);
    printf("Taxa de crescimento de A: ");
    scanf(" %f", &txa);

    printf("Quantidade de habitantes de B: ");
    scanf(" %f", &b);
    printf("Taxa de crescimento de B: ");
    scanf(" %f", &txb);

    porcA = txa / 100;
    porcB = txb / 100;

    while (a < b) {
        a = a + (a * porcA);
        b = b + (b * porcB);

        count++;
    }

    printf("A ultrapassara B em %d anos", count);
}
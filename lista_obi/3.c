#include <stdio.h>

int main() {
    int n, a1, a2, a3, a4;

    printf("Digite o numero: ");
    scanf("%d", &n);

    a1 = 0;
    a2 = n - 1;
    a3 = 1;
    a4 = 2;

    printf("1\n");

    while (a1 != a2){

        a3 = (a3 * 10) + a4;
        n--;
        a1++;
        a4++;

        printf("%d\n", a3);
    }
}

/* NÃO SEI COMO FUNCIONA, SEI QUE FUNCIONA */
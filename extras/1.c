#include <stdio.h>

int main() {
    int n1, n2, menor, div, mdc;

    div = 1;
    mdc = 0;

    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);

    printf("Digite o segundo numero: ");
    scanf("%d", &n2);

    if (n1 < n2)
    {
        menor = n1;
    }else {
        menor = n2;
    }

    while (div <= menor)
    {
        if ((n1 % div == 0) && (n2 % div == 0) && (div > mdc))
        {
            mdc = div;
        }

        div++;
    }

    printf("O maior divisor commum entre %d e %d e: %d", n1, n2, mdc);
    
    return 0;
}
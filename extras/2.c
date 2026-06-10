#include <stdio.h>

int main() {
    int n, count;
    float soma;

    printf("Digite o numero: ");
    scanf("%d",  &n);

    soma = 1;
    count = 2;

    while (count <= n)
    {
        soma = soma + 1.0/count;
        count++;
    }

    printf("Soma = 1 + 1/2 ... 1/n e: %f", soma);
    
}
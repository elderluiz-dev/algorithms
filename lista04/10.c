#include <stdio.h>

int main() {
    int valor, n, aux;

    printf("Digite o valor: ");
    scanf("%d", &valor);

    n = valor - 1;
    aux = valor;

    do
    {
        aux = aux * n;
        n--;

    } while (n > 0);

    n = valor - 1;

    printf("%d ", valor);
    while (n > 1) {
    printf("x %d ", n);
    n--;
    }
    printf("x 1 = %d", aux);
}
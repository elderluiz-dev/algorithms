#include <stdio.h>

int main() {
    int N, valor, resultado;

    N = 1;
    printf("Digite o valor: ");
    scanf("%d", &valor);

    while (N <= 10){

        resultado = valor * N;
        printf("%d x %d = %d\n", valor, N, resultado);

        N++;
    }
}
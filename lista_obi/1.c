#include <stdio.h>

int main() {
    int valor, maior, dias, total;

    total = 0;
    maior = 0;

    printf("Quantos dias o cofrinho foi ativo?");
    scanf("%d", &dias);

    while (dias > 0)
    {
        printf("Qual valor foi adicionado ou retirado do cofrinho neste dia?");
        scanf("%d", &valor);

        total = total + valor;

        if (total > maior) {
            maior = total;
        }

        dias--;
    }
    
    printf("Saldo final: %d\n", total);
    printf("Maior valor atingido %d\n", maior);
}
#include <stdio.h>

int main() {
    int litros;
    int valor;
    int final;

    printf("Quantos litros foram abastecidos? ");
    scanf("%d", &litros);

    printf("Qual valor por litro? ");
    scanf("%d", &valor);

    final = valor * litros;

    printf("O preco final e de R$%d", final);

    return 0;
}
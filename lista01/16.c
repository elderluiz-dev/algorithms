#include <stdio.h>

int main() {
    int idade;

    printf("Quantos anos voce tem? ");
    scanf("%d", &idade);

    int dias = idade * 365.3;

    printf("Voce tem %d de dias de vida", dias);

    return 0;
}

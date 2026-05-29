#include <stdio.h>

int main() {
    int idade;

    printf("Quantos anos voce tem? ");
    scanf("%d", &idade);

    int meses = idade * 12;

    printf("Voce tem %d de meses de vida", meses);

    return 0;
}

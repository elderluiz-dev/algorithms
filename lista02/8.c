#include <stdio.h>

int main() {
    int num;
    int resto;

    printf("Digite o numero: ");
    scanf("%d", &num);

    resto = num %  10;

    printf("O resto do seu numero divido por 10 e: %d", resto);
}

// numeros muito grandes geram bug, o limite ainda é desconhecido, mas sabe-se que há um limite.
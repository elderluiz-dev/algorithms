#include <stdio.h>

int main() {
    int num;
    int dez;

    printf("Digite o numero para saber a dezena: ");
    scanf("%d", &num);

    dez = num / 10;

    printf("A dezena do seu numero e: %d", dez);
}

// o código só funciona corretamente se o número inserido for menor que 99, do contrário ele passa a printar tudo com exceção da casa das unidades.
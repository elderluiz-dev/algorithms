#include <stdio.h>

int main() {
    int reais;
    int dolares;

    printf("Quantos reais voce tem?");
    scanf("%d", &reais);

    dolares = reais * 5.05;

    printf("Seu dinheiro em dolares e de $%d e uns quebrado", dolares);

    return 0;
}
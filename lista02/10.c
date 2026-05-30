#include <stdio.h>

int main() {
    int u;
    int d;
    int du;

    printf("Digite a dezena: ");
    scanf("%d", &d);

    printf("Digite a unidade: ");
    scanf("%d", &u);

    du = (d * 10) + u;

    printf("Seu numero completo e: %d", du);
}
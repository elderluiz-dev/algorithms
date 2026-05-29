#include <stdio.h>

int main() {
    int val;

    printf("Digite o valor do produto:");
    scanf("%d", &val);

    int desc = val - ((val / 100) * 10);

    printf("Seu produto com 10 por centro de desconto e: %d", desc);

    return 0;
}
#include <stdio.h>

int main() {
    int val;

    printf("Digite o valor do produto:");
    scanf("%d", &val);

    int desc = val + ((val / 100) * 15);

    printf("Seu produto com 15 por centro de acressimo e: %d", desc);

    return 0;
}
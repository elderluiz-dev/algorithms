#include <stdio.h>

int main() {
    int num;

    printf("Digite um numero:");
    scanf("%d", &num);

    int cubo;
    cubo = num * num * num;
    
    printf("O cubo do seu numero e: %d", cubo);

    return 0;
}
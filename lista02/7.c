#include <stdio.h>

int main() {
    int num;

    printf("Digite um numero:");
    scanf("%d", &num);

    int quadrado;
    quadrado = num * num;
    
    printf("O quadrado do seu numero e: %d", quadrado);
}
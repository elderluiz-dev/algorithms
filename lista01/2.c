#include <stdio.h>

int main() {
    int num;

    printf("Digite um numero:");
    scanf("%d", &num);

    int terca_parte;
    terca_parte = num / 3;
    
    printf("A terca parte do seu numero e: %d", terca_parte);

    return 0;
}
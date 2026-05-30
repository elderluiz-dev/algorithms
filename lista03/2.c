#include <stdio.h>

int main() {
    int num;

    printf("Digite o numero: ");
    scanf("%d", &num);

    if(num % 2 == 0) {
        printf("Seu numero e par.");
    }else {
        printf("Seu numero e impar.");
    }
}
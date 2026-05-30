#include <stdio.h>

int main() {
    float num;

    printf("Digite o numero: ");
    scanf("%f", &num);

    if(num > 0) {
        printf("Seu numero e positivo.");
    }else if(num < 0) {
        printf("Seu numero e negativo.");
    }else {
        printf("Seu numero e zero.");
    }
}
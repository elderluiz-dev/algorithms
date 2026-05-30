#include <stdio.h>

int main() {
    int num1;
    int num2;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    if(num1 > num2) {
        printf("O primeiro numero e maior.");
    }else if (num2 > num1) {
        printf("O segundo numero e o maior.");
    }else {
        printf("Os numeros sao iguais");
    }
    
}
#include <stdio.h>

int main() {
    int n, a1, a3, inicial;

    printf("Digite o numero: ");
    scanf("%d", &n);

    a3 = 0;
    inicial = n;

    if (n % 10 == 0)
    {
        printf("Seu numero nao possui um espelho.");
    }else {
        while (n > 0) {

        a1 = n % 10;
        n = n / 10;
        a3 = (a3 * 10) + a1;
        }

        if (a3 == inicial){
            printf("Seu numero e um espelho!");
        }else {
            printf("Seu numero nao e um espelho.");
        }
    }

    
    
}
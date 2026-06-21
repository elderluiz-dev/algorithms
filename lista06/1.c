#include <stdio.h>

int main() {
    int a[6] = {1, 0, 5, -2, -5, 7}, soma;

    soma = a[0] + a[1] + a[5];
    printf("A soma das posicoes e: %d\n", soma);
    printf("--------------\n");

    a[4] = 100;

    for(int i = 0; i < 6; i++){
        printf("%d\n", a[i]);
    }
    
}
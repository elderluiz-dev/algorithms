#include <stdio.h>

int main() {
    int n, div, count;

    printf("Digite o numero: ");
    scanf("%d", &n);

    div = 0;
    count = 1;

    while (count <= n) {

        if (n % count == 0)
        {
            div += count;
        }
        
        count++;
    }

    printf("Quantidade de divisores: %d", div);
}
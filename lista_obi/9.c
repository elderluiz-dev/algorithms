#include <stdio.h>

int main() {
    int n, count;

    count = 0;

    printf("Digite o numero: ");
    scanf("%d", &n);

    while (n > 1){
        if (n % 2 == 0)
        {
            n = n / 2;
        }else {
            n = n * 3 + 1;
        }

        count++;   
    }

    printf("Foram necessarios %d passos para chegar em 1.", count);
}
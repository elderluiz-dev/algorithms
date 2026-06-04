#include <stdio.h>

int main() {
    int n, count, primo, a1;

    primo = 0;
    n = 1;
    
    while (n > 0) {
        printf("Digite um numero: ");
        scanf("%d", &n);

        count = n;
        a1 = 0;

        while (count > 0)
        {            
            if (n % count == 0)
            {
                a1++;
            }

            count--;
        }

        if (a1 == 2){
            primo++;
        }
        
    }

    printf("%d numeros primos foram digitados.", primo);

}
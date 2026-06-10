#include <stdio.h>

int main() {
    int n, count, div;

    printf("Digite o limite: ");
    scanf("%d", &n);

    while (n > 1)
    {
        count = n;

        while (0 < count && count <= n)
        {
            if (n % count == 0)
            {div++;}
            count--;
        }
     
        if (div == 2)
        {printf("%d, ", n);}

        div = 0;
        n--;
    }
}
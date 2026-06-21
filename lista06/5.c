#include <stdio.h>

int main() {
    int v[10], pares;

    pares = 0;

    printf("Digite os valores: \n");
    for(int i = 0; i < 10; i++){
        scanf("%d", &v[i]);

        if (v[i] % 2 == 0)
        {
            pares++;
        }
        
    }

    printf("Foram encontrados %d valores pares", pares);
}
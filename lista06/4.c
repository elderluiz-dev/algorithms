#include <stdio.h>

int main() {
    int v[8], x, y, soma;

    printf("Digite os valores: \n");
    for(int i = 0; i < 8; i++){
        scanf("%d", &v[i]);
    }

    printf("Digite as posicoes: \n");
    scanf("%d", &x);
    scanf("%d", &y);

    soma = v[x] + v[y];

    printf("A soma dos valores nas posicoes indicadas e: %d", soma);
}
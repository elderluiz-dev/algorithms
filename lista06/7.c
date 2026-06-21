/* ler 10 inteiros em um vetor, imprimir o vetor, o maior elemento e a posição dele */
#include <stdio.h>

int main() {
    int v[10], maior, posi;

    printf("Digite os valores: \n");
    for(int i = 0; i < 10; i++){
        scanf("%d", &v[i]);
    }

    maior = v[0];
    posi = 0;

    for(int j = 1; j < 10; j++){
        if(v[j] > maior){
            maior = v[j];
            posi = j;
        }
    }

    printf("------------\n");

    for(int h = 0; h < 10; h++){
        printf("%d", v[h]);
    }

    printf("\nO maior elemento e %d e se encontra na posicao %d", maior, posi);
}
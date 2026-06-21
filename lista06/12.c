#include <stdio.h>

int main () {
    int v[5], maior, menor, media;

    printf("Digite os valores: \n");
    for(int i = 0; i < 5; i++){
        scanf("%d", &v[i]);
    }

    maior = v[0];
    menor = v[0];
    media = 0;

    for(int j = 0; j < 5; j++){
        if(v[j] > maior){
            maior = v[j];
        }

        if(v[j] < menor){
            menor = v[j];
        }

        media = media + v[j];
    }

    media = media / 5;

    printf("\nO maior valor e %d, o menor valor e %d e a media dos valores e de %d", maior, menor, media);
}
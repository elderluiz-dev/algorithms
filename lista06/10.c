#include <stdio.h>

int main() {
    float v[15], media;

    printf("Digite as notas: \n");
    for(int i = 0; i < 15; i++){
        scanf("%f", &v[i]);
    }

    media = v[0];

    for(int j = 1; j < 15; j++){
        media = (media + v[j]);
    }

    media = media / 15;

    printf("\nA media geral das notas foi de: %2.f", media);


}
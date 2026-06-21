#include <stdio.h>

int main() {
    float v[10], nega, posi;

    printf("Digite os valores: \n");
    for(int i = 0; i < 10; i++){
        scanf("%f", &v[i]);
    }

    posi = 0;
    nega = 0;

    for(int j = 0; j < 10; j++){
        if(v[j] > 0){
            posi = posi + v[j];
        }else{
            nega++;
        }
    }

    printf("Entre seus valores ha %2.f numeros negativos e a soma dos positivos e de %2.f", nega, posi);
}
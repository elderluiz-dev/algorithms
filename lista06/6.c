#include <stdio.h>

int main() {
    int v[10], maior, menor;

    printf("Digite os valores: \n");
    for(int i = 0; i < 10; i++){
        scanf("%d", &v[i]);
    }
    
    maior = v[0];
    menor = v[0];

    for(int j = 1; j < 10; j++){
        if(v[j] > maior){
            maior = v[j];
        }

        if(v[j] < menor){
            menor = v[j];
        }
    }

    printf("O maior elemento digitado foi %d e o menor elemento digitado foi %d", maior, menor);

}
#include <stdio.h>

int main() {
    int a[10], b[10], c[20];

    printf("Digite os valores do primeiro vetor: \n");
    for(int i = 0; i < 10; i++){
        scanf("%d", &a[i]);
    }

    printf("Digite os valores do segundo vetor: \n");
    for(int i = 0; i < 10; i++){
        scanf("%d", &b[i]);
    }

    int j = 0;

    for(int i = 0; i < 20; i++){
        if(i % 2 == 0){
            c[i] = a[j];
        }else{
            c[i] = b[j];
            j++;
        }
    }

    printf("\nSeu vetor final e: ");
    for(int i = 0; i < 20; i++){
        printf("%d, ", c[i]);
    }
}
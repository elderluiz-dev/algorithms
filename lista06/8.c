#include <stdio.h>

int main() {
    int v[6];

    printf("Digite os valores: \n");
    for(int i = 0; i < 6; i++){
        scanf("%d", &v[i]);
    }

    printf("\n---------\n");

    printf("Os valores na ordem inversa sao: \n");
    for(int j = 5; j >= 0; j--){
        printf("%d\n", v[j]);
    }
}
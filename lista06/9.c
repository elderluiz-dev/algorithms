#include <stdio.h>

int main() {
    int v[6];

    printf("Digite os valores: \n");
    for(int i = 0; i < 6; i++){
        scanf("%d", &v[i]);
    }

    printf("\n---------\n");

    printf("Os valores pares na ordem inversa sao: \n");
    for(int j = 5; j >= 0; j--){
        if(v[j] % 2 == 0){
          printf("%d\n", v[j]);
        }
    }
}
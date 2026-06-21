#include <stdio.h>

int main()  {
    int v[6];

    printf("Digite os valores: ");

    for(int i = 0; i < 6; i++){
        scanf("%d", &v[i]);
    }

    printf("Seus valores sao: ");

    for(int j = 0; j < 6; j++){
        printf("%d", v[j]);
    }
}
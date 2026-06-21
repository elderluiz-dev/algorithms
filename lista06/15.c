#include <stdio.h>

int main() {
    int v[20];

    printf("Digite os valroes: \n");
    for(int i = 0; i < 20; i++){
        scanf("%d", &v[i]);
    }

    printf("--------\n");

    for(int j = 0; j < 20; j++){
        for(int g = 0; g < 20; g++){
            if(j != g && v[j] == v[g]){
                v[j] = 0;
            }
        }
    }
    
    printf("\n--------\n");

    for(int h = 0; h < 20; h++){
        printf("%d\n", v[h]);
    }
}
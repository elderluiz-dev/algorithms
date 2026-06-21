#include <stdio.h>

int main() {
    float v[10], q[10];


    printf("Digite os numeros: ");
    for(int i = 0; i < 10; i++){
        scanf("%f", &v[i]);

        q[i] = v[i] * v[i];
    }

    printf("Aqui estao os numeros digitados e seus respectivos quadrados: \n");
    for(int j = 0; j < 10; j++){
        printf("%2.f\n", v[j]);
    }

    printf("------------------\n");

    for(int h = 0; h < 10; h++){
        printf("%2.f\n", q[h]);
    }

}
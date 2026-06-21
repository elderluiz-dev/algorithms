#include <stdio.h>

int main() {
    int v[10];

    printf("Digite os valores : \n");

    for(int i = 0; i < 10; i++){

        scanf("%d", &v[i]);

    }

    printf("\nNumeros repetidos: ");
    for(int i = 0; i < 10; i++){
        int rep = 0;
        int imp = 0;

        for(int j = 0; j < 10; j++){
            if (j != i && v[i] == v[j]){
                rep++;
            }
        }

        if(i > 0){
            for(int k = i - 1; k >= 0; k--){
                if(v[i] == v[k]){
                    imp++;
                }
            }
        }

        if(imp == 0 && rep > 0){
            printf("%d, ", v[i]);
        }
    }
}

/* NÃO SEI COMO FAZER, RESPONDERAM PRA MIM E EU AINDA NÃO ENTENDI */
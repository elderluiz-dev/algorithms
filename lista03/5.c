#include <stdio.h>

int main() {
    int n1;
    int n2;
    int n3;
    int media;

    printf("Digite suas tres notas: ");
    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf("%d", &n3);

    media = (n1 + n2 + n3) / 3;

    if(media >= 7){
        printf("Aprovado!");
    }else if(5 <= media && media <= 7) {
        printf("Recuperacao.");
    }else {
        printf("Reprovado.");
    }
}
#include <stdio.h>

int main() {
    int graus;

    printf("Qual o angulo da medida? ");
    scanf("%d", &graus);

    if(graus > 0) {
        if(graus < 90) {
            printf("Angulo agudo");
        }else if(graus == 90) {
            printf("Angulo reto");
        }else if(90 < graus && graus < 180) {
            printf("Angulo obtuso");
        }else if (graus == 180) {
            printf("Angulo raso");
        }else {
            printf("Angulo concavo");
        }
    }else {
        printf("Angulo invalido. Erro: Angulo negativo.");
    }
}
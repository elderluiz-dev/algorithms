#include <stdio.h>

int main() {
    int opc, n1, n2, n3, p1, p2, p3, med;

    do
    {
        printf("Menu de opcoes\n1. Media aritmetica\n2. Media ponderada\n3. Sair\n");
        scanf("%d", &opc);
    }while (opc != 1 && opc != 2 && opc != 3);

    if (opc == 1)
    {
        printf("Digite a primeira nota ");
        scanf("%d", &n1);

        printf("Digite a segunda nota ");
        scanf("%d", &n2);

        med = (n1 + n2) / 2;

        printf("Media aritimetica: %d", med);

    }else if (opc == 2) {
        
        printf("Digite a primeira nota ");
        scanf("%d", &n1);
        printf("Qual o peso da primeira nota? ");
        scanf("%d", &p1);

        printf("Digite a segunda nota ");
        scanf("%d", &n2);
        printf("Qual o peso da segunda nota? ");
        scanf("%d", &p2);

        printf("Digite a terceira nota ");
        scanf("%d", &n3);
        printf("Qual o peso da terceira nota? ");
        scanf("%d", &p3);

        med = ((n1 * p1) + (n2 * p2) + (n3 * p3)) / (p1 + p2 + p3);

        printf("Media ponderada: %d", med);
    }
    
}
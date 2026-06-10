#include <stdio.h>

int main() {
    int v, pf, qntp, valp;
    char tipo;

    printf("Digite o valor do carro: ");
    scanf("%d", &v);

    printf("A compra sera a vista? [s/n] ");
    scanf(" %c", &tipo);

    if (tipo == 's')
    {
        pf = v - ((v / 100 ) * 20);

        printf("Preco final com desconto a vista: %d", pf);
    }else {
        printf("Quantas parcelas sera? ");
        scanf("%d", &qntp);

        pf = v + ((v / 100) * (qntp / 2));

        valp = pf / qntp;

        printf("O preco final e de: %d\nCada parcela ficara pelo valor de: %d", pf, valp);
    }
    
}
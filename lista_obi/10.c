#include <stdio.h>

int main() {
    int n, ce, ci, vi, de, cim, doi;
    ce = 0;
    ci = 0;
    vi = 0;
    de = 0;
    cim = 0;
    doi = 0;

    printf("Digite o valor: \n");
    scanf("%d", &n);

    if (n >= 100){
        ce++;
        n -= 100;
    }
    if (n >= 50) {
        ci++;
        n -= 50;
    }
    if (n >= 20) {
        vi++;
        n -= 20;
    }
    if (n >= 10) {
        de++;
        n -= 10;
    }
    if (n >= 5) {
        cim++;
        n -= 5;
    }
    if (n >= 2) {
        doi++;
        n -= 2;
    }

    printf("---------------------\n");
    printf("%d  de 100\n", ce);
    printf("%d  de 50\n", ci);
    printf("%d  de 20\n", vi);
    printf("%d  de 10\n", de);
    printf("%d  de 5\n", cim);
    printf("%d  de 2\n", doi);
    printf("Valor restante: %d", n);
    
}
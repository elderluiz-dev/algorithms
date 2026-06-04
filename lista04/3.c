#include <stdio.h>

int main() {
    int valor, posi, total, nega, media, per_posi, per_nega, total_pn;
    char continuar;

    media = 0;
    posi = 0;
    nega = 0;
    per_posi = 0;
    per_nega = 0;
    continuar = 'y';

    do
    {
        printf("Digite o valor: ");
        scanf("%d", &valor);

        if (valor > 0)
        {
            posi++;
        }else {
            nega++;
        }

        total = total + valor;
        

        printf("Quer adicionar mais valores? [Y/N]");
        scanf(" %c", &continuar);

    } while (continuar == 'y');

    total_pn = posi + nega;
    media = total / total_pn;
    per_posi = total_pn;
    per_nega = (posi + nega) * (nega / 100);

    printf("---------------------\n");
    printf("Media: %d\n", media);
    printf("Positivos: %d\n", posi);
    printf("Negativos: %d\n", nega);
    printf("Percentual de positivos: %d\n", per_posi);
    printf("Percentual de negativos: %d\n", per_nega);
    
}
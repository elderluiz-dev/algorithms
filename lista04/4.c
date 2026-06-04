#include <stdio.h>

int main() {
    int valor, g1, g2, g3, g4;

    g1 = 0;
    g2 = 0;
    g3 = 0;
    g4 = 0;

    do
    {
        printf("Digite os valores. Para parar digite um valor negativo: ");
        scanf("%d", &valor);

        if (valor > 0 && valor <= 25)
        {
            g1++;
        }else if (valor >= 26 && valor <= 50)
        {
            g2++;
        }else if (valor >= 51 && valor <= 75)
        {
            g3++;
        }else if (valor >= 76 && valor <= 100)
        {
            g4++;
        }

    } while (valor > 0);
    

    printf("Valores entre 0 e 25: %d\n", g1);
    printf("Valores entre 26 e 50: %d\n", g2);
    printf("Valores entre 51 e 75: %d\n", g3);
    printf("Valores entre 76 e 100: %d\n", g4);
    
}
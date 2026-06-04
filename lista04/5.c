#include <stdio.h>
 
int main() {
    int valor, total, par, impar, valor_par, media_par, media_geral;

    total = 0;
    par = 0;
    impar = 0;
    valor_par = 0;
    media_par = 0;
    media_geral = 0;

    while (valor != 0) {
        printf("Digite um numero positivo. Para parar digite 0: ");
        scanf("%d", &valor);

        if (valor > 0)
        {
            total = total + valor;

            if (valor % 2 == 0) {
            par++;
            valor_par = valor_par + valor;
            }else {
            impar++;
            }
    
        }else if (valor < 0) {
            printf("VALOR NEGATIVO INSERIDO! POR FAVOR TENTE NOVAMENTE.\n");        
        }
        
    }

    media_par = valor_par / par;
    media_geral = total / (par + impar);

    printf("---------------------\n");
    printf("Numeros pares: %d\n", par);
    printf("Numeros impares: %d\n", impar);
    printf("Media dos valores pares: %d\n", media_par);
    printf("Media geral: %d\n", media_geral);
}
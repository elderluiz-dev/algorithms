#include <stdio.h>

int main() {
    int maior, menor, count, altura;
    count = 1;

    do
    {        
        scanf("%d", &altura);

        if(count == 1) {
            maior = altura;
            menor = altura;
        }else {
            if(altura < menor) {
                menor = altura;
            }
            if(altura > maior) {
                maior = altura;
            }
        }

        count++;
        
    } while (count <= 15);

    printf("A maior altura e: %d\n", maior);
    printf("A menor altura e: %d\n", menor);

    return 0;
}
#include <stdio.h>

int main() {
    int sal;

    printf("Digite seu salario: ");
    scanf("%d", &sal);

    int aum = sal + ((sal / 100) * 20);

    printf("Seu salario com um aumento de 20 por cento e: %d", aum);

    return 0;
}
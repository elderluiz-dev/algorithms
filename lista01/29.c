#include <stdio.h>

int main() {
    int horas;
    int valor;
    int salario;

    printf("Quantas horas foram trabalhadas? ");
    scanf("%d", &horas);

    printf("Qual valor de cada hora? ");
    scanf("%d", &valor);

    salario = valor * horas;

    printf("Seu salario e de R$%d", salario);

    return 0;
}
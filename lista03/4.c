#include <stdio.h>

int main() {
    int ano;

    printf("Digite seu ano: ");
    scanf("%d", &ano);

    if((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
        printf("Seu ano e bissexto.");
    }else {
        printf("Seu ano nao e bissexto");
    }
}
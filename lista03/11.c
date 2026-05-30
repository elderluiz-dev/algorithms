#include <stdio.h>

int main() {
    int idade;
    char carteira;

    printf("Quantos anos voce tem?");
    scanf("%d", &idade);
    printf("Possui carteira de estudante?");
    scanf(" %c", &carteira);

    if(idade >= 60 || carteira == 'S') {
        printf("Seu ingresso e R$10,00!");
    }else {
        printf("Seu ingresso e R$20,00.");
    }
}
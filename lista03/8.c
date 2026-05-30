#include <stdio.h>

int main() {
    int num1;
    int num2;
    int operacao;
    char operador;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    printf("Qual operacao deseja realizar?");
    scanf(" %c", &operador);

    if(operador == '+') {
        operacao = num1 + num2;
        printf("%d", operacao);
    }else if(operador == '-') {
        operacao = num1 - num2;
        printf("%d", operacao);
    }else if(operador == '*') {
        operacao = num1 * num2;
        printf("%d", operacao);
    }else if(operador == '/') {
        if(num2 != 0) {
        operacao = num1 / num2;
        printf("%d", operacao);
        }else {
            printf("Erro: Divisao por 0 nao aceita!");
        }
    }
}

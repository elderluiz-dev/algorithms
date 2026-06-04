#include <stdio.h>

int main() {
    int valor;

    valor = 101;

    while (valor < 200) {

        printf("%d - ", valor);
        valor = valor + 2;
    }
}
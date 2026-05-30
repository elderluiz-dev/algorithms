#include <stdio.h>

int main() {
    char letra;

    printf("Digite uma letra: ");
    scanf("%c", &letra);

    if(letra == 'A' || letra == 'a') {
        printf("10");
    }else if(letra == 'B' || letra == 'b') {
        printf("8");
    }else if(letra == 'C' || letra == 'c') {
        printf("6");
    }else if(letra == 'D' || letra == 'd') {
        printf("4");
    }else if(letra == 'F' || letra == 'b') {
        printf("0");
    }else {
        printf("Erro: Letra invalida.");
    }
}
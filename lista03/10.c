#include <stdio.h>

int main() {
    float peso, altura, imc;

    printf("Digite seu peso: ");
    scanf("%f", &peso);

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    if(imc < 18.5) {
        printf("Abaixo do peso.");
    }else if(18.5 <= imc && imc <= 24.9) {
        printf("Peso normal.");
    }else if(25 <= imc && imc <= 29.9){
        printf("Sobrepeso.");
    }else {
        printf("Obeso.");
    }
}
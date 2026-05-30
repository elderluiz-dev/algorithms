#include <stdio.h>

int main() {
    int idd;

    printf("Digite sua idade: ");
    scanf("%d", &idd);

    if (idd <= 12) {
        printf("Crianca.");
    }else if(13 <= idd && idd <= 17) {
        printf("Adolescente.");
    }else if(18 <= idd && idd <= 59) {
        printf("Adulto.");
    }else {
        printf("Idoso.");
    }

}
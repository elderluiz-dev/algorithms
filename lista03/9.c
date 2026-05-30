#include <stdio.h>

int main() {
    int l1, l2, l3;

    printf("Digite os lados do triangulo:\n");
    scanf("%d", &l1);
    scanf("%d", &l2);
    scanf("%d", &l3);

    if (l1 + l2 > l3 && l2 + l3 > l1 && l1 + l3 > l2) {
        if(l1 == l2 && l2 == l3) {
            printf("Triangulo equilatero.");
        }else if(l1 == l2 || l2 == l3 || l1 == l3) {
            printf("Trianngulo isoceles.");
        }else {
            printf("Triangulo escaleno.");
        }
    }else {
        printf("Nao e triangulo.");
    }
}
#include <stdio.h>

int main() {
    int h, m, t;

    printf("Informe a hora inicial: ");
    scanf("%d", &h);
    printf("Informe o minuto inicial: ");
    scanf("%d", &m);
    printf("Informe os minutos transcorridos: ");
    scanf("%d", &t);

    while (t > 60) {
        h++;
        t -= 60;
    }

    m += t;

    while (m > 60) {
        h++;
        m -= 60;
    }

    if (h > 24) {
        h -= 24;
    }

    printf("%d:%d", h, m);
}
#include <stdio.h>

int main() {
    int num, count;
    num = 0;

    while (count != 500) {
        if (count % 3 == 0) {
            num = num + count;
        }
        count++;
    }

    printf("%d", num);
}
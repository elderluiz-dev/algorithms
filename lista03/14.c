#include <stdio.h>

int main() {
    char user[6];
    int senha;

    printf("Digite seu nome de usuario: ");
    scanf("%s", &user);
    printf("Digite sua senha: ");
    scanf("%d", &senha);

    if((strcmp(user, "admin") ==0) && senha == 1234) {
        printf("Acesso permitido");
    }else {
        printf("Acesso negado");
    }
}
#include <stdio.h>

int main()
{
    int senha = 123;
    int cont = 0;
    int senha_usuario;
    
    
    while (cont < 3) {
        printf("Digite sua senha: ");
        scanf("%d", & senha_usuario);
        if (senha_usuario != senha) {
            printf("Acesso negado. Sobrou %d tentativas\n\n", 2 - cont);
            cont++;
        }
        else {
            printf("Acesso liberado. Seja bem-vindo\n\n");
            break;
        }
    }
    if (cont == 3) {
        printf("Limite de tentativas atingido.\n\n");
    }

    return 0;
}

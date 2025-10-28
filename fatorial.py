#include <stdio.h>

int main() {
    int num, i;
    int fatorial = 1;
    
    printf("Digite um número: ");
    scanf("%d", & num);
    
    if (num < 0) {
        printf("Não existe fatorial pra número negativo");
    }
    else {
        for (i = 1; i <= num; i++) {
            fatorial *= num;
        }
    }
    printf("O fatorial de %d é: %d", num, fatorial);

    return 0;
}

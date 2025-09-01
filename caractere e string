#include <stdio.h>

int main() {
    char caractere;
    char string[21];  
    int contador = 0;

    printf("Digite um caractere: ");
    scanf("%c", &caractere);

    printf("Digite uma string (max 20 caracteres, sem espaços): ");
    scanf("%s", string);

    for (int i = 0; string[i] != '\0'; i++) {
        if (string[i] == caractere) {
            contador++;
        }
    }

    printf("O caractere '%c' aparece %d vez(es) na string.\n", caractere, contador);

    return 0;
}

#include <stdio.h>

int main() {
    int numero;
    int maior, menor;
    int cont = 0;
    int primeiro = 1; 

    while (1) {
        printf("Digite um número (0 para parar): ");
        scanf("%d", &numero);

        if (numero == 0) {
            break;
        }

        if (primeiro) {
            maior = numero;
            menor = numero;
            primeiro = 0; 
        } else {
            if (numero > maior) {
                maior = numero;
            }
            if (numero < menor) {
                menor = numero;
            }
        }

        cont++;
    }

    if (cont > 0) {
        printf("\nQuantidade de números digitados: %d\n", cont);
        printf("Maior número: %d\n", maior);
        printf("Menor número: %d\n", menor);
    } else {
        printf("\nNenhum número foi digitado.\n");
    }

    return 0;
}

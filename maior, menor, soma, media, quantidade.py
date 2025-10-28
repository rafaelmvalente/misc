#include <stdio.h>

int main()
{
// numeros um por vez -- dentro do while
// parar quando o usuario digitar 0 -- if(n < 0), break;
// soma dos numeros -- soma = 0
// cont pra numeros digitados
// media da soma -- soma / cont
// maior e menor

    int n;
    int soma = 0, cont = 0;
    int media = 0;
    int maior, menor;
    
    while(1) {
        printf("Digite um número: ");
        scanf("%d", & n);
        if(n == 0) {
            break;
        }
        else {
            soma += n;
            cont++;
            media = soma / cont;
            
            if(n > maior) {
                maior = n;
            }
            if (n < menor) {
                menor = n;
            }
        }
    }
    printf("Números digitados: %d\n", cont);
    printf("Soma deles: %d\n", soma);
    printf("Média: %d\n", media);
    printf("Maior: %d | \nMenor: %d", maior, menor);
    return 0;
}

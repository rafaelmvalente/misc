#include <stdio.h>

int main()
{
    int n;
    float matriz[5][5];
    int maior;
    int maiorLinha = 0, maiorColuna = 0;
    
    printf("\nDigite o tamanho da matriz (máximo 20): ");
    scanf("%d", & n);
    
    if(n < 1 || n > 5) {
        printf("\nTamanho inválido.");
        return 1;
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            printf("\nMatriz[%d][%d]: ", i, j);
            scanf("%f", & matriz[i][j]);
            if(i == 0 && j == 0) {
                maior = matriz[i][j];
                maiorLinha = i;
                maiorColuna = j;
                }
            else if(matriz[i][j] > maior) {
                maior = matriz[i][j];
                maiorLinha = i;
                maiorColuna = j;
                }
            }
        }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            printf("\nMatriz = %f", matriz[i][j]);
        }
    }
    printf("\nMaior: %d", maior);
    printf("\nLinha: %d | \nColuna: %d", maiorLinha, maiorColuna);

    return 0;
}

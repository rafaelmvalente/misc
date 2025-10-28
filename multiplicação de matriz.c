#include <stdio.h>

int main()
{   
    int A[20][20];
    int B[20][20];
    int C[20][20];
    int linhas_a, colunas_a, linhas_b, colunas_b;
    
    printf("Digite o número de linhas da sua matriz A: ");
    scanf("%d", & linhas_a);
    printf("Digite o número de colunas da sua matriz A: ");
    scanf("%d", & colunas_a);
    printf("Digite o número de linhas da sua matriz B: ");
    scanf("%d", & linhas_b);
    printf("Digite o número de colunas da sua matriz B: ");
    scanf("%d", & colunas_b);
    if(linhas_a < 1 || linhas_a > 20 || colunas_a < 1 || colunas_a > 20) {
        printf("Tamanho inválido.");
        return 1;
    }
    
    for(int i = 0; i < linhas_a; i++) {
        for(int j = 0; j < colunas_a; j++) {
            printf("\nMatriz A[%d][%d]: ", i, j);
            scanf("%d", & A[i][j]);
        }
    }
    for(int i = 0; i < linhas_b; i++) {
        for(int j = 0; j < colunas_b; j++) {
            printf("\nMatriz B[%d][%d]: ", i, j);
            scanf("%d", & B[i][j]);
        }
    }
    for(int i = 0; i < linhas_a; i++) {
        for(int j = 0; j < colunas_b; j++) {
            C[i][j] = 0;
        }
    }
    for(int i = 0; i < linhas_a; i++) {
        for(int j = 0; j < colunas_b; j++) {
            for(int k = 0; k < colunas_a; k++) {
                C[i][j] = A[i][k] * B[k][j];
            }
        }
    }
    
    for(int i = 0; i < linhas_a; i++) {
        for(int j = 0; j < colunas_b; j++) {
            printf("\nMatriz A = %5d", A[i][j]);
        }
    }
    for(int i = 0; i < linhas_b; i++) {
        for(int j = 0; j < colunas_b; j++) {
            printf("\nMatriz B = %5d", B[i][j]);
        }
    }
    for(int i = 0; i < linhas_a; i++) {
        for(int j = 0; j < colunas_b; j++) {
            printf("\nMatriz C = %5d", C[i][j]);
        }
    }
    
    
    return 0;
}

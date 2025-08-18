#include <stdio.h>

int main()
{
    int n;
    float x[20], y[20], z[20];
    int i;
    
    printf("Digite o tamanho dos vetores (máximo 20): ");
    scanf("%d", &n);
    
    if (n > 20 || n < 1) {
        printf("Tamanho inválido.");
        return 1;
    }
    
    for (i = 0; i < n; i++) {
        printf("x[%d] = ", i);
        scanf("%f", &x[i]);
    }
    for (i = 0; i < n; i++) {
        printf("y[%d] = ", i);
        scanf("%f", &y[i]);
    }
    for (i = 0; i < n; i++) {
        z[i] = x[i] * y[i];
    }
    
    printf("\nVetor x:\n");
    for (i = 0; i < n; i++) {
        printf("%.2f ", x[i]);
    }
    
    printf("\nVetor y:\n");
    for (i = 0; i < n; i++) {
        printf("%.2f ", y[i]);
    }
    
    printf("\nVetor z:\n");
    for (i = 0; i < n; i++) {
        printf("%.2f ", z[i]);
    }
    
    printf("\n");
    return 0;
}

#include <stdio.h>

int main()
{
    float A;
    float B;
    float C;
    
    printf("Digite o lado A do triângulo: ");
    scanf("%f", & A);
    printf("Digite o lado B do triângulo: ");
    scanf("%f", & B);
    printf("Digite o lado C do triângulo: ");
    scanf("%f", & C);
    
    if ( ((A + B) > C) && ((A + C) > B) && ((B + C) > A) ) {
        printf("Forma um triângulo");
    }
    else {
        printf("Não forma um triângulo");
    }

    return 0;
}

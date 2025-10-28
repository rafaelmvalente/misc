#include <stdio.h>

int main()
{
    float nota;
    printf("Digite sua nota: ");
    scanf("%f", & nota);
    
    if ((nota < 5)) {
        printf("Insuficiente");
    }
    else if ((nota >= 5 && nota <= 6.9)) {
        printf("Regular");
    }
    else if ((nota >= 7 && nota <= 8.9)) {
        printf("Bom");
    }
    else {
        printf("Excelente");
    }

    return 0;
}

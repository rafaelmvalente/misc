#include <stdio.h>

int main()
{
    int idade;
    float peso;
    
    printf("Digite sua idade: ");
    scanf("%d", & idade);
    printf("Digite seu peso: ");
    scanf("%f", & peso);
    
    if ((idade >= 16 && idade <= 69) && (peso >= 50)) {
        printf("Idade e peso está ok para a doação de sangue");
    }
    else {
        printf("Inapto para a opção de sangue");
    }

    return 0;
}

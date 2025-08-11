/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int idade;
    float peso;
    int saudavel;
    int formado;
    printf("Digite sua idade: ");
    scanf("%d", & idade);
    printf("Digite seu peso: ");
    scanf("%f", & peso);
    printf("Digite se você é saudavel. 1 para saudavel e 0 para não saudavel: ");
    scanf("%d", & saudavel);
    printf("Digite se você se formou no ensino médio. 1 para formado e 0 para não formado: ");
    scanf("%d", & formado);
    if ((idade >= 21 && idade <= 50) && (peso >= 60 && peso <= 90) && (saudavel == 1) && (formado == 1)) {
        printf("Satisfaz os critérios para a vaga");
    }
    else {
        printf("Não satisfaz os critérios para a vaga");
    }
    
    

    return 0;
}
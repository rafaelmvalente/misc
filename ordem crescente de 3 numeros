#include <stdio.h>
#include <stdbool.h>

int main() 
{
    int num, num2, num3, temp;
    
    printf("Digite um numero: ");
    scanf("%d", &num);
    printf("Digite outro numero: ");
    scanf("%d", &num2);
    printf("Digite mais um numero: ");
    scanf("%d", &num3);
    
    bool mustStop = false;
    
    while (!mustStop) {    
        mustStop = true;   
        
        if (num > num2) {  
            temp = num;
            num = num2;
            num2 = temp;
            mustStop = false;
        }
        if (num2 > num3) {
            temp = num2;
            num2 = num3;
            num3 = temp;
            mustStop = false;
        }
    }
    
    printf("Números em ordem crescente: %d %d %d\n", num, num2, num3);
    
    return 0;
}

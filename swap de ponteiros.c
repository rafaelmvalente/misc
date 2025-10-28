#include <stdio.h>

int main() {
    int var1, var2;
    int *pt1, *pt2; 

    var1 = 10;
    var2 = 20;

    pt1 = &var1;
    pt2 = &var2;

    int temp = *pt1;
    *pt1 = *pt2;
    *pt2 = temp;

    // Imprimindo
    printf("Valor de var1: %d\n", var1);
    printf("Valor de var2: %d\n", var2);

    printf("Valor apontado por pt1: %d\n", *pt1);
    printf("Valor apontado por pt2: %d\n", *pt2);

    return 0;
}

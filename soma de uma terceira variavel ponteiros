#include <stdio.h>

int main() {
    int var1 = 5, var2 = 7, var3;
    int *pt1, *pt2;

    pt1 = &var1;
    pt2 = &var2;

    var3 = *pt1 + *pt2;

    pt1 = &var3;
    *pt1 = *pt1 + 10;

    printf("var1: %d\n", var1);
    printf("var2: %d\n", var2);
    printf("var3: %d\n", var3);

    printf("Valor apontado por pt1: %d\n", *pt1);
    printf("Valor apontado por pt2: %d\n", *pt2);

    return 0;
}

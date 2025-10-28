#include <stdio.h>

int main() {
    double d1 = 3.5, d2 = 2.0, d3;
    double *p1, *p2;

    p1 = &d1;
    p2 = &d2;

    d3 = (*p1) * (*p2);

    p2 = &d3;
    *p2 = *p2 / 2;

    printf("d1: %.2f\n", d1);
    printf("d2: %.2f\n", d2);
    printf("d3: %.2f\n", d3);
    printf("Valor apontado por p1: %.2f\n", *p1);
    printf("Valor apontado por p2: %.2f\n", *p2);

    return 0;
}

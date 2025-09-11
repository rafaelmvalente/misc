#include <stdio.h>

int main() {
    int num1 = 10, num2 = 20, num3 = 30;
    int *p1, *p2, *p3;

    p1 = &num1;
    p2 = &num2;
    p3 = &num3;

    *p1 = 100;

    p1 = p2;
    *p1 = 200;

    p1 = p3;
    *p1 = 300;

    printf("num1: %d\n", num1);
    printf("num2: %d\n", num2);
    printf("num3: %d\n", num3);

    return 0;
}

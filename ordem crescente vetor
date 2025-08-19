#include <stdio.h>

int main() 
{
    int X[20];
    int x, j, temp;
    
    for(int i = 0; i < 20; i++) {
        printf("X[%d]: ", i);
        scanf("%d", & X[i]);
    }
    
    for(int i = 0; i < 20; i++) {
        for(j = i + 1; j < 20; j++) {
            if(X[i] > X[j]) {
                temp = X[j];
                X[i] = X[j];
                X[j] = temp;
            }
        }
    }
    for(int i = 0; i < 20; i++) {
        printf("\n%d", X[i]);
    }
    return 0;
}

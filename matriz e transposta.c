#include <stdio.h>

int main()
{   
    int matriz[5][3];
    int transposta[3][5];
    
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 3; j++) {
            printf("Matriz[%d][%d]: ", i, j);
            scanf("%d", & matriz[i][j]);
        }
    }
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 3; j++) {
            transposta[j][i] = matriz[i][j];
        }
    }
    
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%4d", matriz[i][j]);
        }
    }
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 5; j++) {
            printf("%4d", transposta[i][j]);
        }
    }
    return 0;
}

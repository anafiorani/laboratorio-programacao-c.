#include <stdio.h>

int main(void)
{
    int numeros[2][2] = {
        {21, 25},
         {4, 1}
    };
    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", numeros[i][j]);
        }
        printf("\n");
    }
    return 0;
}
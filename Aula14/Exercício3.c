#include <stdio.h>

int main(void)
{
    int numeros[3][3] = {
        {2, 3, 4},
        {6, 1, 8},
        {9, 7, 1}
    };
    
    int soma = 0;
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            soma = soma + numeros [i][j];
        }
        printf("\n");
    }
    printf("A soma dos elementos e: %d\n", soma);
    return 0;
}
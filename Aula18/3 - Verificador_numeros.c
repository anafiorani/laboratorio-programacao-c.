#include <stdio.h>

int verificarPar(int numero){
    
    if (numero % 2 == 0){
        return 1;
    } else {
        return 0;
    }
    
}

int main(void){
    
    int numero;
    
    printf("===== VERIFICADOR DE NÚMEROS ===== \n");
    printf("\n");
    
    printf("Digite um número: ");
    scanf("%d", &numero);
    
    printf("\n");
    
    if (verificarPar(numero) == 1){
        printf("O número %d é par.\n", numero);
    } else {
        printf("O número %d é ímpar.\n", numero);
    }
    
    return 0;
    
}
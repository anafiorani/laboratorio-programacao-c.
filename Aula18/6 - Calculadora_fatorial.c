#include <stdio.h>

int calcularFatorial(int numero){
    
    int resultado = 1;
    
    for (int i = 1; i <= numero; i++){
        resultado = resultado * i;
    }
    
    return resultado;
    
}

int main(void){
    
    int numero;
    
    printf("===== CALCULADORA DE FATORIAL ===== \n");
    printf("\n");
    
    printf("Digite um número entre 0 e 12: ");
    scanf("%d", &numero);
    
    if (numero < 0 || numero > 12){
        printf("Número inválido!\n");
    } else {
        printf("\n");
        printf("Fatorial de %d = %d\n", numero, calcularFatorial(numero));
    }
    
    return 0;
    
}
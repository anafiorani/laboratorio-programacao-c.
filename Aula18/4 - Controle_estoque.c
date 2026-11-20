#include <stdio.h>

int dobro(int quantidade){
    
    return quantidade * 2;
    
}

int main(void){
    
    int quantidade;
    int resultado;
    
    printf("===== CONTROLE DE ESTOQUE ===== \n");
    printf("\n");
    
    printf("Quantidade inicial: ");
    scanf("%d", &quantidade);
    
    resultado = dobro(quantidade);
    
    printf("\n");
    printf("Quantidade após duplicação: %d\n", resultado);
    
    return 0;
    
}
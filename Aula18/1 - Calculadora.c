#include <stdio.h>

void exibirMenu(void){
    
    printf("===== CALCULADORA ===== \n");
    printf("\n");
    printf("1 - Somar\n");
    printf("2 - Subtrair\n");
    printf("3 - Multiplicar\n");
    printf("4 - Dividir\n");
    printf("0 - Sair\n");
    printf("\n");
}

    float somar(float n1, float n2){
        return n1 + n2;
    }       

    float subtrair(float n1, float n2){
        return n1 - n2;
    }

    float multiplicar(float n1, float n2){
        return n1 * n2;
    }

    float dividir(float n1, float n2){
        return n1 / n2;
    }

    int main(void){
    
    int opcao;
    float numero1;
    float numero2;
    
    do{
        
        exibirMenu();
        
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        
        if (opcao >= 1 && opcao <= 4){
            
            printf("\n");
            printf("Primeiro numero: ");
            scanf("%f", &numero1);
            
            printf("Segundo numero: ");
            scanf("%f", &numero2);
            
            printf("\n");
            
            switch(opcao){
                
                case 1:
                    printf("Resultado: %.2f\n", somar(numero1, numero2));
                    break;
                    
                case 2:
                    printf("Resultado: %.2f\n", subtrair(numero1, numero2));
                    break;
                    
                case 3:
                    printf("Resultado: %.2f\n", multiplicar(numero1, numero2));
                    break;
                    
                case 4:
                    if (numero2 == 0){
                        printf("Erro: divisao por zero!\n");
                    } else {
                        printf("Resultado: %.2f\n", dividir(numero1, numero2));
                    }
                    break;
            }
            
        } else if (opcao != 0){
            printf("Opcao invalida!\n");
        }
        
        printf("\n");
        
    } while(opcao != 0);
    
    printf("Calculadora encerrada!\n");
    
    return 0;
}

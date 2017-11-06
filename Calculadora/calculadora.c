#include <stdio.h>

int main(){
    
    float num1, num2, resultado;
    char op;
    char sair = 'c';

    while(sair == 'c'){
        printf("\n\nPrimeiro Nº = ");
        scanf("%f", &num1);

        printf("\nOperador Aritimético = ");
        scanf("%s", &op);

        printf("\nSegundo Nº = ");
        scanf("%f", &num2);

        switch(op){
            case '+':
                resultado = num1 + num2;
                printf("\n\n %.2f + %.2f = %.2f \n\n", num1, num2, resultado);
                break;

            case '-':
                resultado = num1 - num2;
                printf("\n\n %.2f - %.2f = %.2f \n\n", num1, num2, resultado);
                break;

            case '*':
                resultado = num1 * num2;
                printf("\n\n %.2f x %.2f = %.2f \n\n", num1, num2, resultado);
                break;

            case '/':
                resultado = num1 / num2;
                printf("\n\n %.2f / %.2f = %.2f \n\n", num1, num2, resultado);
                break;

            default:
                printf("\n\n Operador Inválido! Operadores válidos são (+, -, /, *) \n\n");
                break;
                 
        }
        
            printf("(c) pra continuar (n) para sair...\n\n");
            scanf("%s", &sair);
    }
}
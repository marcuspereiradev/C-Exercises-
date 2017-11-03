#include <stdio.h>

int main(){
    
    double num1;
    double num2;
    int operador;
 
   while("true"){
        
    printf("Informe o operador aritimético! \n");
    printf("1 para somar - 2 para subtrair - 3 para dividir - 4 para multiplicar. \n\n");
    scanf("%d", &operador);
        
        if(operador <= 0 || operador > 4){
            printf("%d é um operador aritimético inválido!\n\n", operador);
            continue;
        }

    printf("Informe o primeiro número: \n");
    scanf("%lf", &num1);
   
    printf("Informe o segundo número: \n");
    scanf("%lf", &num2);
        
        if(operador == 1){
            double soma = num1 + num2;
            printf("A soma é %.1f\n\n", soma);
            break;
        }
        if(operador == 2){
            double subt = num1 - num2;
            printf("A subtração é %.1f\n\n", subt);
            break;
        }
        if(operador == 3){
            double divi = num1 / num2;
            printf("A divisão é %.1f\n\n", divi);
            break;
        }
        if(operador == 4){
            double multi = num1 * num2;
            printf("A multiplicação é %.1f\n\n", multi);
            break;
        }
           
    }
}
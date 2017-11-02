
#include <stdio.h>

int main(){
    int num1;
    int num2;
    
    printf("Informe o valor de X ");
    scanf("%d", &num1);
    printf("Informe o valor de Y ");
    scanf("%d", &num2);
    
    int mult = num1*num2;
    int resultado = mult;
    
    printf("O resultado é %d", resultado);
}
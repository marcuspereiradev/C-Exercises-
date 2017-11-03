#include <stdio.h>

int main(){
    
    int numero;
    
    printf("Tabuada de quanto? : ");
    scanf("%d", &numero);
    
    for(int i = 0; i <= 10; i++){
        
        int resultado = numero * i;
        printf("%d x %d = %d\n", numero, i, resultado);
    }
}
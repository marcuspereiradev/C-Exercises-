#include <stdio.h>

int main(){
    
    char conteudo = 'o';
    int quantidadeLinha;
    
    printf("\n\nValor da largura N: ");
    scanf("%d", &quantidadeLinha);
    printf("\n");
    
    for(int i = 1; i <= quantidadeLinha; i++){
        
        for(int j = 1; j <= i; j++){
            
            if(i == quantidadeLinha || j == 1 || j == i){
                printf("%c ", conteudo);    
            }else{
                printf("  ");
            }
            
            
        }
   
        printf("\n");
        
    }
    
    
}
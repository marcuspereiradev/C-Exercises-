#include <stdio.h>

int main(){
    
    char conteudo = 'o';
    int quantidadeLinha;
    int quantidadeColuna;
    
    printf("\n\nValor da largura N: ");
    scanf("%d", &quantidadeLinha);
    printf("\nValor do comprimento M: ");
    scanf("%d", &quantidadeColuna);
    printf("\n\n");
    
    for(int i = 1; i <= quantidadeColuna; i++){
        
        printf("%c ", conteudo);
        
     }
    
    printf("\n");
    
    for (int j = 1; j <= 2; j++){
        for(int i = 1; i <= quantidadeColuna; i++){

            if(i == 1 || i == quantidadeColuna){
                printf("%c ", conteudo);
            }else{
                printf("  ");
            }

        }
        
    printf("\n");
    }
    
    
    for(int i = 1; i <= quantidadeColuna; i++){
        
        printf("%c ", conteudo);
        
     }
    
    printf("\n\n");
    
}
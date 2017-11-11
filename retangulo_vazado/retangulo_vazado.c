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
    
    for(int i = 1; i <= quantidadeLinha; i++){
    
        if(i == 1 || i == quantidadeLinha){
            for(int j = 1; j <= quantidadeColuna; j++){

            printf("%c ", conteudo);

        
            }
            
            
        }else{
            for(int j = 1; j <= quantidadeColuna; j++){
                if(j == 1 || j == quantidadeColuna){
                    printf("%c ", conteudo);
                }else{
                    printf("  ");
                }
            }
        }
        
        printf("\n");
        
    }
    
}
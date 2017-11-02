#include <stdio.h>

int main() {
    printf("*******************************************\n");
    printf("* Bem vindo ao nosso jogo de advinhação *\n");
    printf("*******************************************\n");
    
    int numeroSecreto = 42;
    int chute;       
    int tentativas = 1;
    
    while("true"){
        
        printf("Tentativa %d\n", tentativas);
        printf("Qual é o seu chute? ");
        scanf("%d", &chute);
        printf("Seu chute foi %d\n", chute);
        
        if(chute < 0){
            printf("Você não pode chutar números negativos!\n\n");
            continue;
        }

        int acertou = chute == numeroSecreto;
        int maior = chute > numeroSecreto;
        
        if(acertou){
            printf("Parabéns! Você acertou!\n");
            printf("Jogue de novo, você é um bom jogador!\n\n");
            break;
        }

            else if(maior){
                printf("Seu chute foi maior que o número secreto!\n\n");
            }else{

                printf("Seu chute foi menor que o número secreto!\n\n");
            }
        tentativas++;
      
    }
   
    printf("FIM DO JOGO!\n\n");
    printf("Você acertou em %d tentativas\n\n", tentativas);
}
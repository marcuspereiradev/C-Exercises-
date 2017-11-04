#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    printf("*****************************************\n");
    printf("* Bem vindo ao nosso jogo de advinhação *\n");
    printf("*****************************************\n");
    
    int segundos = time(0);
    srand(segundos);
    
    int numeroGrande = rand();
    
    int numeroSecreto = numeroGrande % 100;
    int chute;       
    int tentativas = 1;
    double pontos = 1000;
    int acertou = 0;
    int nivel;
    
        printf("\n\n");
        printf("          P  /_\\  P                              \n");
        printf("         /_\\_|_|_/_\\                            \n");
        printf("     n_n | ||. .|| | n_n         Bem vindo ao     \n");
        printf("     |_|_|nnnn nnnn|_|_|     Jogo de Adivinhação! \n");
        printf("    |\" \"  |  |_|  |\"  \" |                     \n");
        printf("    |_____| ' _ ' |_____|                         \n");
        printf("          \\__|_|__/                              \n");
        printf("\n\n");

    printf("Qual o nível de dificuldade?\n");
    printf("(1) Fácil (2) Médio (3) Difícil\n\n");
    printf("Escolha: ");
    scanf("%d", &nivel);
    
    int numeroDeTentativas;
    
    switch(nivel){
        case 1: numeroDeTentativas = 20;
            break;
            
        case 2: numeroDeTentativas = 15;
            break;
            
        default: numeroDeTentativas = 6;
            break;
    }
    
    for(int i = 1; i <= numeroDeTentativas; i++){
        
        printf("Tentativa %d\n", tentativas);
        printf("Qual é o seu chute? ");
        scanf("%d", &chute);
        printf("Seu chute foi %d\n", chute);
        
        if(chute < 0){
            printf("Você não pode chutar números negativos!\n\n");
            continue;
        }

        acertou = chute == numeroSecreto;
        int maior = chute > numeroSecreto;
        
        if(acertou){
            break;
        }

            else if(maior){
                printf("Seu chute foi maior que o número secreto!\n\n");
            }else{

                printf("Seu chute foi menor que o número secreto!\n\n");
            }
        tentativas++;
        
        double pontosPerdidos = (abs)(chute - numeroSecreto) / (double)2;
        pontos = pontos - pontosPerdidos;
      
    }
   
    printf("FIM DO JOGO!\n\n");
    
    if(acertou) {
    
        printf("             OOOOOOOOOOO               \n");
        printf("         OOOOOOOOOOOOOOOOOOO           \n");
        printf("      OOOOOO  OOOOOOOOO  OOOOOO        \n");
        printf("    OOOOOO      OOOOO      OOOOOO      \n");
        printf("  OOOOOOOO  #   OOOOO  #   OOOOOOOO    \n");
        printf(" OOOOOOOOOO    OOOOOOO    OOOOOOOOOO   \n");
        printf("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  \n");
        printf("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  \n");
        printf("OOOO  OOOOOOOOOOOOOOOOOOOOOOOOO  OOOO  \n");
        printf(" OOOO  OOOOOOOOOOOOOOOOOOOOOOO  OOOO   \n");
        printf("  OOOO   OOOOOOOOOOOOOOOOOOOO  OOOO    \n");
        printf("    OOOOO   OOOOOOOOOOOOOOO   OOOO     \n");
        printf("      OOOOOO   OOOOOOOOO   OOOOOO      \n");
        printf("         OOOOOO         OOOOOO         \n");
        printf("             OOOOOOOOOOOO              \n");
        printf("\nParabéns! Você acertou!\n");
        printf("Você fez %.2f pontos. Até a próxima!\n\n", pontos);
    
     }else{
    
            printf("       \\|/ ____ \\|/    \n");   
            printf("        @~/ ,. \\~@      \n");   
            printf("       /_( \\__/ )_\\    \n");   
            printf("          \\__U_/        \n");
            printf("\nVocê perdeu! Tente novamente!\n\n");
        }
    
}
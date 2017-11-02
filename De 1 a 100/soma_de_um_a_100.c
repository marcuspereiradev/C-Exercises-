#include <stdio.h>

int main(){
    int num = 0;
    
    for(int i = 1; i <=100; i++){ 
        num = num + i;   
    }
    
    printf("A soma é %d ", num);
}
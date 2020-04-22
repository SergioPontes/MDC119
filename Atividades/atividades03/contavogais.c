#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int conta_vogais(char *ptr){
    int quantidade = 0;

    while(*ptr != 0){
        
        if(strchr("AaEeIiOoUu", *ptr)){
        quantidade ++;
        ptr++;
        }
        else{
            ptr++;
        }
    }

    return(quantidade);
}

int main(int argc, char const *argv[]){

    int quantidade;
    char frase[50];

    printf("Digite a frase: \n -");
    scanf("%s", frase);
    quantidade = conta_vogais(frase);
    printf("\n Quantidade de vogais na frase: \n\t -> %i\n", quantidade);
    
    return 0;
}
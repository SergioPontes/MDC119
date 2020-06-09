#include <stdio.h>

int main() {

FILE *arquivo;

arquivo = fopen("arquivo.txt","a+");

if(arquivo == NULL){
    printf("Erro ao abrir o arquivo");
}
printf("precionar um arquivo......");
getchar();

fclose(arquivo);

return 0;
}
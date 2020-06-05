#include <stdio.h>

int main() {

FILE *arquivo;

arquivo = fopen("C:\\Users\\sergi\\Desktop\\IESB demonio\\apc\\MDC119\\Atividades\\atividades06\\arquivoBIN.bin","wb");

if(arquivo == NULL){
    printf("Erro ao abrir o arquivo");
}
printf("precionar um arquivo......");
getchar();

if(!feof(arquivo)){
    printf("Fim do arquivo encontrado");
    return 1;
    
}

fclose(arquivo);

return 0;
}
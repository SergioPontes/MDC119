#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
FILE *arq;
int i=0;
char nome[30];
char matricula[10];
arq= fopen("alunoss.txt", "w");
if (arq == NULL)  
  {
     printf("Problemas na abertura do arquivo\n");
     return 0;
}


printf("matricula\n ");
memset(matricula, '\0', sizeof(matricula));
scanf("%s",matricula);


while (strcmp("0", matricula)){

    printf("nome\n ");
    memset(nome, '\0', sizeof(nome));
    scanf("%s",nome);

    fprintf(arq,"%10s\t%30s\n",matricula,nome);
    
 
    printf("matricula\n ");
    memset(matricula, '\0', sizeof(matricula));
    scanf("%s",matricula);
     

//fprintf no formato %10s\t%30s\n.
}
fclose(arq);
arq= fopen("alunoss.txt", "r");
while (fscanf (arq,"%10s\t%30s", matricula, nome) != EOF) {

printf("%s - %s\n",matricula,nome);
}

return 0;
}
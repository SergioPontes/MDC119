#include<stdio.h>

int main(int argc, char const *argv[])
{
FILE *arq;
int i =0;
char nome[30];
char nom[30];
char matricula[10];

char c;
arq = fopen("alunoss.txt","w");
if (arq == NULL)  
  {
     printf("Problemas na abertura do arquivo\n");
     return 0;
}
printf("matricula\n ");
memset(matricula, '\0', sizeof(matricula));
scanf("%s",matricula);

    

while(strcmp("0", matricula)){

     fprintf(arq,"%s\n",matricula);

     printf("nome\n ");
     memset(nome, '\0', sizeof(nome));
     scanf("%s",nome);


    fprintf(arq,"%s\n",nome);
 
    printf("matricula\n");
    memset(matricula, '\0', sizeof(matricula));
    scanf("%s",matricula);

}
fclose(arq);
arq = fopen("alunoss.txt","r");
 while (fscanf (arq,"%10s\t%30s", matricula, nome) != EOF) {
     printf("%s - %s\n",matricula,nome);
}
fclose(arq);
return 0;
}


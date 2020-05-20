#include<stdio.h>

int main(int argc, char const *argv[])
{
FILE *arq;
int i =0;
char nome[30];
char matricula[10];
arq = fopen("aluno.dat","w+b");
if (arq == NULL)  
  {
     printf("Problemas na abertura do arquivo\n");
     return 0;
}
printf("matricula\n");
memset(matricula, '\0', sizeof(matricula));
scanf("%s",matricula);

    for(i=0;i<10;i++){
     fwrite(matricula,1,sizeof(matricula) , arq);
}
while(strcmp("0", matricula)){

     printf("nome\n");
     memset(nome, '\0', sizeof(nome));
     scanf("%s",nome);

   
    fwrite(nome,1,sizeof(nome) , arq);
  

    printf("matricula\n");
    memset(matricula, '\0', sizeof(matricula));
    scanf("%s",matricula);

  
     fwrite(matricula,1,sizeof(matricula) , arq);
   
}
fclose(arq);
    fopen("aluno.dat","r+b");

while(!feof(arq)){
    fread(&matricula,sizeof(matricula),1,arq);
     printf("Matricula dos alunos:\n %s \n",matricula);
}
while(!feof(arq)){
    fread(&nome,sizeof(nome),1,arq);
     printf("Nomes dos alunos :\n %s \n",nome);

}  
fclose(arq);
return 0;
}

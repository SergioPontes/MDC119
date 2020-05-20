
#include<stdio.h>
#include<stdlib.h>
int main(){
FILE *arq;
int i=0;
char nome[30];
char matricula[10];
arq = fopen("C:\\Users\\sergi\\Desktop\\IESB demonio\\apc\\MDC119\\Atividades\\atividades07\\aluno.txt", "w");

if (arq == NULL)  
  {
     printf("Problemas na abertura do arquivo\n");
     return 0;
}
printf("matricula\n");
scanf("%s",matricula);
while(matricula[0]!='0'){
       printf("nome \n");
    scanf("%s",nome);
for(i =0;i<= 10;i++){
	fputc(matricula[i],arq);
}    
for(i =0;i<= 30;i++){
	fputc(nome[i],arq);
}    
    printf("matricula\n");
    scanf("%s",matricula);   
    
}
i=0;
//for(i=0;i<=10;i++){
	//int(matricula[i]!='0'){
		//i = 10;
	//}
	//fputc(matricula[i], arq);
//}
i=0;
while(matricula[i]!='0'){
fputc(matricula[i], arq);
i++;
}
//for(i=0;i<=30;i++){
	//fputc(nome[i], arq);
//}
i=0;
while(nome[i]){
fputc(nome[i], arq);
i++;
}
fclose(arq);
return 0;
}

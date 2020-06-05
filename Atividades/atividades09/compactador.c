#include<stdio.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
char x,y;
int i;
FILE *saida;
FILE *origem;
origem = fopen("origem.txt","r");
saida = fopen("saida.txt","w");
if(origem == NULL||saida ==NULL){
    printf("o arquivo teve problema ao abrir!");
}
x=fgetc(origem);
y=x;
while(x!=EOF){  
if(x==y){
    i++; 
}
else if(x!=y){
     if(isdigit(i)&&i>1){
    fprintf(saida,"%d@%c",i,y); 

        i=1; 
    }else if(isdigit(i)&&i<=1){
      fputc(y,saida);
      i=1;

    }else
        fprintf(saida,"%d%c",i,y);
      
        i=1;
    }

    y=x;
    x=fgetc(origem);

}
   if(isdigit(i)&&i>1){
    fprintf(saida,"%d@%c",i,y); 

    
    }else if(isdigit(i)&&i<=1){
      fputc(y,saida);
      

    }else{
        fprintf(saida,"%d%c",i,y);
    }


    return 0;
}

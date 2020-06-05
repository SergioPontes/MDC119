#include<stdio.h>
#include<stdlib.h>

int main(){
FILE *origem;
FILE *saida;
origem=fopen("origem.txt","r");
saida=fopen("saida.txt","w");
char A,B;
int i=0;



A=fgetc(origem);
B=A;
while(A!=EOF){  
if(A==B){
    i++; 
}
else if(A!=B){
     if((B=='0'||B=='1'||B=='2'||B=='3'||B=='4'||B=='5'||B=='6'||B=='7'||B=='8'||B=='9')&&i>1){
    fprintf(saida,"%d@%c",i,B); 

        i=1; 
    }else if((B=='0'||B=='1'||B=='2'||B=='3'||B=='4'||B=='5'||B=='6'||B=='7'||B=='8'||B=='9')&&i<=1){
      fputc(B,saida);
      i=1;

    }else
        fprintf(saida,"%d%c",i,B);
      
        i=1;
    }

    B=A;
    A=fgetc(origem);

}
   if((B=='0'||B=='1'||B=='2'||B=='3'||B=='4'||B=='5'||B=='6'||B=='7'||B=='8'||B=='9')&&i>1){
    fprintf(saida,"%d@%c",i,B); 

    
    }else if(B=='0'||B=='1'||B=='2'||B=='3'||B=='4'||B=='5'||B=='6'||B=='7'||B=='8'||B=='9'&&i<=1){
      fputc(B,saida);
      

    }else
        fprintf(saida,"%d%c",i,B);
      

    
return 0;
}
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <locale.h>


int main(){

 setlocale(LC_ALL, "Portuguese");


int vetor[10]={1,2,3,4,5,6,7,8,9,10}; 
int i=0,numero=0;



for (i=0;i<10;i++){
	printf(" \n a cor do resistor %d \n",vetor[i]);

}
printf("\n_______________________________________________________________________________________________________\n");
for (i=10;i>=0;i--){
	printf(" \n a cor do resistor %d \n",vetor[i]);
}
return 0;

}

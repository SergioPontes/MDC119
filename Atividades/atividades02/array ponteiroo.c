#include<stdio.h>
#include<stdlib.h>
#include <locale.h>

int main(){

 	setlocale(LC_ALL, "Portuguese"); 
	
	char str[30]="A existencia é uma mentira";
	char *ptr;
	ptr=str;
	
	while(*ptr!=0){
		printf("%c",*ptr);
		ptr++;
	}
return 0;
}

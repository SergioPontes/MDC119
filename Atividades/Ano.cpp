#include<stdio.h>
#include<stdlib.h>
#include <locale.h>

int main(){
	
 setlocale(LC_ALL, "Portuguese");

	int ano=0,r=0;
	printf("digite o ano\n ");
	scanf("%d",&ano);
	
	if(ano%4==0){
		printf("\n ano bisesto");
	}
	else{
		printf("\n ano não bisesto");
	}
	system ("pause");
	return 0;
}


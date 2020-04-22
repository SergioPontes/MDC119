#include <stdio.h>
#include <stdlib.h>
#include <string.h>


union u_numero_inteiro 
{
	char caracter;
	short int inteiro_curto;
	int inteiro;
	long int inteiro_longo;	
};
int main(){	
union u_numero_inteiro numero;

numero.caracter = 'g';
printf("caracter = %c \n",numero.caracter);
numero.inteiro_curto = 6;
printf("curto = %i \n",numero.inteiro_curto);
numero.inteiro = 263;
printf("inteiro = %i\n",numero.inteiro);
numero.inteiro_longo = 1010011010;
printf("longo = %i\n",numero.inteiro);

return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

union uniao_t {
 	char nome[30];
 	float peso ;
 	float preco;
 	float volume;
} u_produto;
struct estrutura_t {
 	char nome[30];
 	float peso ;
 	float preco;
 	float volume;
} s_produto;
struct s_item {
	char nome[30];
 	float preco;
 	union {
 		float peso;
 		float volume;
	} 
} produto3,produto4;
int main( ) {
 printf("Tamanho da união: %d\n", sizeof(u_produto));
 printf("Tamanho da estrutura: %d\n", sizeof(s_produto));
 
 produto3.peso = 72.2;//f
 produto4.volume = 77.7;//f
 
 printf("caracter = %.2f \n",produto3.peso);
 printf("caracter = %.2f \n",produto4.volume);
 printf("\n Size:\t%d\tValue:\t%.2f", sizeof(produto3), produto3.peso);
 return 0;
}

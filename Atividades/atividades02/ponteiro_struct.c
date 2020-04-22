#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct s_aluno
{
	char nome[30];
	int matricula;
	float media;	
}aluno;
int main()
{
struct s_aluno aluno, *ptr;
ptr = &aluno;
 strcpy(ptr->nome, "sergio");
ptr->media = 7.9;
ptr->matricula = 1010011010;

	printf("nome do aluno %s \n",ptr->nome);
	printf("nome do aluno %d \n",ptr->matricula);
	printf("nome do aluno %.2f \n",ptr->media);

return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 struct funcionario_t {
    char nome[50];
    double salario;
    char admissao[10];
};
int main(int argc, char const *argv[]){

    int i=0, total, p;
    struct funcionario_t funcionario[50];

    funcionarios (funcionario[100]);

    do{
        fflush(stdin);

        p = i + 1;
        printf("\nNome do %i� funcionario:", p);
        scanf("%s", &funcionario[i].nome);

        printf("Salario do %i� funcionario:", p);
        scanf("%lf", &funcionario[i].salario);

        printf("Admissao do %i� funcionario:", p);
        scanf("%s", &funcionario[i].admissao);

        i = i + 1;
        total++;
    }while(funcionario[i].nome != "0");

    printf("\n\nTotal de funcionarios: %i \n", total);

    for(i=0;i<total;i++){
        printf("Nome do %i� funcionario: %s \n", i, funcionario[i].nome);
        printf("Salario do %i� funcionario: %lf \n", i, funcionario[i].salario);
        printf("Admissao do %i� funcionario: %s \n", i, funcionario[i].admissao);
    };

    return 0;
}

#include <stdio.h> 

int main(int argc, char const *argv[]){

    int i;
    int funcionarios[7][2]= {1111,30001000,2222,30002000,3333,30003000,4444,30004000,5555,30005000,6666,30006000,7777,30007000};

    int matricula;
    printf("Digite a matricula do funcionario:\n-");
    scanf("%i", &matricula);

    for(i=0;i<7;i++){
        if(matricula==funcionarios[i][1]){
            printf("Funcionario: %i\n", funcionarios[i][0]);
        }
    }
   // windows only system("pause");

    return 0;
}
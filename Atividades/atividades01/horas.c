#include <stdio.h>
 
 int main() {
     int segudos;
  printf("digite a quantidade de segundos que voce possue: ");
    scanf("%d",&segudos);
        int horas=segudos/3600;
        segudos= segudos%3600;
        int minutos= segudos/60;
        segudos= segudos%60;
    

    printf("resultado em horas: %d",horas);
    printf("\nresultado em horas: %d",minutos);
    printf("\nresultado em horas: %d",segudos);
    return 0;

 }
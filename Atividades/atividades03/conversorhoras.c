# include <stdio.h>

int converte_hhmmss_em_segundos(int h,int m,int s){
int hs,ms,resulte;
    hs = (h*3600);
    ms = (m*60);
    resulte = (hs+ms+s);
return (resulte);
}
int main() {
int h,m,s;
int seguntos;
    printf("digite as horas \n");
    scanf("%d", &h);

    system("cls");  
    printf("digite os minutos \n");
    scanf("%d",&m);

    system("cls");  
    printf("digite os seguntos \n");
    scanf("%d",&s);
    system("cls");  
seguntos =converte_hhmmss_em_segundos(h,m,s);
printf("A quantidade de segundo %d",seguntos);
    return 0;
}
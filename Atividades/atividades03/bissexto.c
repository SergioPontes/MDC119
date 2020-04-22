# include <stdio.h>
# include <locale.h>

int is_bissexto(int i){
    if (i % 4 == 0 && (i % 400 == 0 || i % 100 != 0)){
     return(1);
    }
    else{
    return(0);
    }
}
int main() {
	setlocale(LC_ALL, "Portuguese");

    int i;
    
    int resultado;
printf("Digite o número do ANO");
scanf("%d",&i);
resultado = is_bissexto(i);

if (resultado == 1){
    printf("O ano é bissexto");
}
else if (resultado == 0){
    printf("O ano não é bissexto");
}
    return 0;
}
#include <stdlib.h>
#include <stdio.h>

int fibonacci(int n){
    int res;

    if(n>2){
        return(res=(fibonacci(n-1) + fibonacci(n-2)));
    }
    else{
        return(res=1);
    }
}

int main(int argc, char const *argv[]){
    int n, i, res=0;

    printf("\nDigite o valor de n:\n -");
    scanf("%i", &n);
    printf("\n");

    for(i=1;i<n+1;i++){
        printf("%i�->%i\n",i, res);
        res = fibonacci(i);
    }
    printf("\n");
    
    return 0;
}

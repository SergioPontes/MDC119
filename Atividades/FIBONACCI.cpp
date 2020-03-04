#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
	int a = 0,b=1 ,r;
	int i=0;

	
for(i=0;i<=10;i++)
{	
    r=a+b;
    b=a;
    b=r;
	printf("%d FIBONACCI =%d\n ",i,r);

}
system ("pause");
return 0;	
}

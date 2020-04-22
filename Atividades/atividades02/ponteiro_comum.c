#include <stdio.h>
#include <stdlib.h>
#include <string.h>
  
int main() {
 
 int x = 20;
 int *ptr = &x;
 printf("Valor do x=%i\n", x);
 printf("Valor de *p=%i\n", *ptr);

 return 0;
}

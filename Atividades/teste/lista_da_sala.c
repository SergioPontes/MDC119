 #include <stdio.h >
 #include <stdlib.h>

 int main(void) {

 char c;

 FILE *entrada;

 entrada = fopen("dados.txt", "r");

 if (entrada == NULL) exit(EXIT_FAILURE);

 c = getc( entrada);

 if (c != EOF)

 putc(c, stdout);

 else

 printf("\nO arquivo terminou!");

 fclose(entrada);
 return EXIT_SUCCESS;
 }
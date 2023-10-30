#include <stdio.h>
FILE *fl;char z[99];
main(){fl =fopen ("d.d", "r");fread (z, 1, 10, fl);z[11]='\0';printf ("%s\n", z);fclose(fl);}

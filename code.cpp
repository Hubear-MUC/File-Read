#include <stdio.h>
FILE *f;char z[99];
main(int c,char**v){f=fopen(v[1],"r");if(f==NULL)return(0);fread(z,1,10,f);z[11]='\0';printf("%s\n",z);fclose(f);}

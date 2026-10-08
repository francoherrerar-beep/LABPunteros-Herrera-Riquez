#include <stdio.h>
int main(){
char *s="hola,mundo";
int conteo=0;
char *p=s;
while(!(*p=='\0')){
putchar(*p);
p++;
conteo++;
}
printf("la cantidad de letras es %d\n",conteo);
    return 0;
}
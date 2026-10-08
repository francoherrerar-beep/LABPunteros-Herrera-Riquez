#include <stdio.h>

int main(){

int x=42;
int *p=&x;
int **pp=&p;

printf("el valor de x es %d\n",x);

printf("el valor de *p es %d\n",*p);

printf("el valor de x es %d\n",**pp);

printf("la direccion de x es %p\n",(void*)&x);

printf("el valor de *p es %d\n",*p);

printf("la direccion  de p es %p\n",(void*)&p);

printf("la direccion  de pp es %p\n",(void*)&pp);

*p=100;
 printf("el  nuevo valor de x despues de p es %d\n",x);
 
**pp=300;
printf("el  nuevo valor de x  de pp es %d\n",x);

    return 0;
}
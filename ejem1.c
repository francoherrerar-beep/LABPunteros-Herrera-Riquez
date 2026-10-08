#include <stdio.h>

//Parametro de paso por valor (se crea una copa del espacio de memoria de la variable)
void agregar_unoV(int n){
    n++;
    printf("dentro de la funcion el valor de n es %d\n",n);

}

//parametro de paso por referencia ( se trabaja con la direccion de memoria de la variable)
void agregar_uno(int *n){
    (*n)++;
    printf("dentro de la funcion el valor de n es %d\n",*n);

}


int main(){

    int n=5;

    
    printf("Antes de entrar a la funcion el valor de n es %d\n",n);
    agregar_unoV(n);
    printf("despues de entrar a la funcion el valor de n es %d\n",n);

    printf("Antes de entrar a la funcion el valor de n es %d\n",n);
    agregar_uno(&n);
    printf("despues de entrar a la funcion el valor de n es %d\n",n);


    return 0;
}
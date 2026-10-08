#include <stdio.h>

int main(){
 int v[8]={10,20,30,40,50,60,70,80};
 int *p=v;
int suma=0;

 printf("*p --> %d\n",*p);

 printf("*(p+1) --> %d\n",*(p+1));

 printf("*(p+7) --> %d\n",*(p+7));

  printf("p[3] --> %d\n",*(3+p));

   printf("3[p] --> %d\n",*(3+p));

 printf("p+5-p --> %zu\n",(p+5) -p );

printf("sizeof(int) --> %zu\n",sizeof(int));
printf("recorrido forward:");

for(size_t j=0;j<8;j++){

printf(" %d",*(p+j));

suma=suma+*(p+j);
}
printf("\n");
printf("suma= %d\n",suma);

printf("recorrido reverse:");

for(int j=7;j>-1;j--){

printf(" %d",*(p+j));

}

    return 0;
}
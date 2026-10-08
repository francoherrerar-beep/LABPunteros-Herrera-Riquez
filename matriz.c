#include <stdio.h>

int main(){

    int m[3][4];

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            printf("Ingrese el valor [%d][%d] : ", i, j);
            scanf("%d", &m[i][j]);
        }
    }


    //Imprimir la matriz
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            printf("%4d", m[i][j]);
        }
        printf("\n");
    }

    int suma_fila[3] = {0};
    int suma_columna[4] = {0};
    int suma_total = 0;

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            suma_fila[i] = suma_fila[i] + m[i][j];
            suma_total = suma_total + m[i][j];
        }

        printf("suma de la fila %d : %d \n", i + 1, suma_fila[i]);
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            suma_columna[j] = suma_columna[j] + m[i][j];
        }
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            printf("Suma de la columna %d : %d \n", j + 1, suma_columna[j]);
        }
        break;
    }
    printf("La suma total de elementos es: %d \n", suma_total);

    //MATRIZ TRANSPUESTA
    int n[4][3];
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 3; j++){
            n[i][j] = m[j][i];
        }
    }

    //MOSTRAR LA MATRIZ TRANSPUESTA
    printf("-----------MATRIZ TRANSPUESTA---------- \n");
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 3; j++){
            printf("%4d", n[i][j]);
        }
        printf("\n");
    }


    int k;
    printf("\n");
    printf("Ingrese un numero escalar: ");
    scanf("%d", &k);

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            m[i][j] = k*m[i][j];
        }
    }

    //Mostrar la nueva matriz
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            printf("%4d", m[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    printf("%p \n", &m[0][0]);
    printf("%p \n", &m[0][1]);
    printf("%p \n", &m[1][0]);


    return 0;
}
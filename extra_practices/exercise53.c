#include <stdio.h>
/*Escriba un programa que lea una matriz de enteros desde teclado y la imprima en la pantalla. El número de filas y
columnas de la matriz debe ser leído también desde teclado.*/

void main(){
    int fila, columna,i=0,j=0;
    int matriz[100][100];

    printf("Introduzca el numero de filas: ");
    scanf("%d",&fila);
    printf("Introduzca el numero de columnas: ");
    scanf("%d",&columna);

    printf("\nIntroduzca el elemento: \n");
    for(i=0;i<fila;i++){
        for(j=0;j<columna;j++){
            printf("Fila %d, columna %d: ",i+1,j+1);
            scanf("%d",&matriz[i][j]);
        }
    }

    printf("\nMatriz: \n");
    for(i=0;i<fila;i++){
        for(j=0;j<columna;j++){
            printf("%d ",matriz[i][j]);
        }
        printf("\n");
    }

}

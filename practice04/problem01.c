#include <stdio.h>
/*Escriba un programa que lea desde teclado dos arrays bidimensionales del mismo tamaño el cual también será leído
por teclado. El programa calculará y mostrará por pantalla el array correspondiente a la suma de los arrays
introducidos.*/
void main(){
    int tam1,tam2,i=0,j=0;

    printf("Introduzca el tamanio de los arrays:\n");
    printf("Filas:");
    scanf("%d",&tam1);
    printf("Columnas:");
    scanf("%d",&tam2);

    int v[tam1][tam2],w[tam1][tam2],t[tam1][tam2];

    //array 1
    printf("Introduzca los elementos del array 1:\n");
    for(i=0;i<tam1;i++){
        for(j=0;j<tam2;j++){
            printf("Fila %d, columna %d: ",i+1,j+1);
            scanf("%d",&v[i][j]);
        }
    }

    //array 2
    printf("Introduzca los elementos del array 2:\n");
    for(i=0;i<tam1;i++){
        for(j=0;j<tam2;j++){
            printf("Fila %d, columna %d: ",i+1,j+1);
            scanf("%d",&w[i][j]);
        }
    }

    //array 3
    for(i=0;i<tam1;i++){
        for(j=0;j<tam2;j++){
            t[i][j]=(v[i][j])+(w[i][j]);
        }
    }
    printf("Array 3\n");
    for(i=0;i<tam1;i++){
        printf("\n");
        for(j=0;j<tam2;j++){
            printf("%2d ",t[i][j]);
        }
    }
}

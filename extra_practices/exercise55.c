#include <stdio.h>
/*Escriba un programa que lea por el teclado el número de filas, el número de columnas y los elementos de una matriz
de números decimales y muestre en la pantalla la traspuesta de dicha matriz.*/
#define TAM 100
void main(){
    int nfila,ncolum,i=0,j=0;
    double m[TAM][TAM];
    double tm[TAM][TAM];
    printf("Introduzca el numero de filas: ");
    scanf("%d",&nfila);
    printf("Introduzca el numero de columnas: ");
    scanf("%d",&ncolum);

    printf("\nIntroduzca los elementos de la matriz: \n");
    for(i=0;i<nfila;i++){
        for(j=0;j<ncolum;j++){
            printf("Fila %d, columna %d: ",i+1,j+1);
            scanf("%lf",&m[i][j]);
        }
    }

    printf("\nLa matris es:\n");
    for(i=0;i<nfila;i++){
        for(j=0;j<ncolum;j++){
            printf("%lf ",m[i][j]);
        }
    }

    for(j=0;j<nfila;j++){
        for(i=0;i<ncolum;i++){
            tm[j][i]=m[i][j];
            printf("%lf ",tm[j][i]);
        }
    }
}

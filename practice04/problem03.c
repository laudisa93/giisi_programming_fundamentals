#include <stdio.h>
#include<stdlib.h>
/*Escriba un programa que rellene automáticamente un array bidimensional
cuyo tamaño es leído desde teclado con la
serie de números primos comenzando desde 1 y de tal forma que una vez
agotado el espacio de una fila se pasará a la
siguiente.*/
int esPrimo(int num);
void main(){
    int tam1,tam2;
    printf("Introduzca el tamaño del array:\n");
    printf("Filas:");
    scanf("%d",&tam1);
    printf("Columnas:");
    scanf("%d",&tam2);

    int v[tam1][tam2];
    int num=1,i=0,j=0;

    for(i=0;i<tam1;i++){
        for(j=0;j<tam2;num++){
            if(esPrimo(num)){
                v[i][j]=num;
                j++;
            }

        }
    }

    printf("Array:\n");
    for(i=0;i<tam1;i++){
        printf("\n");
        for(j=0;j<tam2;j++){
            printf("%2d ",v[i][j]);
        }
    }
}

int esPrimo(int num){
    int i=2,primo=1;
    while(primo && i<num){
        if(num%i==0) primo=0;
        i++;
    }
    return primo;
}

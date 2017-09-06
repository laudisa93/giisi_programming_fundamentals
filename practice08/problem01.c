#include <stdio.h>
#include <stdlib.h>

void imprimirTabla(int iFIlas,int iColumnas,int iTabla[][iColumnas]);
void sumarNumero(int iFilas,int iColumnas,int iSumando,int iTabla[][iColumnas]);
int main()
{
    /*
    P1 (60 min).
    a) Escriba una función que reciba una tabla bidimensional de enteros como argumento, así como su número de filas y
    columnas, e imprima por pantalla el contenido de la misma.
    b) Escriba una función que reciba como argumentos una tabla bidimensional de enteros, dos números enteros indicando el tamaño
    de la tabla y un número entero que será sumado a todos los elementos de la tabla.
    c) Crear un programa principal en el que se pruebe el funcionamiento de las funciones de los apartados anteriores. Para ello
    muestre por pantalla la tabla bidimensional antes y después de sumarle un número determinado. ¿Por qué los elementos de la tabla
    quedan modificados a pesar de haber realizado la modificación dentro de una función cuyos argumentos no se pasan por
    referencia?
    */
    int iFilas,iColumnas,iSumando,iContadorFilas,iContadorColumnas;
    printf("Escribe el numero de filas:");
    scanf("%d",&iFilas);
    printf("Escribe el numero de columnas:");
    scanf("%d",&iColumnas);
    int iTabla[iFilas][iColumnas];
    printf("Escribe el numero a sumar: ");
    scanf("%d",&iSumando);
    printf("ELEMENTOS DE LA TABLA:\n");
    for(iContadorFilas=0;iContadorFilas<iFilas;iContadorFilas++){
        for(iContadorColumnas=0;iContadorColumnas<iColumnas;iContadorColumnas++){
            printf("Escribe un numero: ");
            scanf("%d",&iTabla[iContadorFilas][iContadorColumnas]);
        }
    }
    printf("SIN EL CAMBIO:\n");
    imprimirTabla(iFilas,iColumnas,iTabla);
    sumarNumero(iFilas,iColumnas,iSumando,iTabla);
    printf("CON EL CAMBIO:\n");
    imprimirTabla(iFilas,iColumnas,iTabla);

}

void imprimirTabla(int iFilas,int iColumnas,int iTabla[][iColumnas]){
    int iContadorFilas,iContadorColumnas;
    for(iContadorFilas=0;iContadorFilas<iFilas;iContadorFilas++){
        for(iContadorColumnas=0;iContadorColumnas<iColumnas;iContadorColumnas++){
            printf("%d ",iTabla[iContadorFilas][iContadorColumnas]);
        }
        printf("\n");
    }
}


void sumarNumero(int iFilas,int iColumnas,int iSumando,int iTabla[][iColumnas]){
    int iContadorFilas,iContadorColumnas;
    for(iContadorFilas=0;iContadorFilas<iFilas;iContadorFilas++){
        for(iContadorColumnas=0;iContadorColumnas<iColumnas;iContadorColumnas++){
            iTabla[iContadorFilas][iContadorColumnas]+=iSumando;
        }
    }
}

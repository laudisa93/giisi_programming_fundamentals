#include <stdio.h>
#include <stdlib.h>
void funcion(int iFilas,int iColumnas,int iTablaUno[][iColumnas],int iTablaDos[][iColumnas],int iTablaResultante[][iColumnas]);
void mostrarTabla(int iFilas,int iColumnas,int iTabla[][iColumnas]);
void escribirTabla(int iFilas,int iColumnas,int iTabla[][iColumnas]);
int main()
{
    /*
    P6 (60 min). Escriba una función que reciba como argumento tres tablas bidimensionales, y dos argumentos adicionales indicando
    el tamaño de las mismas (las tres tablas serán consideradas del mismo tamaño). Dicha función deberá almacenar en la tercera
    tabla el valor de la suma de las dos primeras tablas que se han pasado como argumentos. Emplee la función desarrollada en el
    apartado a) del Problema 5 para leer las dos tablas a sumar, y la función desarrollada en el apartado a) del Problema 1 para
    mostrar la tabla resultante de la suma por pantalla.
    */
    int iFilas,iColumnas;
    printf("Introduce el numero de filas: ");
    scanf("%d",&iFilas);
    printf("Introduce el numero de columnas: ");
    scanf("%d",&iColumnas);
    int iTablaUno[iFilas][iColumnas],iTablaDos[iFilas][iColumnas],iTablaResultante[iFilas][iColumnas];
    escribirTabla(iFilas,iColumnas,iTablaUno);
    escribirTabla(iFilas,iColumnas,iTablaDos);
    funcion(iFilas,iColumnas,iTablaUno,iTablaDos,iTablaResultante);
    printf("Primera tabla:\n");
    mostrarTabla(iFilas,iColumnas,iTablaUno);
    printf("------------------------\nSegunda tabla:\n");
    mostrarTabla(iFilas,iColumnas,iTablaDos);
    printf("------------------------\nTabla resultante:\n");
    mostrarTabla(iFilas,iColumnas,iTablaResultante);
}

void funcion(int iFilas,int iColumnas,int iTablaUno[][iColumnas],int iTablaDos[][iColumnas],int iTablaResultante[][iColumnas]){
    int iContadorFilas,iContadorColumnas;
    for(iContadorFilas=0;iContadorFilas<iFilas;iContadorFilas++){
        for(iContadorColumnas=0;iContadorColumnas<iColumnas;iContadorColumnas++){
            iTablaResultante[iContadorFilas][iContadorColumnas]=iTablaUno[iContadorFilas][iContadorColumnas]+iTablaDos[iContadorFilas][iContadorColumnas];
        }
    }
}

void mostrarTabla(int iFilas,int iColumnas,int iTabla[][iColumnas]){
    int iContadorFilas,iContadorColumnas;
    for(iContadorFilas=0;iContadorFilas<iFilas;iContadorFilas++){
        for(iContadorColumnas=0;iContadorColumnas<iColumnas;iContadorColumnas++){
            printf("%d",iTabla[iContadorFilas][iContadorColumnas]);
        }
        printf("\n");
    }
}

void escribirTabla(int iFilas,int iColumnas,int iTabla[][iColumnas]){
    int iContadorFilas,iContadorColumnas;
    for(iContadorFilas=0;iContadorFilas<iFilas;iContadorFilas++){
        for(iContadorColumnas=0;iContadorColumnas<iColumnas;iContadorColumnas++){
            printf("Escribe un numero: ");
            scanf("%d",&iTabla[iContadorFilas][iContadorColumnas]);
        }
    }
}

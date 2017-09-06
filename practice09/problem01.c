#include <stdio.h>
#include <stdlib.h>
void existeNumeroPrimo(int iFilas,int iColumnas,int tNumeros[][iColumnas],int *inumFila,int *inumColumna,int *iExistePrimo);
int EsPrimo(int);
int main()
{
    /*
    P1 (60 min). a) Dada una matriz de N filas y M columnas que contiene números enteros, escribir una función que devuelva un valor
    lógico indicando si existe al menos un número primo en dicha matriz. En caso de que exista, la función también devolverá en qué
    posición (fila y columna) se encuentra el primer número primo encontrado. En caso de que no exista ningún número primo en la
    matriz, la función devolverá (-1,-1) como posición. Un número primo es aquél que sólo es divisible por el mismo número y por la
    unidad.
    b) Cree un programa principal para probar el funcionamiento de la función.
    */
    int iFilas,iColumnas,inumFila,inumColumna,iExistePrimo,iContadorFilas,iContadorColumnas;
    printf("Introduce el numero de filas: ");
    scanf("%d",&iFilas);
    printf("Introduce el numero de columnas: ");
    scanf("%d",&iColumnas);
    int tNumeros[iFilas][iColumnas];
    for(iContadorFilas=0;iContadorFilas<iFilas;iContadorFilas++){
        for(iContadorColumnas=0;iContadorColumnas<iColumnas;iContadorColumnas++){
            printf("Introduce un numero (%d,%d): ",iContadorFilas,iContadorColumnas);
            scanf("%d",&tNumeros[iContadorFilas][iContadorColumnas]);
        }
    }
    existeNumeroPrimo(iFilas,iColumnas,tNumeros,&inumFila,&inumColumna,&iExistePrimo);
    printf("\n\n");
    if(iExistePrimo){
        printf("Existe un numero primo en la tabla.");
        printf("\nLa posicion del primer numero primo encontrado es (fila,columna): (%d,%d)",inumFila,inumColumna);
    }else{
        printf("No existe un numero primo en la tabla.");
        printf("\nLa posicion del primer numero primo encontrado es (fila,columna): (%d,%d)",inumFila,inumColumna);
    }
}

void existeNumeroPrimo(int iFilas,int iColumnas,int tNumeros[][iColumnas],int *inumFila,int *inumColumna,int *iExistePrimo)
{
    int iContFilas,iContColumnas;
    *iExistePrimo=0;
    *inumFila=-1;
    *inumColumna=-1;
    for(iContFilas=0; iContFilas<iFilas&&!*iExistePrimo; iContFilas++)
    {
        for(iContColumnas=0; iContColumnas<iColumnas&&!*iExistePrimo; iContColumnas++)
        {
            if(EsPrimo(tNumeros[iContFilas][iContColumnas])){
                *iExistePrimo=1;
                *inumFila=iContFilas;
                *inumColumna=iContColumnas;
            }
        }
    }
}

int EsPrimo(int iNumero)
{
    int iEsPrimo=1,iContador=2;
    while(iContador<iNumero&&iEsPrimo)
    {
        if(iNumero%iContador==0)
            iEsPrimo=0;
        iContador++;
    }
    return iEsPrimo;
}

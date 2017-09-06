#include <stdio.h>
/*
EJ2 (30 min). a) Escriba una función que reciba como argumento tres tablas bidimensionales de enteros, y dos argumentos
adicionales indicando el tamaño de las mismas (las tres tablas serán consideradas del mismo tamaño). Dicha función deberá
almacenar en la tercera tabla el elemento mayor de los elementos correspondientes de las dos primeras tablas que se han pasado
como argumentos. Emplee funciones desarrolladas en problemas anteriores para leer las dos tablas, y mostrar la tabla resultante
por pantalla.
b) Cree un programa principal para probar el funcionamiento de la función.
*/

void rellenarTabla(int iFilas,int iColumnas,int v[][iColumnas]);
void mostrarTabla(int iFilas,int iColumnas,int v[][iColumnas]);
void rellenarTablaMayores(int iFilas,int iColumnas,int v1[][iColumnas],int v2[][iColumnas],int v3[][iColumnas]);

void main()
{
    int iFilas,iColumnas;

    printf("Introduzca el numero de filas: ");
    scanf("%d",&iFilas);
    printf("Introduzca el numero de columnas: ");
    scanf("%d",&iColumnas);
    system("cls");
    int v1[iFilas][iColumnas],v2[iFilas][iColumnas],v3[iFilas][iColumnas];

    printf("RELLENAR LA PRIMERA TABLA:\n");
    rellenarTabla(iFilas,iColumnas,v1);
    system("cls");
    printf("RELLENAR LA SEGUNDA TABLA:\n");
    rellenarTabla(iFilas,iColumnas,v2);
    system("cls");
    printf("\nPrimera Tabla:\n");
    mostrarTabla(iFilas,iColumnas,v1);
    printf("\nSegunda Tabla:\n");
    mostrarTabla(iFilas,iColumnas,v2);
    rellenarTablaMayores(iFilas,iColumnas,v1,v2,v3);
    printf("\nTercera Tabla:\n");
    mostrarTabla(iFilas,iColumnas,v3);

}
void rellenarTabla(int iFilas,int iColumnas,int v[][iColumnas])
{
    int iContFil,iContCol;
    for(iContFil=0; iContFil<iFilas; iContFil++)
    {
        for(iContCol=0; iContCol<iColumnas; iContCol++)
        {
            printf("Introduce el elemento %d de la fila %d: ",iContFil,iContCol);
            scanf("%d",&v[iContFil][iContCol]);
        }
    }
}

void mostrarTabla(int iFilas,int iColumnas,int v[][iColumnas])
{
    int iContFil,iContCol;
    for(iContFil=0; iContFil<iFilas; iContFil++)
    {
        for(iContCol=0; iContCol<iColumnas; iContCol++)
        {
            printf("%d ",v[iContFil][iContCol]);
        }
        printf("\n");
    }
}
void rellenarTablaMayores(int iFilas,int iColumnas,int v1[][iColumnas],int v2[][iColumnas],int v3[][iColumnas])
{
    int iContFil,iContCol;
    for(iContFil=0; iContFil<iFilas; iContFil++)
    {
        for(iContCol=0; iContCol<iColumnas; iContCol++)
        {
            if(v1[iContFil][iContCol]>v2[iContFil][iContCol])
            {
                v3[iContFil][iContCol]=v1[iContFil][iContCol];
            }
            else
            {
                v3[iContFil][iContCol]=v2[iContFil][iContCol];
            }
        }
    }
}

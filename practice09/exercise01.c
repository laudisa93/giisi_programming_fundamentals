/*
EJ1 (90 min). a) Implemente una funci�n llamada mediaDeElemento que reciba una tabla bidimensional de n�meros enteros NxM,
dos n�meros enteros indicando el n�mero de filas y columnas v�lidas de la tabla, y otros dos n�meros enteros indicando los �ndices
de un elemento de dicha tabla. La funci�n deber� de devolver como resultado la media aritm�tica de los valores que rodean
(vertical, horizontal y diagonalmente) al elemento indicado (incluido dicho elemento). Tenga en cuenta que los elementos en los
bordes de la tabla tendr�n menos elementos en su entorno que el resto de elementos.
Ejemplo:
Tabla t
2 6 2
1 3 5
6 3 8
1 1 6
b) Implemente una funci�n, denominada calculaTablaDeMedias que reciba como par�metros dos tablas de tama�o id�ntico, as�
como el n�mero de filas y columnas v�lidas de �stas. La primera tabla ser� de enteros y la segunda de flotantes. La funci�n deber�
rellenar la segunda tabla con la media del entorno de cada elemento de la primera tabla. Para calcular la media del entorno de un
elemento haga una llamada a la funci�n implementada en el apartado anterior. La siguiente figura muestra un ejemplo.
Tabla t Matriz tmedias
c) Cree un programa principal para probar el funcionamiento de la funci�n y procedimiento de los apartados anteriores.
*/

#include <stdio.h>

void rellenarTabla(int iFilas,int iColumnas,int v[][iColumnas]);
void mostrarTabla(int iFilas,int iColumnas,int v[][iColumnas]);
float mediaDeElemento(int iFilas,int iColumnas,int v[][iColumnas],int iIndiceFil,int iIndiceCol);
void calculaTablaDeMedias(int iFilas,int iColumnas,int v[][iColumnas],float vMedias[][iColumnas]);
void main()
{
    int iFilas,iColumnas,iIndiceFil,iIndiceCol;
    float fMedia;
    printf("Introduzca el numero de filas: ");
    scanf("%d",&iFilas);
    printf("Introduzca el numero de columnas: ");
    scanf("%d",&iColumnas);
    system("cls");
    int v[iFilas][iColumnas];
    float vMedias[iFilas][iColumnas];
    rellenarTabla(iFilas,iColumnas,v);
    mostrarTabla(iFilas,iColumnas,v);
    /*
    printf("Introduzca el indice de filas: ");
    scanf("%d",&iIndiceFil);
    printf("Introduzca el indice de columnas: ");
    scanf("%d",&iIndiceCol);
    system("cls");
    fMedia=mediaDeElemento(iFilas,iColumnas,v,iIndiceFil,iIndiceCol);
    */
    calculaTablaDeMedias(iFilas,iColumnas,v,vMedias);
    //printf("\n\nLa media es: %.1f",fMedia);

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
float mediaDeElemento(int iFilas,int iColumnas,int v[][iColumnas],int iIndiceFil,int iIndiceCol)
{
    float fMedia=0,fSum=0;
    int iContFil,iContCol,iCont=0;
    if(iIndiceFil>=1 && iIndiceCol>=1)
    {
        for(iContFil=iIndiceFil-1; iContFil<=iIndiceFil+1; iContFil++)
        {
            for(iContCol=iIndiceCol-1; iContCol<=iIndiceCol+1; iContCol++)
            {
                if(iContCol<iColumnas && iContFil<iFilas)
                {
                    fSum+=v[iContFil][iContCol];
                    //printf("%d + ",v[iContFil][iContCol]);
                    iCont++;
                }
            }
        }
        fMedia=fSum/iCont;
        //printf("/%d",iCont);
    }
    else if(iIndiceFil==0 && iIndiceCol>=1)
    {
        for(iContFil=0; iContFil<=iIndiceFil+1; iContFil++)
        {
            for(iContCol=iIndiceCol-1; iContCol<=iIndiceCol+1; iContCol++)
            {
                if(iContCol<iColumnas && iContFil<iFilas)
                {
                fSum+=v[iContFil][iContCol];
                //printf("%d + ",v[iContFil][iContCol]);
                iCont++;
                }
            }
        }
        fMedia=fSum/iCont;
        //printf("/%d",iCont);
    }
    else if(iIndiceFil>=1 && iIndiceCol==0)
    {
        for(iContFil=iIndiceFil-1; iContFil<=iIndiceFil+1; iContFil++)
        {
            for(iContCol=0; iContCol<=iIndiceCol+1; iContCol++)
            {
                if(iContCol<iColumnas && iContFil<iFilas)
                {
                fSum+=v[iContFil][iContCol];
                //printf("%d + ",v[iContFil][iContCol]);
                iCont++;
                }
            }
        }
        fMedia=fSum/iCont;
        //printf("/%d",iCont);
    }
    else if(iIndiceFil==0 && iIndiceCol==0)
    {
        for(iContFil=0; iContFil<=iIndiceFil+1; iContFil++)
        {
            for(iContCol=0; iContCol<=iIndiceCol+1; iContCol++)
            {
                fSum+=v[iContFil][iContCol];
                //printf("%d + ",v[iContFil][iContCol]);
                iCont++;
            }
        }
        fMedia=fSum/iCont;
        //printf("/%d",iCont);
    }
    return fMedia;
}
void calculaTablaDeMedias(int iFilas,int iColumnas,int v[][iColumnas],float vMedias[][iColumnas])
{
    int iContFil,iContCol;
    for(iContFil=0; iContFil<iFilas; iContFil++)
    {
        for(iContCol=0; iContCol<iColumnas; iContCol++)
        {
            vMedias[iContFil][iContCol]=mediaDeElemento(iFilas,iColumnas,v,iContFil,iContCol);
        }
    }
    printf("\n\n");
    //Mostramos el array de medias
    for(iContFil=0; iContFil<iFilas; iContFil++)
    {
        for(iContCol=0; iContCol<iColumnas; iContCol++)
        {
            printf("%.2f ",vMedias[iContFil][iContCol]);
        }
        printf("\n");
    }
}

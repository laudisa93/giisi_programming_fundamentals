#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    P4 (90 min). Imagine unos resultados de una competici�n deportiva en la que se celebran var�as pruebas, consiguiendo el atleta en
    cada una de ellas una determinada puntuaci�n:
            Dorsal  Prueba 1    Prueba 2    Prueba N
            1       7.90        8.32        6.54
            2       9.23        7.90        8.50
            M       4.56        8.32        5.23
    a) Cree una funci�n que permita leer una tabla de puntuaciones de tipo real como la anterior. Para ello el procedimiento recibir� la
    tabla en la que se guardar�n los datos le�dos y dos par�metros para indicar el n�mero de filas y columnas v�lidas de la misma.
    b) Cree una funci�n que permita mostrar por pantalla, con la misma organizaci�n que se muestra en la tabla anterior, la tabla le�da
    por el procedimiento anterior.
    c) Cree una funci�n que reciba como argumento una tabla unidimensional de tipo real junto a su tama�o y ofrezca como resultado la
    media real de los elementos de la tabla.
    d) Cree una funci�n que reciba una tabla bidimensional y devuelva como par�metro de salida una tabla, cuyos elementos ser�n la
    media de los elementos presentes en cada fila de la tabla bidimensional. Para ello, haga uso de la funci�n implementada en el
    apartado anterior.
    e) Cree una funci�n que devuelva el �ndice del mayor elemento de una tabla unidimensional de reales que recibir� como argumento.
    f) Empleando las funciones desarrolladas en los apartados anteriores, cree un programa que gestione los datos de una competici�n
    deportiva. El programa deber� leer por teclado el n�mero de atletas, el n�mero de pruebas y la tabla de puntuaciones (apartado a),
    y ofrecer por pantalla los datos que se han le�do (apartado b). Posteriormente deber� mostrar la media de la puntaci�n obtenida por
    cada atleta (apartado d), y finalmente indicar el dorsal del atleta que ha obtenido la m�xima puntuaci�n media (apartado e). El
    n�mero m�ximo de atletas y el n�mero de pruebas ser� fijado por constantes simb�licas.
    */
}

void leerDatos(int iFilas,int iColumnas,float fPruebas[][iColumnas])
{
    int iContFilas,iContColumnas;
    for(iContFilas=0; iContFilas<iFilas; iContFilas++)
    {
        printf("Dorsal numero: %d",iContFilas);
        for(iContColumnas=0; iContColumnas<iColumnas; iContColumnas++)
        {
            printf("Introduce nota de la prueba %d:",iContColumnas);
            scanf("%f",&fPruebas[iContFilas][iContColumnas]);
        }
        printf("\n");
    }
}

void imprimirDatos(int iFilas,int iColumnas,float fPruebas[][iColumnas])
{
    int iContFilas,iContColumnas;
    printf("Dorsal  | Pruebas");
    for(iContFilas=0; iContFilas<iFilas; iContFilas++)
    {
        printf("%d  | ",iContFilas);
        for(iContColumnas=0; iContColumnas<iColumnas; iContColumnas++)
        {
            printf("%.2f  ",fPruebas[iContFilas][iContColumnas]);
        }
        printf("\n");
    }
}

void mediaTotalPruebas(int iFilas,int iColumnas,float fPruebas[][iColumnas])
{
    int iContFilas,iContColumnas;
    float fMedia=0;
    for(iContFilas=0; iContFilas<iFilas; iContFilas++)
    {
        for(iContColumnas=0; iContColumnas<iColumnas; iContColumnas++)
        {
            fMedia+=fPruebas[iContFilas][iContColumnas];
        }
    }
    printf("Media total: %.2f",fMedia/(iColumnas*iFilas));
}

void mediaPruebas(int iFilas,int iColumnas,float fPruebas[][iColumnas],float tMedias[])
{
    int iContFilas,iContColumnas;
    float fMedia;
    for(iContFilas=0; iContFilas<iFilas; iContFilas++)
    {
        fMedia=0;
        for(iContColumnas=0; iContColumnas<iColumnas; iContColumnas++)
        {
            fMedia+=fPruebas[iContFilas][iContColumnas];
        }
        tMedias[iContFilas]=fMedia/iColumnas;
    }
}

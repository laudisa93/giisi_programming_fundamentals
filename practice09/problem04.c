#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    P4 (90 min). Imagine unos resultados de una competición deportiva en la que se celebran varías pruebas, consiguiendo el atleta en
    cada una de ellas una determinada puntuación:
            Dorsal  Prueba 1    Prueba 2    Prueba N
            1       7.90        8.32        6.54
            2       9.23        7.90        8.50
            M       4.56        8.32        5.23
    a) Cree una función que permita leer una tabla de puntuaciones de tipo real como la anterior. Para ello el procedimiento recibirá la
    tabla en la que se guardarán los datos leídos y dos parámetros para indicar el número de filas y columnas válidas de la misma.
    b) Cree una función que permita mostrar por pantalla, con la misma organización que se muestra en la tabla anterior, la tabla leída
    por el procedimiento anterior.
    c) Cree una función que reciba como argumento una tabla unidimensional de tipo real junto a su tamaño y ofrezca como resultado la
    media real de los elementos de la tabla.
    d) Cree una función que reciba una tabla bidimensional y devuelva como parámetro de salida una tabla, cuyos elementos serán la
    media de los elementos presentes en cada fila de la tabla bidimensional. Para ello, haga uso de la función implementada en el
    apartado anterior.
    e) Cree una función que devuelva el índice del mayor elemento de una tabla unidimensional de reales que recibirá como argumento.
    f) Empleando las funciones desarrolladas en los apartados anteriores, cree un programa que gestione los datos de una competición
    deportiva. El programa deberá leer por teclado el número de atletas, el número de pruebas y la tabla de puntuaciones (apartado a),
    y ofrecer por pantalla los datos que se han leído (apartado b). Posteriormente deberá mostrar la media de la puntación obtenida por
    cada atleta (apartado d), y finalmente indicar el dorsal del atleta que ha obtenido la máxima puntuación media (apartado e). El
    número máximo de atletas y el número de pruebas será fijado por constantes simbólicas.
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

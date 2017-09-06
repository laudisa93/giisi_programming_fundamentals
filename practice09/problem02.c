#include <stdio.h>
#include <stdlib.h>
void ordenarPorBurbujaAscendentemente(int v[]);
void ordenarPorBurbujaDescendentemente(int v[]);

int main()
{
    /*
    P2 (90 min). a) Escribir una función que ordene una tabla unidimensional de n enteros de menor a mayor. La reordenación
    empezará recorriendo toda la tabla para encontrar el menor de los números. Este número será intercambiado con el primer
    elemento de la tabla, colocando así el menor número al principio de la tabla. El resto de los n-1 elementos de la tabla se recorrerán
    para encontrar el menor, que se intercambiarán con el segundo número. El resto de los n-2 números se recorrerán buscando el
    menor, que se intercambiará con el tercer número, y así sucesivamente, hasta que se haya reordenado la tabla completa.

    b) Crear un programa principal para probar el funcionamiento de la función anterior.
    */
    int iCont;
    int v[10];
    printf("Introduce los 10 elementos del array: \n");
    for(iCont=0; iCont<10; iCont++)
    {
        printf("Introduce numero: ");
        scanf("%d",&v[iCont]);
    }
    ordenarPorBurbujaAscendentemente(v);
    //ordenarPorBurbujaDescendentemente(v);
    for(iCont=0; iCont<10; iCont++)
    {
        printf("%d",v[iCont]);
        printf("\n");
    }
}

void ordenarPorBurbujaAscendentemente(int v[])
{
    int i,j,aux,iCambio=1;
    for(i=0;i<9&&iCambio;i++)
    {
        iCambio=0;
        for(j=9;j>i;j--)
        {
            if(v[j]<v[j-1])
            {
                aux=v[j];
                v[j]=v[j-1];
                v[j-1]=aux;
                iCambio=1;
            }
        }
    }

}
void ordenarPorBurbujaDescendentemente(int v[])
{
    int i,j,aux,iCambios=1;
    for(i=0;i<9&&iCambios==1;i++)
    {
        iCambios=0;
        for(j=9;j>i;j--)
        {
            if(v[j]>v[j-1])
            {
                aux=v[j];
                v[j]=v[j-1];
                v[j-1]=aux;
                iCambios=1;
            }
        }
    }
}

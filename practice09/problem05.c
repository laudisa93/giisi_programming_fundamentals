#include <stdio.h>
#include <stdlib.h>

void devolverValores(int,char[],int *,int *,int *);
int main()
{
    /*
    P5 (30 min). Implementar una función que reciba como argumento una tabla unidimensional de caracteres y devuelva el número de
    vocales, el número de consonantes y el número de dígitos que aparecen en la tabla. Crear un programa principal para probar el
    funcionamiento de la función.
    */

    int iVocales=0,iConsonantes=0,iDigitos=0,iElementos;
    printf("Introduce el numero de caracteres de tu frase: ");
    scanf("%d",&iElementos);
    char cCaracteres[iElementos];
    printf("Introduce una frase: ");
    //fflush(stdin);
    scanf("%s",cCaracteres);
    devolverValores(iElementos,cCaracteres,&iVocales,&iConsonantes,&iDigitos);
    printf("\nNumero de vocales: %d",iVocales);
    printf("\nNumero de consonantes: %d",iConsonantes);
    printf("\nNumero de digitos: %d",iDigitos);
}

void devolverValores(int iElementos,char cCaracteres[],int *iVocales,int *iConsonantes,int *iDigitos)
{
    int iContador=0;
    for(iContador=0;iContador<iElementos;iContador++)
    {
        if(cCaracteres[iContador]=='a'||cCaracteres[iContador]=='e'||cCaracteres[iContador]=='i'||cCaracteres[iContador]=='o'||cCaracteres[iContador]=='u')
            *iVocales+=1;
        else if(cCaracteres[iContador]>'A'&&cCaracteres[iContador]<'z')
            *iConsonantes+=1;
        else
            *iDigitos+=1;
    }
}

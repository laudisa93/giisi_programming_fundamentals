#include <stdio.h>
#include <stdlib.h>
int diasPorMes(int,int);
int fechaValida(int,int,int);
void siguienteFecha(int *,int *,int *);
int main()
{
    /*
    P3 (90 min). a) Implementar una función que reciba dos enteros representando un mes y un año y devuelva el número de días que
    tiene ese mes teniendo en cuenta si el año es bisiesto o no. Un año es bisiesto si es divisible por 4 y no es divisible por 100 ó si es
    divisible por 400.
    b) Implementar una función que reciba tres números enteros representando el día, mes y año y devuelva 1 si la fecha es válida y 0
    en caso contrario. Una fecha se considera válida si cumple:
        1) El año es positivo.
        2) El mes está entre 1 y 12.
        3) El día es mayor o igual que 1 y menor que el número de días que tenga ese mes. Para saber el número de días de un
        mes usar la función del apartado anterior.
    c) Realizar un procedimiento que reciba a través de los parámetros día, mes y año una fecha válida y devuelva a través de los mismos
    parámetros la siguiente fecha válida del calendario. Por ejemplo,
        Entrada         Salida
        31 1 1996       1 2 1996
        28 2 1996       29 2 1996
        31 12 1996      1 1 1997
        2 1 1997        3 1 1997
    d) Realizar un programa principal para probar el funcionamiento de las funciones anteriores
    */
    int iDia,iMes,iAnyo;
    do
    {
        printf("Introduce dia: ");
        scanf("%d",&iDia);
        printf("Introduce mes: ");
        scanf("%d",&iMes);
        printf("Introduce anyo: ");
        scanf("%d",&iAnyo);
    }
    while(!fechaValida(iDia,iMes,iAnyo));
    siguienteFecha(&iDia,&iMes,&iAnyo);
    printf("La siguiente fecha es: %d de %d de %d",iDia,iMes,iAnyo);
}

int diasPorMes(int iMes,int iAnyo)
{
    int iDia;
    switch(iMes)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        iDia=31;
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        iDia=30;
        break;
    case 2:
        if(iAnyo%4==0&&(iAnyo%100!=0||iAnyo%400==0))
        {
            iDia=29;
        }
        else
        {
            iDia=28;
        }
        break;
    default:
        iDia=-1;
    }
    return iDia;
}

int fechaValida(int iDia,int iMes,int iAnyo)
{
    int iValido=1;
    if(iAnyo<1||iMes<1||iMes>12||iDia<1||iDia>diasPorMes(iMes,iAnyo))
    {
        iValido=0;
    }
    return iValido;
}

void siguienteFecha(int *iDia,int *iMes,int *iAnyo)
{
    int iVarDia=*iDia;
    int iVarMes=*iMes;
    int iVarAnyo=*iAnyo;
    if(iVarDia==diasPorMes(iVarMes,iVarAnyo))
    {
        if(iVarMes==12)
        {
            iVarDia=1;
            iVarMes=1;
            iVarAnyo++;
        }
        else
        {
            iVarDia=1;
            iVarMes++;
        }
    }
    else
    {
        iVarDia++;
    }
    *iDia=iVarDia;
    *iMes=iVarMes;
    *iAnyo=iVarAnyo;
}

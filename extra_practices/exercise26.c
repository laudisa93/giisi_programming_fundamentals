#include <stdio.h>
/*Escriba un programa que lea dos fechas dadas por año, mes y día e indique qué fecha es posterior
en el tiempo.*/
void main()
{
    int anyo1,anyo2,mes1,mes2,dia1,dia2;
    printf("Introduzca una fecha: --/--/----");
    scanf("%d/%d/%d",&dia1,&mes1,&anyo1);
    printf("Introduzca una fecha: --/--/----");
    scanf("%d/%d/%d",&dia2,&mes2,&anyo2);
    if (anyo1<anyo2)
    {
        printf("La segunda fecha(%d/%d/%d) es posterior a la primera (%d/%d/%d)", dia2,mes2,anyo2,dia1,mes1,anyo1);
    }
    else if (anyo1>anyo2)
    {
        printf("La primera fecha(%d/%d/%d) es posterior a la segunda (%d/%d/%d)", dia1,mes1,anyo1,dia2,mes2,anyo2);
    }
    else if (anyo1==anyo2)
    {
        if (mes1<mes2)
        {
            printf("La segunda fecha(%d/%d/%d) es posterior a la primera (%d/%d/%d)", dia2,mes2,anyo2,dia1,mes1,anyo1);
        }
        else if (mes1>mes2)
        {
            printf("La primera fecha(%d/%d/%d) es posterior a la segunda (%d/%d/%d)", dia1,mes1,anyo1,dia2,mes2,anyo2);
        }
        else if (mes1==mes2)
        {
            if(dia1<dia2)
            {
                printf("La segunda fecha(%d/%d/%d) es posterior a la primera (%d/%d/%d)", dia2,mes2,anyo2,dia1,mes1,anyo1);
            }
            else if (dia1>dia2)
            {
                printf("La primera fecha(%d/%d/%d) es posterior a la segunda (%d/%d/%d)", dia1,mes1,anyo1,dia2,mes2,anyo2);
            }
            else
                printf("Las fechas son iguales");
        }

    }
}

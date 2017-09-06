#include <stdio.h>
/*Escriba un programa que lea una fecha representada por tres datos de tipo entero e imprima en la pantalla la fecha
correspondiente al día siguiente.*/
    void main(){
        int d, m, a, dd, mm, aa;
        printf("Escriba una fecha:");
        scanf("%d%d%d", &d, &m, &a);
        if(d<28){
            dd=d+1;
            mm=m;
            aa=a;
            printf("\nEl día siguiente es: %d / %d / %d", dd, mm, aa);
        }
        else if(d==28 && m==2){
            dd=1;
            mm=m+1;
            aa=a;
            printf("\nEl día siguiente es: %d / %d / %d", dd, mm, aa);
        }
        else if (d>28 && )
    }

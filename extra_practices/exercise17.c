#include <stdio.h>
/*Escriba un programa que lea desde teclado su fecha de nacimiento y la fecha del d�a de hoy e imprima
en la pantalla el n�mero de d�as que lleva viviendo. Una fecha puede venir representada por tres
enteros correspondientes al a�o, mes y d�a. Considere que todos los meses del a�o tienen 30 d�as y
suponga que todos los a�os tienen 365 d�as*/
void main(){
    int d,m,a,da,ma,aa,at,mt,dt,total;
    printf("Escriba su fecha de nacimiento:--/--/----");
    scanf("%d%d%d",&d,&m,&a);
    printf("Escriba la fecha actual:--/--/----");
    scanf("%d%d%d",&da,&ma,&aa);
    at=(aa*365)-(a*365);
    mt=(365-(ma*30))-(365-(m*30));
    dt=(30-da)-(30-d);
    total=at+mt+dt;
    printf("Lleva viviendo %d dias",total);
}

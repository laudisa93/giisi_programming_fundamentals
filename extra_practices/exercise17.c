#include <stdio.h>
/*Escriba un programa que lea desde teclado su fecha de nacimiento y la fecha del día de hoy e imprima
en la pantalla el número de días que lleva viviendo. Una fecha puede venir representada por tres
enteros correspondientes al año, mes y día. Considere que todos los meses del año tienen 30 días y
suponga que todos los años tienen 365 días*/
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

#include <stdio.h>
/*Escribir un programa que lea la hora de un día de notación de 24 horas y la respuesta en
notación de 12 horas. Por ejemplo, si la entrada es 13:45, la salida será 1:45 PM
El programa pedirá al usuario que introduzca exactamente cinco caracteres. Así, por
ejemplo, las nueve en punto se introduce como 09:00*/
void main(){
    int h1,m1,h2;
    printf("Escriba la hora (en 24 horas):__:__\n");
    scanf("%d:%d",&h1,&m1);
    if (h1<=12){
        printf("La hora es %d:%d AM",h1,m1);
        }
    else{
        h2=h1-12;
        printf("La hora es %d:%d PM",h2,m1);
    }
}

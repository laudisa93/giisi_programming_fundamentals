#include <stdio.h>
/*Escribir una estructura de control que examine el valor de una variable real llamada temp y escriba uno de los
siguientes mensajes dependiendo de su valor:
    a) HIELO, si el valor de temp es menor que 0.
    b) AGUA, si el valor de temp se encuentra entre 0 y 100.
    c) VAPOR, si el valor de temp es mayor que 100.*/
    void main(){
     float temp;
     printf("\nEscriba el valor de la temperatura:");
     scanf("%f", &temp);
     if (temp<0){
        printf("\nHIELO");
     }
     else if (temp>=0 && temp<100){
        printf("\nAGUA");
     }
     else {
        printf("\nVAPOR");
     }
    }

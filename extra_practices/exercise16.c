#include <stdio.h>
/*Escriba un programa que lea un número entero que representa un mes e imprima en la pantalla el
número de días del mes.*/
void main(){
    int imes,idias;
    printf("Escriba el numero del mes:\n");
    scanf("%d",&imes);
    switch(imes){
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        idias=31;
        printf("El mes tiene %d dias", idias);
        break;
        case 4: case 6: case 9: case 11:
        idias=30;
        printf("El mes tiene %d dias", idias);
        break;
        case 2:
        idias=28;
        printf("El mes tiene %d dias", idias);
        break;
        default:
        idias=0;
        printf("El mes debe estar entre 1 y 12");
        }
}

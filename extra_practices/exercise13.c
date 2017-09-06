#include <stdio.h>
/*Escriba un programa que lea dos números enteros por teclado y muestre el siguiente menú:
            MENÚ
        ------------------------
        1. Sumar
        2. Restar
        3. Multiplicar
        4. Dividir
Elija una opción:
El usuario debe elegir una opción y mostrar el resultado correspondiente de ejecutar la operación
seleccionada con los dos números.*/
void main(){
    int x,y,i,suma,resta,mult,div;
    printf("    MENU    \n------------------------\n    1. Sumar\n     2. Restar\n      3. Multiplicar\n        4. Dividir\n");
    printf("Introduzca dos numeros enteros:\n");
    scanf("%d%d",&x,&y);
    printf("Seleccione una opcion del menu:\n");
    scanf("%d",&i);
    switch(i){
        case 1:
            suma=x+y;
            printf("La suma vale %d",suma);
            break;
        case 2:
            resta=x-y;
            printf("La resta vale %d",resta);
            break;
        case 3:
            mult=x*y;
            printf("La multiplicacion vale %d",mult);
            break;
        case 4:
            div=x/y;
            printf("La division vale %d",div);
            break;
        default:
            printf("El numero introducido no es una opcion");
    }

}

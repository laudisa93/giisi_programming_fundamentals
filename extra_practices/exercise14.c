#include <stdio.h>
/*Ampliar el programa del ejercicio anterior para que cuando el usuario elija una opción distinta a
las 4 opciones existentes muestre en la pantalla el siguiente mensaje “Esa opción no existe. Elija
una opción entre 1 y 4”.*/
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
            printf("Esa opción no existe. Elija una opción entre 1 y 4");
    }

}

#include <stdio.h>
/*Añada la opción “5. Salir” al menú del EJ13 de tal forma que el menú vuelva a aparecer hasta que el usuario
introduzca la opción 5.*/
void main(){
    int x,y,i,suma,resta,mult,div;
    do{
    printf("Introduzca dos numeros enteros:\n");
    scanf("%d%d",&x,&y);
    printf("Seleccione una opcion del menu:\n");
    printf("    MENU    \n------------------------\n    1. Sumar\n    2. Restar\n    3. Multiplicar\n    4. Dividir\n    5. Salir\n");
    scanf("%d",&i);
    switch(i){
        case 1:
            suma=x+y;
            printf("La suma vale %d\n",suma);
            break;
        case 2:
            resta=x-y;
            printf("La resta vale %d\n",resta);
            break;
        case 3:
            mult=x*y;
            printf("La multiplicacion vale %d\n",mult);
            break;
        case 4:
            div=x/y;
            printf("La division vale %d\n",div);
            break;
        case 5:
            break;
        default:
            printf("El numero introducido no es una opcion\n");
    }
    }while(i!=5);
}

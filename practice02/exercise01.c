#include <stdio.h>
/*Escriba un programa que solicite al usuario las coordenadas cartesianas de un punto (X,Y) y determine a qué
cuadrante pertenece. Si el punto facilitado por el usuario es el origen de coordenadas habrá que mostrar un mensaje informando de
tal circunstancia.*/
    void main (){
        int x, y;
        printf("\nEscriba las coordenadas:");
        scanf("%d%d", &x, &y);
        if (x>0 && y>0){
            printf("El punto (%d,%d) está en el primer cuadrante", x, y);
        }
        else if (x<0 && y>0){
            printf("\nEl punto (%d,%d) está en el segundo cuadrante", x, y);
        }
        else if (x<0 && y<0){
            printf("\nEl punto (%d,%d) está en el tercer cuadrante", x, y);
        }
        else if (x>0 && y<0){
            printf("\nEl punto (%d,%d) está en el cuarto cuadrante", x, y);
        }
        else if (x==0){
            printf("\nEl punto (%d,%d) está en el eje Y", x, y);
        }
        else if (y==0){
            printf("\nEl punto (%d,%d) está en el eje X", x, y);
        }
        else {
            printf("\nEl punto (%d,%d) está en el origen de coordenadas", x, y);
        }
    }

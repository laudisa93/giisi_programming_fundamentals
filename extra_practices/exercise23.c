#include <stdio.h>
/*Escriba un programa que lea las dos coordenadas de un punto en el plano sin considerar los ejes
de coordenadas e imprima en que cuadrante se encuentra.*/
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
        else
            printf("El punto no puede estar en el origen de coordenadas");
    }

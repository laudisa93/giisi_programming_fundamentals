#include <stdio.h>
/*Escriba un programa que lea las notas de la prueba escrita de Ense�anzas B�sicas de la asignatura Fundamentos de
Programaci�n de los alumnos de una clase y muestre en la pantalla el n�mero de notas le�das, el n�mero de aprobados, el n�mero
de suspensos y la media. El programa finalizar� cuando el usuario introduzca una nota negativa.*/
void main(){
    float contador=0.00,nota,suma,media;
    int aprobados=0,suspensos=0;
    do{
        printf("Introduzca la nota: ");
        scanf("%f",&nota);
        contador ++;
        suma+=nota;
        if(nota>=5.00){
            aprobados ++;
        }else{
            suspensos ++;
        }
    }while(nota>=0);
    media=suma/contador;
    printf("El numero de aprobados es %d\n",aprobados);
    printf("El numero de suspensos es %d\n",suspensos-1);
    printf("La media es %.3f\n",media);
}

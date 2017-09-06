#include <stdio.h>
/*Implementar un programa que lea desde teclado cinco notas correspondientes a pruebas de la
asignatura Fundamentos de Programación y escriba en la pantalla la nota media.*/
void main(){
    float n1,n2,n3,n4,n5,media;
    printf("Introduzca las 5 notas:");
    scanf("%f%f%f%f%f",&n1,&n2,&n3,&n4,&n5);
    media=(n1+n2+n3+n4+n5)/5;
    printf("La media de Fundamentos de Programacion es %.2f", media);
}
